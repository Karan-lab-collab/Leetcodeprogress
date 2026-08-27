class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=0, len=0, maxlen=0, a=0;
        while(i<n){
            if(nums[i]==0){
                a++;
            }
            while(a>1){
                if(nums[j]==0){
                    a--;
                }
                j++;
            }
            len = i-j+1;
            if(len>maxlen){
                maxlen = len;
            }
            i++;
        }
        return maxlen-1;
    }
};