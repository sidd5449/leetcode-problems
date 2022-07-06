

bool isPalindrome(int x){
    unsigned int reversed = 0; int original, remainder;
    original = x;
    if(x<0){
        return false;
    }
    else{
        while(x!=0){
        remainder = x%10;
        reversed = reversed*10 + remainder;
        x/=10;
        }
        if(original==reversed){
            return true;
        }
        else{
            return false;
        }
    }
    
}