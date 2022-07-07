bool isInterleave(char * s1, char * s2, char * s3){
    int m = strlen(s1);
    int n = strlen(s2);
    int l = strlen(s3);
    if ((m + n) != l)
        return false;
    int dp[m+1][n+1];
    for(int i = 0;i <= m;i += 1) {
        for(int j = 0;j <= n;j += 1) {
            if (i == 0 && j == 0)
                dp[i][j] = 1;
            else if(i == 0)
                dp[i][j] = dp[i][j-1] && s2[j-1] == s3[j-1];
            else if(j == 0)
                dp[i][j] = dp[i-1][j] && s1[i-1] == s3[i-1];
            else
                dp[i][j] = (dp[i][j-1] && s2[j-1] == s3[i+j-1]) || (dp[i-1][j] && s1[i-1] == s3[i+j-1]);
        }
    }
    return dp[m][n];
}