class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int insertposition = 0;
     for( int i =0; i<nums.size(); i++){
        if(nums[i] !=0){
            nums[insertposition] = nums[i];
            insertposition++;
        }
     }
     while ( insertposition < nums.size()){
        nums[insertposition++] = 0;
     }
    }
};