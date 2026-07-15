class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size(), 0);
        //first part
        for(int i = 0; i < nums.size(); i++){   
            ans[i] = nums[i];
        }
        //concatenate part
        for(int i = 0; i < nums.size(); i++){
            ans[i + nums.size()] = nums[i];
        }
        return ans;
    }
};