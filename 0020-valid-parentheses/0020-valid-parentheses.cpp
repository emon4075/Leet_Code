class Stack
{
    int size;
    char *array;
    int top;

public:
    Stack(int capacity = 1e5)
    {
        top = -1;
        size = capacity;
        array = new char[size];
    }
    ~Stack()
    {
        delete[] array;
        // cout << "Stack memory freed!" << endl;
    }
    void push(char x)
    {
        if (top + 1 == size)
        {
            // cout << "Stack overflow!" << endl;
            return;
        }
        top++;
        array[top] = x;
    }
    char pop()
    {
        if (isEmpty())
        {
            // cout << "Stack underflow!" << endl;
            return '\0';
        }
        top--;
        return array[top];
    }
    char getTop()
    {
        if (isEmpty())
        {
            // cout << "Stack is empty!" << endl;
            return '\0';
        }
        return array[top];
    }
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
};

class Solution {
public:
    bool isValid(string s) {
        Stack ST;
        for(char C:s)
        {
            if(C=='(' || C=='{' || C=='[')
            {
                ST.push(C);
            }
            else{
                if(ST.isEmpty())
                {
                    return false;
                }
                else{
                    if(C==')' && ST.getTop()=='(')
                    {
                        ST.pop();
                    }
                    else if(C=='}' && ST.getTop()=='{')
                    {
                        ST.pop();
                    }
                    else if(C==']' && ST.getTop()=='[')
                    {
                        ST.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return ST.isEmpty();

    }
};