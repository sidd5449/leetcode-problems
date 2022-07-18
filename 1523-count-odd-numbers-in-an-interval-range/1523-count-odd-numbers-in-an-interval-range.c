int countOdds(int low, int high){
    int high_pre_odd_num=0,low_pre_odd_num=0;
    if(high%2==0){
        high_pre_odd_num=high/2;
    }
    else{
        high_pre_odd_num=high/2+1;
    }
    if(low%2==0){
        low_pre_odd_num=low/2;
    }
    else{
        low_pre_odd_num=low/2;
    }
    return high_pre_odd_num-low_pre_odd_num;
}