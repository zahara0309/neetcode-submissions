class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto s : strs){
            for(auto ch : s){
                res.push_back(ch);
            }
            res.push_back('#');
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string cur;
        int i=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '#'){
                ans.push_back(cur);
                cur = "";

            }
            else{
                cur.push_back(s[i]);
            }
        }
        return ans;
       
    }
};
