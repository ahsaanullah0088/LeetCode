class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for( int i=0; i<s.size(); i++ ){
            char temp = s[i];
            if(temp == '(' ||temp == '{' ||temp == '['){
                st.push(temp);
            }else{
                if(!st.empty() &&  ((temp == ')' && st.top() == '(' ) ||
                                     (temp == '}' && st.top() == '{') ||
                                     (temp == ']' && st.top() == '[' ))){
                st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};