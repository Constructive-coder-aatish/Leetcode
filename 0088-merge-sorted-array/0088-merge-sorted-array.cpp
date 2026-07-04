class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int>uniArr;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                
                uniArr.push_back(nums1[i]);
                
                i++;
            }
            else{
                
                uniArr.push_back(nums2[j]);
                
                j++;
            }
        }
        while(j<n){
           
            uniArr.push_back(nums2[j]);
            
            j++;
        }
        while(i<m){
           
            uniArr.push_back(nums1[i]);
            
            i++;
        }
        for (int k = 0; k < m + n; k++) {
            nums1[k] = uniArr[k];
        }
        
        
    }
};