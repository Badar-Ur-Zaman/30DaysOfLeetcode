class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count = 0, i = 0;
        size_t findCh = word.find(ch);
        if(findCh != std::string::npos){
            reverse(word.begin(), word.begin() + findCh + 1);
        }
        else{
            return word;
        }
        return word;
    }
};