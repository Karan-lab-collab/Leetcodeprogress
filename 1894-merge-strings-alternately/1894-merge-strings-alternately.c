

char * mergeAlternately(char * word1, char * word2){
    int l1=strlen(word1);
    int l2=strlen(word2);
    char *r = (char*)malloc((l1+l2+1)* sizeof(char));
    int i=0, j=0, k=0;
    while(i<l1 && j<l2){
        r[k++] = word1[i];
        i++;
        r[k++] = word2[j];
        j++;
    }
    
    while(i<l1){
        r[k++]=word1[i];
        i++;
    }
    while(j<l2){
        r[k++]=word2[j];
        j++;
    }
    r[k] = '\0';
    return r;
}