bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int x=0, flag=0;
    for(int i=0; i<flowerbedSize; i++){
        if(flowerbed[i]==1){
            if(flag==1){
                x--;
            }
            flag=1;
        }else{
            if(flag==0){
                x++;
                flag=1;
            }else{
                flag=0;
            }
        }
    }
    if(x>=n){
        return true;
    }else{
        return false;
    }
}