

int numWaterBottles(int numBottles, int numExchange){
    int ans = numBottles;
    int count = 0;
    
    while (numBottles >= numExchange) {
        count = numBottles / numExchange;
        numBottles = count + (numBottles % numExchange);
        ans += count;
    }
    
    return ans;
}