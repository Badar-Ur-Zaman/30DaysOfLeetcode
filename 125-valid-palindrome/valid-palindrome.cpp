class Solution {
public:
    string removeChars(const string &str){
        string result;
        for(char ch:str){
            if(isalnum(ch)){
                result += tolower(ch);
            }
        }
        return result;
    }
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        string charToRemove = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~";
        string newString = removeChars(s);
        string s1 = newString;
        reverse(s1.begin(), s1.end());
        if(s1 == newString){
            return true;
        }
        return false;
    }
};