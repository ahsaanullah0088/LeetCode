class Solution {
public:
    string largestGoodInteger(string num) {
        char maxchar =  '\0';
        for(int i=2; i<num.size(); i++){
            if(num[i] == num[i-1]&& num[i] == num[i-2]){
                maxchar = max(maxchar , num[i]);
            }
        }
        if(maxchar == '\0'){
            return "" ;
        }
        return string(3, maxchar);
        
    }
};