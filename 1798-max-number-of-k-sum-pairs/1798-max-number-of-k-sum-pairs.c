int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int maxOperations(int* nums, int numsSize, int k){
    qsort(nums, numsSize, sizeof(int), compare);
    int right=numsSize-1, left=0, count=0;
    while(left<right){
        if(nums[left]+nums[right]==k){
            count++;
            left++;
            right--;
        }else if(nums[left]+nums[right]>k){
            right--;
        }else{
            left++;
        }
    }
    return count;
}