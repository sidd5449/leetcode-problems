

int strStr(char * haystack, char * needle){
    
    int hayLength = strlen(haystack);
    int needleLength = strlen(needle);
    
    if(hayLength == 0){
        return -1;
    }
    if(needleLength==0){
        return -1;
    }
    if(hayLength - needleLength<0){
        return -1;
    }
    
    int j;
    
    for (int i = 0; i<=hayLength; i++){
        j = 0;
        
        while(j<needleLength){
            if(haystack[j+i] != needle[j]) break;
            j++;
        }
        if(j == needleLength) return i;
        
    }
    return -1;
}