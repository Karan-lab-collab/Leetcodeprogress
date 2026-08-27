class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int arr[n+1];
        int max = 0;
        arr[0]=0;
        for(int i=1; i<=n; i++){
            arr[i] = arr[i-1] + gain[i-1];
            if(max<arr[i]){
                max = arr[i];
            }
        }
        return max;
    }
};