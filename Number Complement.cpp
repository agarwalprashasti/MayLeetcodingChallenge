class Solution {
public:
    int findComplement(int num) {
         int ans = 0;
        int i=0;
        while(num){
            int lastdigit =  num & 1;
            ans |= (1-lastdigit) << i;
            num = num >> 1;
            i++;
        }
        return ans;
    }
};