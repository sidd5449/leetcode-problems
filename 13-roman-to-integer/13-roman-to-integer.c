int romanToInt(char * s){
    int i,k=0,d[30],l;
    l=strlen(s);
    for(i=0;i<l;i++){
        switch(s[i])
        {
            case 'M' : d[i] = 1000;break;
            case 'D' : d[i] = 500;break;
            case 'C' : d[i] = 100;break;
            case 'L' : d[i] = 50;break;    
            case 'X' : d[i] = 10;break;    
            case 'V' : d[i] = 5;break;
            case 'I' : d[i] = 1;    
        }
    }
    for(i=0;i<l;i++){
            if(i==l-1 || d[i]>=d[i+1])
                k=k+d[i];
            else
                k=k-d[i];
        }
       return k; 
}