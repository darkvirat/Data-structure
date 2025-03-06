#include <iostream>
using namespace std;
class stack
{
    int *arr;
    int size;
    int top;

public:
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // push
    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "stack overflow";
        }
        else
        {
            top++;
            arr[top] = x;
            // cout<<"pushed element is "<<arr[top];
        }
    }
    // pop

    void pop()
    {
        if (top == -1)
        {
            cout << " stack underflow " << endl;
            return;
        }
        else
        {
            // cout<<"popped element is "<<arr[top];
            top--;
        }
    }
    // isempty
    bool isempty()
    {

        return top == -1;
    }
    // peek
    bool peek()
    {
        if (top = size - 1)
        {
            return true;
        }
        else
            false;
    }

    // IsSize
    int IsSize()
    {
        return top + 1;
    }
    void print()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    stack S(5);
    S.push(3);
    S.push(3);
    S.push(3);
    S.push(5);
    S.push(4);
    S.print();
    S.pop();
    cout << endl;
    S.print();
    cout << endl;
    cout << S.IsSize();
    cout << endl;
    cout << S.peek();
    cout << endl;
    cout << S.isempty();

    return 0;
}