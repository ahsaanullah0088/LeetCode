class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            bool foundDuplicate = false;
            for(int j = 0; j < nums.size(); j++) {
                if(i != j && nums[i] == nums[j]) {
                    foundDuplicate = true;
                    break;
                }
            }
            if(!foundDuplicate) {
                return nums[i];
            }
        }
        // If the loop completes without finding a single number, there may be an issue with the input data.
        // You may want to handle this case differently depending on the requirements.
        return -1; // Or any other suitable value indicating an error or no single number found
    }
};
