// Stack And Queue Exam
#include <iostream>
#include <stack>

using namespace std;

class Stack
{
private:
    int top;
    int size;

public:
    int value;

    Stack(int value, int top, int size)
    {
        this->value;
        this->top;
        this->size;
    }

    int push()
    {
        if (value < size)
        {
            this->top++;
        }
    }

    int pop()
    {
        if (value > size)
        {
            this->top--;
        }
    }

    bool isEmpty()
    {
        if (value == 0)
        {
            this->value;
        }
    }

    bool isFull()
    {
        if (value == size)
        {
            this->value;
        }
    }
};

int main()
{
    int choice;

    do
    {
        cout << "Enter 1 for Add an element into stack: " << endl;
        cout << "Enter 2 for removes the top element from the stack: " << endl;
        cout << "Enter 3 for display the top element without removing it: " << endl;
        cout << "Enter 4 for checks if the stack is empty: " << endl;
        cout << "Enter 5 for checks if the stack is full: " << endl;
        cout << "Enter 0 for Exits: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            // push();
            cout << "Elements successfully added!" << endl;
            break;

        case 2:
            // pop()
            cout << "Elements successfully removed!" << endl;
            break;

        case 3:
            // top()
            cout << "Displaying top element without removing it !" << endl;
            break;

        case 4:
            // isEmpty()
            cout << "Stack is empty!" << endl;
            break;

        case 5:
            // isFull()
            cout << "Stack is full!" << endl;
            break;

        default:
            cout << "Code exits!" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
