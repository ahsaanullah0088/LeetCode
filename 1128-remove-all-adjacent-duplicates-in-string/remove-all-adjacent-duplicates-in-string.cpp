class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int count =-1;
        for(int i=0; i<s.length();i++){
            if(ans.length()>0){
                if(ans[count] == s[i]){
                    ans.pop_back();
                    count--;
                }else{
                    ans.push_back(s[i]);
                    count++;
                }
            }else{
                ans.push_back(s[i]);
                count++;
            }
        }
        return ans;
    }
};