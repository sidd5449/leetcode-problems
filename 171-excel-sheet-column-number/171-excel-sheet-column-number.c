

int titleToNumber(char * columnTitle){
    int out = 0;
    for(int i=0; i<columnTitle[i]; i++){
        out = out*26;
        out = out+(columnTitle[i]-64);
    }
    return out;
}