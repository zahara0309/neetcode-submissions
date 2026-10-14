class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(string s : strs){
            string sortS = s;
            sort(sortS.begin(), sortS.end());
            res[sortS].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto it : res){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};
