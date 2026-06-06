class Solution {
public:
    bool isPalindrome(int x) {
        int temp;
        int digit;
        long rev=0;
        temp=x;
        while(temp>0){
            digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
        }
       return x==rev;
    }
};