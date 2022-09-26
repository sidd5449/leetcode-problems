class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posNums;
        vector<int>negNums;
        vector<int>finalNums;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                negNums.push_back(nums[i]);
            }
            else{
                posNums.push_back(nums[i]);
            }
            
        }
        for(int k=0; k<nums.size()/2; k++){
            finalNums.push_back(posNums[k]);
            finalNums.push_back(negNums[k]);
            
        }
        return vector<int> (finalNums.begin(), finalNums.end());
    }
};