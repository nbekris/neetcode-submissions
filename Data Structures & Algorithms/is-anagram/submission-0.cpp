class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        std::unordered_map<char, int> sMap;
        std::unordered_map<char, int> tMap;

        for(size_t i = 0; i < s.size(); ++i)
        {
            ++sMap[s[i]];
            ++tMap[t[i]];
        }

        return sMap == tMap;
    }
};
