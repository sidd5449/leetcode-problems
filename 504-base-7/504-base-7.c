

char * convertToBase7(int num){
    if (!num) {
        return "0";
    }
    char *ans = calloc(1, 100);
    ans[0] = '-';
    bool neg = num < 0;
    int i = neg;
    if (neg) {
        num = -num;
    }
    while (num) {
        ans[i++] = num % 7 + '0';
        num /= 7;
    }
    int j = neg;
    i--;
    while (j < i) {
        char t = ans[j];
        ans[j++] = ans[i];
        ans[i--] = t;
    }
    return ans;
}