class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> s_map;
        for(int i = 0; i < s.length(); i++)
        {
            s_map[s[i]] ++;
        }
        //for (auto const& pair: s_map) 
        //{
        //    std::cout << "{" << pair.first << ": " << pair.second << "}\n";
        //}
        for(int i = 0; i < s.length(); i++)
        {
            if(s_map[s[i]]==1)
                return i;
        }
        return -1;
    }
};