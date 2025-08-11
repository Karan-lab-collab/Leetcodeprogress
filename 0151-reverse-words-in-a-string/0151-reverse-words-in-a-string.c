char* reverseWords(char* s) {
    int l=strlen(s), count=0, x=0, k=0, f1=0;
    char* r = (char*)malloc(10000 * sizeof(char));
    for(int i=l-1; i>=0; i--){
        if(count==0){
            if(s[i]!=' '){
                count=1;
                x=i;
            }
        }
        if(count==1){
            if(s[i]==' '){
                count=2;
            }
        }
        if(count==2){
            for(int j=i+1; j<=x; j++){
                r[k++]=s[j];
            }
            r[k++] = ' ';
            count=0;
        }else if(i==0 && s[i]!=' '){
            for(int j=0; j<=x; j++){
                r[k++]=s[j];
            }
            f1=1;
        }
    }
    if(f1==1){
       r[k]='\0';
    }else{
       r[--k]='\0';
    }
    return r;
}