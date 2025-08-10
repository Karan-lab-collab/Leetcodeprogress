int gcd(int a, int b){
    return b==0?a: gcd(b , a%b);
}

char* gcdOfStrings(char* str1, char* str2) {
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    char *concat1 = malloc(l1 + l2 + 1);
    char *concat2 = malloc(l1 + l2 + 1);
    strcpy(concat1, str1);
    strcat(concat1, str2);
    strcpy(concat2, str2);
    strcat(concat2, str1);

    if (strcmp(concat1, concat2) != 0) {
        free(concat1);
        free(concat2);
        return ""; // No common divisor
    }

    free(concat1);
    free(concat2);

    int len = gcd(l1, l2);
    char *result = malloc(len + 1);
    strncpy(result, str1, len);
    result[len] = '\0';
    return result;
}