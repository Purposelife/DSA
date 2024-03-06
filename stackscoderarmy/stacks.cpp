#include <iostream>
#include <stack>
using namespace std;

class stacks
{
    int *arr;
    int size;
    int top;

public:
bool flag ;
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }
    
//pushing

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stacks overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            flag = 0;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"empty hai bhai";
            return;
        }
        else{
            top--;
            if(top == -1)
                flag = 1;
        }
    }

    int peek(){
        if(top == -1){
            cout<<"stack empty";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isempty(){
        return top == -1;
    }

    int size(){
        return top + 1;
    }
};
int main()
{
    stacks s(5);
    push(5);
    push(2);
    push(2);
    push(2);
    push(2);
}