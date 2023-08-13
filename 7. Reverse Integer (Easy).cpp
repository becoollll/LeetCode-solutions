class Solution {
    public:
    int reverse(int x) {
        if(x == 0){
            return 0;
        }
        if(x < 0){
            int y = abs(x);
            int ans = 0;
            while(y > 0){
                if(ans>INT_MAX/10 || ans<INT_MIN/10){
                    return 0;
                }
                int temp = y%10;
                ans = ans*10+temp;
                y /= 10;
            }
            return ans*-1;
        }
        else{
            int ans = 0;
            while(x > 0){
                if(ans>INT_MAX/10 || ans<INT_MIN/10){
                    return 0;
                }
                int temp = x%10;
                ans = ans*10+temp;
                x /= 10;
            }
            return ans;
        }
    }
};