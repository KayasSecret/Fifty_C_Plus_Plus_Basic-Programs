#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

/* PUSH operation */
void push() {
    int item;
    if (top == MAX - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        cout << "Enter element to push: ";
        cin >> item;
        top++;
        stack[top] = item;
        cout << "Element inserted" << endl;
    }
}

/* POP operation */
void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "Deleted element is " << stack[top] << endl;
        top--;
    }
}

/* DISPLAY operation */
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements are:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main() {
    int choice;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: cout << "Exit" << endl;
                    break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}