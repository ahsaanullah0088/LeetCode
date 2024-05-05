class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     string Result;
     int n1 = word1.size();
     int n2 = word2.size();
     int i=0;
     while(i< n1 || i<n2){
        if(i<n1)
        Result.push_back(word1[i]);
        if(i<n2)
        Result.push_back(word2[i]);
        i++;
     }
     return Result;
};
};