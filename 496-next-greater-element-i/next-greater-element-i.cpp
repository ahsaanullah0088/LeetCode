class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map; // Map to store the next greater element for each number in nums2
        stack<int> stack; // Stack to find the next greater elements

        // Iterate through nums2
        for (int element : nums2) {
            // While stack is not empty and the current element is greater than the top of the stack
            while (!stack.empty() && stack.top() < element) {
                map[stack.top()] = element; // Map the top of the stack to the current element
                stack.pop(); // Remove the element from the stack
            }
            stack.push(element); // Push the current element onto the stack
        }

        // Fill the result for nums1
        vector<int> res(nums1.size());
        for (int i = 0; i < nums1.size(); ++i) {
            // If the element exists in the map, get its value; otherwise, -1
            res[i] = map.count(nums1[i]) ? map[nums1[i]] : -1;
        }
        return res;
    }
};
