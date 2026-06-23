class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack <int> a;
        for (int i = 0 ;i < n; i ++){
            char x = s[i];
            if(x == '(' || x == '[' || x == '{'){
                a.push(x);
            }else{
                if(a.empty()){
                    return false;
                }
                char b = a.top();
                if((x == ')' && a.top() == '(')
                 ||(x == ']' && a.top() == '[')
                 ||(x == '}' && a.top() == '{')){
                 a.pop();
                 }else{
                    return false;
                 }
            }
        }
        return a.empty();
    }
};
