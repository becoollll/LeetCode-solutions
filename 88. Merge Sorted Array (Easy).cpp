class Solution {
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int c = nums1.size();
        for(int i = m; i < c; i++){
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};