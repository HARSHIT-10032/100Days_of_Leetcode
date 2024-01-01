class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, int> freqTable;
        for (char ch : s) {
            freqTable[ch]++;
        }

        for (char ch : t) {
            if (freqTable.find(ch) == freqTable.end() || freqTable[ch] == 0) {
                return false;
            }
            freqTable[ch]--;
        }

        return true;
    }
};