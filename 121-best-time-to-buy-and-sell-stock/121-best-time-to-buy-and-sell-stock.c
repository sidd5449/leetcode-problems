int maxProfit(int* prices, int pricesSize)
{
    int max = 0;
    int left = 0;
    int right = 1;

    while (right < pricesSize) {
        int now = prices[right] - prices[left];
        if (prices[left] < prices[right])
            max = max > now ? max : now;
        else
            left = right;
        right++;
    }

    return max;
}