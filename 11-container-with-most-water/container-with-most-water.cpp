class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0; 
        int right = height.size() -1;
        int maxarea =0;
        while(left<right){
            int widht = right - left;
            int minheight  = min(height[left] , height[right]);
            int currentArea = widht * minheight;
            maxarea = max( maxarea , currentArea);
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxarea;
    }
};