class Solution {
public:
    //string s = to.length(x); 學到的把數列改字串就可以用第幾個

    bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)){
    //小於0、尾數是0
        return false;
    }
    int a = x;
    long long b = 0;//防治溢位(反轉用)

    while(x > 0){
        int pop = x % 10;
        b = b * 10 + pop;
        x /= 10;
    }
    return a == b;
    }
};
