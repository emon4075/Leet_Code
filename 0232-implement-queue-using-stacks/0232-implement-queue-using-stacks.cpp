// https://leetcode.com/problems/implement-queue-using-stacks/
class MyQueue {
public:
    stack<int> S;
    MyQueue() {}

    void push(int x) { S.push(x); }

    int pop() {
        stack<int> newS;
        int Last;
        while (!S.empty()) {
            int K = S.top();
            S.pop();
            if (S.empty()) {
                Last = K;
                break;
            }
            newS.push(K);
        }
        while (!newS.empty()) {
            S.push(newS.top());
            newS.pop();
        }
        return Last;
    }

    int peek() {
        stack<int> newS;
        int Last;
        while (!S.empty()) {
            int K = S.top();
            S.pop();
            if (S.empty()) {
                Last = K;
            }
            newS.push(K);
        }
        while (!newS.empty()) {
            S.push(newS.top());
            newS.pop();
        }
        return Last;
    }

    bool empty() { return S.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */