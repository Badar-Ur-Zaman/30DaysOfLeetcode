class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string str: tokens){
            if(str == "+" || str == "-" || str == "/" || str == "*"){
                if(!str.empty()){
                    int b = s.top();
                    s.pop();
                    int a = s.top();
                    s.pop();
                    int result;
                    if(str == "+"){
                        result = a + b;
                    }else if(str == "-"){
                        result = a - b;
                    }else if(str == "*"){
                        result = a * b;
                    }else if(str == "/"){
                        result = a / b;
                    }
                    s.push(result);
                }
            }else{
                int num = stoi(str);
                s.push(num);
            }
        }
        int result = s.top();
        return result;
    }
};