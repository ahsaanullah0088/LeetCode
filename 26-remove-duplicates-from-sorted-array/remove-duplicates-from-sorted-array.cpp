class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=1;
        int size = nums.size();
        for (int i=1; i<nums.size(); i++){
         if(nums[i-1] != nums[i]){
            nums[n] = nums[i];
            n++;
         }
        }
        return n;
    }
};