
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// Structure to store customer call details
struct Call {
    int id;
    string name;
    string issue;
    int priority;
};

// Compare function for Priority Queue
struct Compare {
    bool operator()(Call a, Call b) {
        if (a.priority == b.priority)
            return a.id > b.id;

        return a.priority < b.priority;
    }
};

// Data structures
queue<Call> normalCalls;
priority_queue<Call, vector<Call>, Compare> urgentCalls;
stack<Call> resolvedCalls;

int callID = 1;

// Function to display call details
void displayCall(Call c) {
    cout << "\nCall ID: " << c.id;
    cout << "\nCustomer Name: " << c.name;
    cout << "\nIssue: " << c.issue;
    cout << "\nPriority: "
         << (c.priority == 5 ? "Urgent" : "Normal");
    cout << "\n";
}

// Function to receive a new customer call
void receiveCall() {
    Call c;

    c.id = callID++;

    cin.ignore();

    cout << "\nEnter Customer Name: ";
    getline(cin, c.name);

    cout << "Enter Customer Issue: ";
    getline(cin, c.issue);

    cout << "Enter Priority (1-Normal, 5-Urgent): ";
    cin >> c.priority;

    if (c.priority < 1 || c.priority > 5) {
        cout << "\nInvalid priority! Call not added.\n";
        return;
    }

    if (c.priority == 5) {
        urgentCalls.push(c);
        cout << "\nUrgent call added to Priority Queue!\n";
    }
    else {
        normalCalls.push(c);
        cout << "\nNormal call added to Queue!\n";
    }
}

// Function to process the next customer call
void processCall() {
    Call c;

    // Urgent calls are processed first
    if (!urgentCalls.empty()) {
        c = urgentCalls.top();
        urgentCalls.pop();
    }
    else if (!normalCalls.empty()) {
        c = normalCalls.front();
        normalCalls.pop();
    }
    else {
        cout << "\nNo pending customer calls!\n";
        return;
    }

    cout << "\nProcessing Customer Call:";
    displayCall(c);

    // Store resolved call in Stack
    resolvedCalls.push(c);

    cout << "\nCall successfully resolved and added to history!\n";
}

// Function to display recently resolved calls
void showHistory() {
    if (resolvedCalls.empty()) {
        cout << "\nNo resolved calls available!\n";
        return;
    }

    stack<Call> temp = resolvedCalls;

    cout << "\n===== RECENTLY RESOLVED CALLS =====\n";

    while (!temp.empty()) {
        displayCall(temp.top());
        temp.pop();
    }
}

// Recursive IVR function
void IVR() {
    int choice;

    cout << "\n===== INTERACTIVE VOICE RESPONSE =====\n";
    cout << "1. Billing Support\n";
    cout << "2. Technical Support\n";
    cout << "3. Account Related Issues\n";
    cout << "4. Order Related Issues\n";
    cout << "5. Repeat IVR Menu\n";
    cout << "0. Exit IVR\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nConnecting to Billing Support...\n";
            break;

        case 2:
            cout << "\nConnecting to Technical Support...\n";
            break;

        case 3:
            cout << "\nConnecting to Account Support...\n";
            break;

        case 4:
            cout << "\nConnecting to Order Support...\n";
            break;

        case 5:
            cout << "\nRepeating IVR Menu...\n";
            IVR();  // Recursive function call
            break;

        case 0:
            cout << "\nExiting IVR System...\n";
            return;

        default:
            cout << "\nInvalid choice! Try again.\n";
            IVR();  // Recursive call
    }
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n====================================\n";
        cout << " SMART CUSTOMER SERVICE SYSTEM\n";
        cout << "====================================\n";

        cout << "1. Receive Customer Call\n";
        cout << "2. Process Next Call\n";
        cout << "3. View Resolved Call History\n";
        cout << "4. Start IVR System\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                receiveCall();
                break;

            case 2:
                processCall();
                break;

            case 3:
                showHistory();
                break;

            case 4:
                IVR();
                break;

            case 5:
                cout << "\nThank you for using Smart Customer Service System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
