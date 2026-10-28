class Solution {
public:
    string clearDigits(string s) {
        stack<char> S;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(isdigit(s[i])){
                S.pop();
            }else{
                S.push(s[i]);
            }
        } string ans = "";
        for(int i=S.size()-1;i>=0;i--){
            ans = S.top() + ans;
            S.pop();
        }return ans;
        
    }
};