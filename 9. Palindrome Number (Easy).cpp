class Solution {
    public:
    bool isPalindrome(int x){
        long long unsigned int sum = 0, n = x;
        if(n < 0){
            return false;
        }
        while(x > 0){
            int r = x % 10;
            sum = (sum * 10 + r);
            x /= 10;
        }              
        return (sum == n);
    }
};