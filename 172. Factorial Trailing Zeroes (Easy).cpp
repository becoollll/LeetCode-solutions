class Solution {
    public:
    int trailingZeroes(int n) {
        int ans = 0;
        if(n == 0){
            return 0;
        }
        while(n > 0){   //階乘的規律:https://wywu.pixnet.net/blog/post/22014250
            n /= 5;
            ans += n;
        }
        return ans;
    }
};