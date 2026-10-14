class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;

        int len = 0;
        int l = 0, r=0;
        while(r < n){
            if(mpp.find(s[r]) != mpp.end()){
                l = max(l, mpp[s[r]] + 1);
            }
            mpp[s[r]] = r;
            len = max(len, r-l+1);
            r++;
        }
        return len;
        
    }
};
