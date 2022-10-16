
//sarthaknerd
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = words.size();
        set<char> st(allowed.begin(), allowed.end());
        for(string word : words){
            for(char ch : word){
                if( st.find(ch) == st.end() ){
                    count--;
                    break;
                } 
            }
        } return count;
    }
};
