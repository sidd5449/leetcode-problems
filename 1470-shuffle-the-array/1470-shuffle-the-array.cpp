class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x;
        vector<int>y;
        vector<int>z;
        
        for(int i=0; i<nums.size()/2;i++){
            x.push_back(nums[i]);
        }
        for(int i=nums.size()/2; i<nums.size();i++){
            y.push_back(nums[i]);
        }
        for(int k=0; k<n; k++){
            
            z.push_back(x[k]);
            z.push_back(y[k]);
        }
        
        return vector<int>(z.begin(), z.end());
        
    }
};