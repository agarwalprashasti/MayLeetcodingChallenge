class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
       unordered_map<char,int>map;
        for(int i=0;i<m;i++)
        {
            map[magazine[i]]++;
        }
        for(auto it:ransomNote)
        {
            if(map[it])
            {
                map[it]--;
            }
            else return false;
            
            
        }
        return true;
    }
};