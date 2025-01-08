class Solution {
public:
bool CheckVovels(char c){
    return(
        c=='a'|| c=='e' || c=='i'||c=='o'||c=='u'||c=='A'|| c=='E' || c=='I'||c=='O'||c=='U'
    );
}
    string reverseVowels(string s) {
        int left=0, right=s.size()-1;
        while(left<right){
            if(!CheckVovels(s[left])){
                left++;
            } else if(!CheckVovels(s[right])){
                right--;
            }else{
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};