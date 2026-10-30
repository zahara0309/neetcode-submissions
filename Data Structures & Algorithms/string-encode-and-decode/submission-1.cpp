class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto s : strs){
            res += to_string(s.size()) + '#' + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string cur;
        int i=0;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            cur = s.substr(j+1, len);
            ans.push_back(cur);

            i = j + len + 1;
            j = i + 1;

        }
        return ans;
       
    }
};
