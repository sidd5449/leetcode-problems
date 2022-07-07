int reverse(int x){
    long long val = 0;
    while(x){
        val = val * 10 + x % 10;
        x /= 10;
    }

    return (val > INT_MAX || val < INT_MIN) ? 0 : val;
}