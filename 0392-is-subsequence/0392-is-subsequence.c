bool isSubsequence(char* s, char* t) {
    int i=0, j=0;
    while(s[i]!='\0'){
        int flag=0;
        while(t[j]!='\0'){
            if(t[j]==s[i]){
                flag=1;
                j++;
                break;
            }
            j++;
        }
        if(flag==0){
            return false;
        }
        i++;
    }
    return true;
}