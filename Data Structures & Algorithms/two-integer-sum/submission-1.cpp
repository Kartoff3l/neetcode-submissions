class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //create a copy of array and sort
        vector<pair<int, int>> A;
        for(int i = 0; i < nums.size(); i++){
            A.push_back({nums[i], i});
        }
        sort(A.begin(), A.end());
        //initialize two pointer one at beginning, one at the end
        int i = 0, j = nums.size() - 1;
        //iterate thru array and check if the sum is equal
        while(i < j){
            int current = A[i].first + A[j].first;
            //return the indices if the sum is equal
            if(current == target){
                return {min(A[i].second, A[j].second),
                        max(A[i].second, A[j].second)};
            }
            //move i to the right if the sum is less than target
            else if(current < target){
                i++;
            }
            //move j to the left if the sum is greater than target
            else{
                j--;
            }
        }
        return {};
    }
};
