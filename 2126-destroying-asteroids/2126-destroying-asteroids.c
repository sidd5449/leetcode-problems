

bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize){
    long long massNew = mass;
    int j=0;
    int x=0;
    int i;
    while(j<asteroidsSize){
        i=0;
        x=0;
        while(x<asteroidsSize){
            if(asteroids[x]!=0 && asteroids[x]<=massNew){
                massNew+=asteroids[x];
                i=1;
                j++;
                asteroids[x]=0;
            }
            x++;
        }
        if(i==0){
            return false;
         }   
    }

    return true;
}