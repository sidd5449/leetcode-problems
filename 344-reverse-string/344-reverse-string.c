

void reverseString(char* s, int sSize){
    char temp;
    int mid = sSize/2;
    for(int i=0; i<mid; i++){
        temp=s[i];
        s[i] = s[sSize-i-1];
        s[sSize-i-1] = temp;
        
    }
    return s;
}