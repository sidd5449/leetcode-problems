

char * replaceDigits(char * s){
    for(int i=0;i<strlen(s);i++){
        if(i%2==1)s[i]=s[i-1]+s[i]-'0';
    }
    return s;
}