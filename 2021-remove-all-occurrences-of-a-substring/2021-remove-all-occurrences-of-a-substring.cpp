class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res="";
        for(char c : s)
        {
            res+=c;
             if (res.size() >= part.size() && res.substr(res.size() - part.size()) == part) {
                res.erase(res.size() - part.size()); 
            }
        }
        return res;
    }
};