class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        int r=0;
        for (int i=0;i<n;i++){
            r=r^nums[i];
        }
        
        return r;
        
    }
};