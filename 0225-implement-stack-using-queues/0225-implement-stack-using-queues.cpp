// https://leetcode.com/problems/implement-stack-using-queues/
class MyStack {
public:
    queue<int> Q;
    MyStack() {}

    void push(int x) { Q.push(x); }

    int pop() {
        queue<int> NewQ;
        int Last;
        while (!Q.empty()) {
            int K = Q.front();
            Q.pop();
            if (Q.empty()) {
                Last = K;
                break;
            }
            NewQ.push(K);
        }
        Q = NewQ;
        return Last;
    }

    int top() {
        queue<int> NewQ;
        int Last;
        while (!Q.empty()) {
            int K = Q.front();
            Q.pop();
            if (Q.empty()) {
                Last = K;
            }
            NewQ.push(K);
        }
        Q = NewQ;
        return Last;
    }

    bool empty() { return Q.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */