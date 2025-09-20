int maxArea(int* height, int heightSize) {
    int max=0, left=0, right=heightSize-1;
    while(left<right){
        int area;
        if(height[left]<height[right]){
            area = height[left]*(right-left);
            left++;
        }else{
            area = height[right]*(right-left);
            right--;
        }
        if(max<area){
            max=area;
        }
    }
    return max;
}