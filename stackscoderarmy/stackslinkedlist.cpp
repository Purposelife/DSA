#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class stacks
{
    Node *top;
    int size;
    public : 
    stacks()
    {
        top = NULL;
        size = 0;
    }

    void push(int value)
    {
        Node *temp = new Node(value);
        if (temp == NULL)
        {
            cout << "stacks overflow";
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
        }
    }

    void pop()
    {
        Node *temp = top;
        if (top == NULL)
        {
            cout << "Stacks under flow";
        }
        else
        {
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "Stacks empty";
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    bool isempty(){
        return top == NULL;
    }

    bool issize(){
        return size;
    }
};

int main()
{
    stacks s;
    s.push(6);
    cout<<s.peek()<<endl;
    cout<<s.issize();
}