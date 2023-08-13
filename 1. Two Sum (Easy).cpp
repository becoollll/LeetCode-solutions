class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> a,ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    if(i != j){
                        a.push_back(i);
                        a.push_back(j);
                        break;
                    }
                }
            }
        }
        for(int i = 0; i < 2; i++){
            ans.push_back(a[i]);
        }
        return ans;
    }
};