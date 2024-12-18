#include <string>
#include <algorithm>

class Solution {
public:
bool checkVovels(char c){
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
}
    string reverseVowels(string s) {
        int left =0, right = s.size()-1;
        while(left< right){
            if(! checkVovels(s[left])){
                left ++;
            }
            else if(! checkVovels(s[right])){
                right --;
            }
            else{
                swap(s[left] , s[right]);
                left ++;
                right--;
            }
        }
        return s;
    }
};