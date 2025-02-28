class Stack {
    int size;
    char* array;
    int top;

public:
    Stack(int capacity = 1e5) {
        top = -1;
        size = capacity;
        array = new char[size];
    }
    ~Stack() {
        delete[] array;
        // cout << "Stack memory freed!" << endl;
    }
    void push(char x) {
        if (top + 1 == size) {
            // cout << "Stack overflow!" << endl;
            return;
        }
        top++;
        array[top] = x;
    }
    char pop() {
        if (isEmpty()) {
            // cout << "Stack underflow!" << endl;
            return '\0';
        }
        char result = array[top];
        top--;
        return result;
    }
    char getTop() {
        if (isEmpty()) {
            // cout << "Stack is empty!" << endl;
            return '\0';
        }
        return array[top];
    }
    int getSize() { return top + 1; }
    bool isEmpty() { return top == -1; }
};

class Solution {
public:
    string removeDuplicateLetters(string s) {
        Stack ST;
        bool Track[26];
        int Last[26];
        memset(Track, false, sizeof(Track));
        for (int i = 0; i < s.size(); i++) {
            Last[s[i] - 'a'] = i;
        }
        for (int i = 0; i < s.size(); i++) {
            int IDX = s[i] - 'a';
            if (Track[IDX]) {
                continue;
            }
            while (!ST.isEmpty() && s[i] < ST.getTop() &&
                   Last[ST.getTop() - 'a'] > i) {
                Track[ST.getTop() - 'a'] = false;
                ST.pop();
            }
            ST.push(s[i]);
            Track[IDX] = true;
        }
        string Result;
        while (!ST.isEmpty()) {
            Result.push_back(ST.pop());
        }
        reverse(Result.begin(), Result.end());
        return Result;
    }
};