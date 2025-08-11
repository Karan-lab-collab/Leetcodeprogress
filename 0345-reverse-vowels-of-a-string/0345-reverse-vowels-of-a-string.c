int isVowel(char a) {
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');
}

char* reverseVowels(char* s) {
    int n = strlen(s);
    int i =0, j=n-1;
    while(i<j){
        while(!(isVowel(s[i])) &&i<j){
            i++;
        }
        while(!(isVowel(s[j])) && i<j){
            j--;
        }
        if(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        
    }
    return s;
}