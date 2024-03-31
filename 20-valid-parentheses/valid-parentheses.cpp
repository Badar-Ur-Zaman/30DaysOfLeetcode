class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        bool flag = true;
        for(char c : s){
            if(st.empty() && (c == ')' || c == '}' || c == ']')){
                flag = false;
                break;
            }else if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }else if(c == ')' || c == '}' || c == ']'){
                char currChar = st.top();
                if((currChar == '(' && c == ')')
                || (currChar == '[' && c == ']')
                || (currChar == '{' && c == '}')){
                    st.pop();
                }else{
                    flag = false;
                    break;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return flag;
    }
};