class Solution {
public:
    int minLength(string s) {
        stack<char> S;
        for(char c:s){
            
            if(!S.empty() && S.top() == 'A' && c=='B'){
                S.pop();
            }else if(!S.empty() && S.top() == 'C' && c=='D'){
                S.pop();
            }
            else{
                S.push(c);
            }
        }return S.size();
        
    }
};