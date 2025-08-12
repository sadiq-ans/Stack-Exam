#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int size;

public:
    Stack(int size) {
        this->size = size;
        this->top = -1;
        this->arr = new int[size];
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top < size - 1) {
            arr[++top] = value;
            cout << "Element successfully added!" << endl;
        } else {
            cout << "Stack is full. Cannot add element." << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
            cout << "Element successfully removed!" << endl;
        } else {
            cout << "Stack is empty. Cannot remove element." << endl;
        }
    }

    void displayTop() {
        if (top >= 0) {
            cout << "Top element: " << arr[top] << endl;
        } else {
            cout << "Stack is empty." << endl;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);

    int choice;
    do {
        cout << "Enter 1 for Add an element into stack: " << endl;
        cout << "Enter 2 for removes the top element from the stack: " << endl;
        cout << "Enter 3 for display the top element without removing it: " << endl;
        cout << "Enter 4 for checks if the stack is empty: " << endl;
        cout << "Enter 5 for checks if the stack is full: " << endl;
        cout << "Enter 0 for Exits: " << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            int value;
            cout << "Enter the value to add: ";
            cin >> value;
            stack.push(value);
            break;
        }
        case 2:
            stack.pop();
            break;
        case 3:
            stack.displayTop();
            break;
        case 4:
            if (stack.isEmpty()) {
                cout << "Stack is empty!" << endl;
            } else {
                cout << "Stack is not empty!" << endl;
            }
            break;
        case 5:
            if (stack.isFull()) {
                cout << "Stack is full!" << endl;
            } else {
                cout << "Stack is not full!" << endl;
            }
            break;
        default:
            if (choice != 0) {
                cout << "Invalid choice. Please choose a valid option." << endl;
            }
            break;
        }
    } while (choice != 0);

    return 0;
}
