class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> range;
        for(int i=1; i<=n; i++){
            range.push_back(i);
        }
        vector<int> current;
        int i=0;
            solve(k, i, 0, current, result, range);
        
        return result;
    }

    void solve(int k, int i, int index, vector<int>& current, vector<vector<int>>& result, vector<int>& range){
        if(index==k){
            result.push_back(current);
            return;
        }
        if(i==range.size()){
            return;
        }

        current.push_back(range[i]);
        solve(k,i+1, index+1, current, result, range);
        current.pop_back();
        solve(k, i+1, index, current, result, range);
        return;
    }
};