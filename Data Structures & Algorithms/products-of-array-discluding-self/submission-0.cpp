class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int zeroCnt = 0;
        int prod = 1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                prod *= nums[i];
            }
            else{
                zeroCnt++;
            }
        }

        if(zeroCnt > 1){
            return vector<int>(nums.size(), 0);
        }

        for(int i=0; i<nums.size(); i++){
            if(zeroCnt > 0){
                res[i] = (nums[i] == 0) ? prod : 0;
            }
            else{
                res[i] = prod / nums[i];
            }
        }
        return res;
    }
};
