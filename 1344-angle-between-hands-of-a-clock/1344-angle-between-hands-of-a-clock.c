

double angleClock(int hour, int minutes){
    double angel_min = (double)minutes / 60.0 * 360.0;
    hour = hour % 12;
    double angel_hour = (double)hour / 12.0 * 360.0 + (double)minutes / 60.0  * 360.0/12.0;
    double ans = (angel_hour>angel_min)?angel_hour-angel_min:angel_min-angel_hour;
    if (ans > 180.0) ans = 360.0 - ans;
    return ans;
}