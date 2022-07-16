int maxProfit(int* a, int n)
{
     int p=0;
    int max=0 , t=0;
    for(int i=1 ; i<n ; i++)
    {
        if(a[i]<a[i-1])
        {
            p=i;
            t=t+max;
            max=0;
        }
        if(a[i]>a[i-1])
        {
            max= max<a[i]-a[p]?a[i]-a[p]:max;
            
        }



    }
    t=t+max;

    return t;

}