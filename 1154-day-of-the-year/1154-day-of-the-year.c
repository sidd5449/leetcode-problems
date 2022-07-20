int dayOfYear(char * date){
    int year = (date[0] - 48)*1000 + (date[1] - 48)*100 + (date[2] - 48)*10 + date[3] - 48;  
    int month = (date[5] - 48)*10 + date[6] - 48;  
    int day = (date[8] - 48)*10 + date[9] - 48;  
    int amountOfDays[16] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int out=0;
    
    if(month == 1) {
        out = day;
    }
    else {
        for(int i=0; i < month-1; i++) {
            out += amountOfDays[i];
        }
        if(year % 4 == 0 && month > 2 && year != 1900) {
            out ++;
        }
        out += day;
    }
    
    return out;
    
}