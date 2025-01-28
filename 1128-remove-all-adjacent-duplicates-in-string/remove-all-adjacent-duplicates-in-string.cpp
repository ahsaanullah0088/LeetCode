class Solution {
public:
    string removeDuplicates(string s) {
        // Use a stack implemented with a string
        string stack;
        
        for (char c : s) {
            // Check if the top of the stack is equal to the current character
            if (!stack.empty() && stack.back() == c) {
                stack.pop_back(); // Remove the top of the stack
            } else {
                stack.push_back(c); // Add the current character to the stack
            }
        }
        
        return stack; // Return the remaining characters as the result
    }
};
