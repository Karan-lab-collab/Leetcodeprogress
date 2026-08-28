class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int prefix[n+1];
        prefix[0] = 0;
        for(int i=1; i<n+1; i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }
        int pi = -1;
        for(int i=0; i<n; i++){
            if(prefix[i]==(prefix[n] - prefix[i+1])){
                pi = i;
                break;
            }
        }
        return pi;
    }
};