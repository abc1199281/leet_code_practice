#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <stack>
using namespace std;


class Solution {
public:
  
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> counter(26, 0);

        for (int i = 0; i<s.size(); i++)
        {
            counter.at(s[i] - 'a')++;
            counter.at(t[i] - 'a')--;
        }

        for (int i : counter)
        {
            if (i != 0)
            {

                return false;
            }
        }

        return true;        
    }
};