class Solution {
public:
    std::string removeDuplicates(std::string s) {
        std::stack<char> charStack;

        for (char c : s) {
            if (!charStack.empty() && charStack.top() == c) {
                charStack.pop();
            } else {
                charStack.push(c); 
            }
        }

        std::string result;
        while (!charStack.empty()) {
            result = charStack.top() + result; 
            charStack.pop();
        }

        return result;
    }
};
