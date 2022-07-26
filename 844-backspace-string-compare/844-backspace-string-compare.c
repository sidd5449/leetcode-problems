

bool backspaceCompare(char * s, char * t){
    int sidx = 0, tidx = 0,i=0;
    char *st = (char *) calloc(strlen(s)+1,sizeof(char));
    char *tt = (char *) calloc(strlen(t)+1,sizeof(char));

    for(i=0;i<strlen(s);i++)
    {
        if(s[i] == '#')
            sidx = (sidx>0) ? sidx-1 : 0;
        else
            st[sidx++] = s[i];
    }
    for(i=0;i<strlen(t);i++)
    {
        if(t[i] == '#')
            tidx = (tidx>0) ? tidx-1 : 0;
        else
            tt[tidx++] = t[i];
    }
    if(tidx != sidx)
        return false;

    while(tidx && sidx)
    {
        if(st[--sidx] != tt[--tidx])
            return false;
    }
    free(st);
    free(tt);
    return true;
}