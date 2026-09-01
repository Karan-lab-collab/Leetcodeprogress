class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int> current;
        int index = 0;
        solve(current, nums, result,index);
        return result;
    }

    void solve(vector<int>& current, vector<int>& nums, vector<vector<int>>& result, int index){
        if(index== nums.size()){
            result.push_back(current);
            return;
        }

        current.push_back(nums[index]);
        solve(current, nums, result, index+1);
        current.pop_back();
        solve(current, nums, result, index+1);

    }
};