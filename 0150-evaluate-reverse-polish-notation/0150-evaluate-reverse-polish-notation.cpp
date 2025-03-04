class Solution {
public:
    int applyOperation(int a, int b, char op) {
        switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return b ? a / b : 0;
        case '^':
            return pow(a, b);
        default:
            return 0;
        }
    }

    bool isOperator(const string& s) {
        return s == "+" || s == "-" || s == "*" || s == "/" || s == "^";
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (auto& c : tokens) {
            if (!isOperator(c)) {
                s.push(stoi(c));
            } else {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.push(applyOperation(a, b, c[0]));
            }
        }
        return s.top();
    }
};
