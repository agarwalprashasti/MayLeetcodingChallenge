class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int len=S.length();
        int jewel=J.length();
        int cnt=0;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<jewel;j++)
            {
                if(S[i]==J[j])
                    cnt++;
            }
        }
        return cnt;
    }
};