class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        int i=0;
        int sum=0;
        vector<int> current;
        solve(target, i, sum, candidates, current, result);
        return result;
    }

    void solve (int target, int i,int sum, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result){
        if(sum==target){
            result.push_back(current);
            return;
        }else if(sum>target){
            return;
        }else if(i==candidates.size()){
            return;
        }

        current.push_back(candidates[i]);
        sum+=candidates[i];
        solve(target, i, sum, candidates, current, result);
        current.pop_back();
        sum-=candidates[i];
        solve(target, i+1, sum, candidates, current, result);
    }
};