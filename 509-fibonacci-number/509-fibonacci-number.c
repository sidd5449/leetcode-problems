
int fib(int n){
    
    if (n == 0)
        return (0);
    
    int first = 0;
    int second = 1;
    int temp;
    int sum;
    for (int i = 1; i < n; i++)
    {
        sum = first + second;
        temp = first;
        first = second;
        second = second + temp;
    }
    return (sum);
}