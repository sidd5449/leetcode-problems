bool rotateString(char * s, char * goal){
    int index=0,i=0;
    if(strlen(s)!=strlen(goal))return false;
    int count=0;
    for(int j=0;j<strlen(s)-1;j++)
    {
        count=0;
        for( i=0;i<strlen(s);i++)
        {
            if(s[i]==goal[(i+j)%strlen(s)])
            {
                count++;
            }
        }
        if(count==strlen(s))return true;
    }
    return false;

}