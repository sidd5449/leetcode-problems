
int maxArea(int* height, int heightSize){
    int max=0;
    int n = 0;
    int area = 0;
    int colHeight = 0;
    int left = 0; 
    int right = heightSize-1;
    
    
    while(left<right){
        n = right-left;
        colHeight = (height[left]<height[right]) ? height[left]:height[right];
        area = n*colHeight;
        max = (area>max) ? area:max;
        
        if(height[left]<=height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return max;
}