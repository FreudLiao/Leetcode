class Solution {
public:
    int romanToInt(string s) {
        map<char, int> amap{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100},
            {'D', 500}, {'M', 1000}
        };
        int outcome = 0;
        int n = s.length();

        for(int i = 0; i < n; i++){
            if(i + 1 < n && amap[s[i]] < amap[s[i+1]]){
                outcome -= amap[s[i]];
            } else {
                outcome += amap[s[i]];
            }
        }
        return outcome;
    }
};
