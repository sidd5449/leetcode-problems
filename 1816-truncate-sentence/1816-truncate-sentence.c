

char * truncateSentence(char * s, int k){
    int size = strlen(s);
    int count = 0;
    for(int i = 0 ; i < size ;i++){
        if(s[i] == ' ')
            count++;
        if(count == k){
            s[i] = '\0';
            break;
        }
    }
    return s;
}