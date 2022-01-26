class Solution {
public:
    bool isPalindrome(int x) {
        long long int y=x;
        long long int sum=0;
        while(x)
        {
            sum=(sum*10)+(x%10);
            x=x/10;
        }
        if(y==sum&&y>=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};