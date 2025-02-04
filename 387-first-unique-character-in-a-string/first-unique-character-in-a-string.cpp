class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> map;
        queue<int> q;
        for( int i=0; i<s.size(); i++){
            map[s[i]]++;
            q.push(i);
        }

        while(!q.empty()){
            int index = q.front();
            if(map[s[index]]==1){
                return index;
            }
            q.pop();
        }
        return -1;
    }
};