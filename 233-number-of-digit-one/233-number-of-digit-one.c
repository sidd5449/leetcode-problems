int countDigitOne(int n){
    long base = 1, count = 0, digit;
    for(int i = 0; n / base; i++, base *= 10){    
        digit = n / base % 10;
        count += (digit * i * base / 10);        
        if(digit > 1) count += base;             
        else if(digit) count += (1 + n % base);  
    }
    return count;
}