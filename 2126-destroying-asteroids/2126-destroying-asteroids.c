

bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize){
    long long massNew = mass;
    int j=0;
    int x=0;
    int flag;
    while(j<asteroidsSize){
        flag=0;
        x=0;
        while(x<asteroidsSize){
            if(asteroids[x]!=0 && asteroids[x]<=massNew){
                massNew+=asteroids[x];
                flag=1;
                j++;
                asteroids[x]=0;
            }
            x++;
        }
        if(flag==0){
            return false;
         }   
    }

    return true;
}