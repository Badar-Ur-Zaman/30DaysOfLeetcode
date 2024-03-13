class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string str = to_string(x);
        bool flag = false;
        int n = str.length();
        for(int i = 0, j = n-1; i <= n/2, j >= n/2; i++, j--){
            if(str[i] == str[j]){
                flag = true;
            }else{
                return false;
            }
        }
        return flag;
    }
};