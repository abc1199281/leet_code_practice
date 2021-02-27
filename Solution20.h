#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> hash;
        hash.insert(pair<char, char>('}', '{'));
        hash.insert(pair<char, char>(')', '('));
        hash.insert(pair<char, char>(']', '['));

        stack<char> st;

        for (char c:s)
        {
            if (!hash.count(c))
            {
                st.push(c);
            }
            else {
                if(st.empty() || hash[c]!=st.top()) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};