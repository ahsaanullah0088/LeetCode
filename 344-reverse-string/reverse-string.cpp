class Solution {
public:
    void reverseString(vector<char>& s) {
        int left =0 , right = s.size() -1;
        while(right > left){
            char v;
            v = s[left];
            s[left] = s[right];
            s[right] = v;
            left++;
            right--;
        }
    }
};