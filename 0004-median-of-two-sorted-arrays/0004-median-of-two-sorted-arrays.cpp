class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        int i=0, j=0;
        double median;
        int st=0, end=n+m;

        while(i<n && j<m){
            if (nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
            
        }

        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }

        if((n+m)%2==0){
            median=(ans[(n+m)/2 -1]+ ans[(n+m)/2])/2.0;
            

        }
        else{
            median=ans[(n+m)/2];
        }
        return median;
        
    }
};