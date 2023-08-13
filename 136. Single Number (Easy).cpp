class Solution {
    public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        if(nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(), nums.end()); // 1,1,2,2,4
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[i] != nums[i+1] && nums[i] != nums[i-1]){
                ans = nums[i];
            }
        }
        if(nums[0] != nums[1]){
            ans = nums[0];
        }
        else if(nums[nums.size()-2] != nums[nums.size()-1]){
            ans = nums[nums.size()-1];
        }
        return ans;
    }
};