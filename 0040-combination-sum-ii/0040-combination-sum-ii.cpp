class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        int sum=0;
        sort(candidates.begin(), candidates.end());
        solve(target, sum, 0, candidates, current, result);
        return result;
    }

    void solve(int target, int sum, int index, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result){
        if(sum==target){
            result.push_back(current);
            return;
        }else if(sum>target){
            return;
        }else if(index>=candidates.size()){
            return;
        }
        
        current.push_back(candidates[index]);
        sum+=candidates[index];
        solve(target, sum, index+1, candidates, current, result);
        current.pop_back();
        sum-=candidates[index];
        while(index<candidates.size()-1){
            if(candidates[index]==candidates[index+1]){
                index+=1;
            }else{
                break;
            }
        }
        solve(target, sum, index+1, candidates, current, result);
    }
};