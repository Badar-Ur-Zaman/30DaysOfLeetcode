class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) return s;
        int n = s.length();
        int st = 0, end = 0;
        int max_len = 1;
            for(int i = 0; i < n-1; ++i){
                int l = i, r = i;
                while(l >= 0 && r < n){
                    if(s[l] == s[r]){
                        l--;
                        r++;
                    }else{
                        break;
                    }
                }
                int len = r-l-1;
                if(len > max_len){
                    max_len = len;
                    st = l+1;
                    end = r-1;
                }
            }
        
            for(int i = 0; i < n-1; ++i){
                int l = i, r = i+1;
                while(l >= 0 && r < n){
                    if(s[l] == s[r]){
                        l--;
                        r++;
                    }else{
                        break;
                    }
                }
                int len = r-l-1;
                if(len > max_len){
                    max_len = len;
                    st = l+1;
                    end = r-1;
                }
            }

        string result = s.substr(st, max_len);
        return result;
    }
};