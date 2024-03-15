class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int>result(m+n, 0);
        int k = 0;
        while(i < m && j < n){
            if(nums1[i] > nums2[j]){
                result[k] = nums2[j];
                j++;
            }else{
                result[k] = nums1[i];
                i++;
            }
            k++;
        }
        while(i < m){
            result[k] = nums1[i];
            i++;
            k++;
        }
        while(j < n){
            result[k] = nums2[j];
            k++;
            j++;
        }

        for(int i = 0; i < result.size(); i++){
            nums1[i] = result[i];
        }
    }
};