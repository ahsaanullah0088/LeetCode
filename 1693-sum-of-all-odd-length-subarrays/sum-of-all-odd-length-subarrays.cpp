class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size(), oddSum{0};
        for (int i=1; i<=n; i+=2) {
            int j=0;
            while (i+j<=n) {
                for (int k{0}; k<i; ++k) {
                    oddSum+=arr[k+j];
                }
                j++;
            }
        }
        return oddSum;
    }
};