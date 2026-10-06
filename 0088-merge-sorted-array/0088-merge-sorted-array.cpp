class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int l=0;
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[l++];
        }
        sort(nums1.begin(),nums1.end());
        // while(i<m && j<n){
        //     if(nums1[i]<nums2[j]){
        //         i++;
        //     }
        //     else if(nums1[i]>nums2[j]){
        //         swap(nums1[i],nums2[j]);
        //         i++;
        //     }
        // }
    }
};