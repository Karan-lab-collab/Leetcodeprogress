/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int x=0;
    for(int i=0; i<candiesSize; i++){
        if(x<candies[i]){
            x=candies[i];
        }
    }
    bool* r = (bool*)malloc(candiesSize * sizeof(bool));
    for(int i=0; i<candiesSize; i++){
        if(candies[i]+extraCandies>=x){
            r[i] = true;
        }else{
            r[i] = false;
        }
    }
    * returnSize = candiesSize;
    return r;
}