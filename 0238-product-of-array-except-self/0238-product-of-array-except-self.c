/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *answer = (int*)malloc(numsSize * sizeof(int));
    int ar1[numsSize], ar2[numsSize];
    int p1=1, p2=1;
    for(int i=0; i<numsSize; i++){
        ar1[i]=p1;
        p1 = p1*nums[i];
        ar2[numsSize-1-i]=p2;
        p2=p2*nums[numsSize-1-i];
    }
    for(int i=0; i<numsSize; i++){
        answer[i] = ar1[i] * ar2[i];
    }
    *returnSize = numsSize;
    return answer;
}