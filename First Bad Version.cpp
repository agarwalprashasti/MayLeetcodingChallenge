/*  
Possible solutions:
1. Linear Search : Brute Force Soltion  
   Time Complexity: O(n)  Space Complexity: O(1)
 
2. Binary Search: Optimal Solution
   Time Complexity: O(logn)  Space Complexity: O(1)
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


/* Let 1,2,3,4,5,6
    G G G G B B

 mid=3 so we set left=mid+1
 
 
Let 1,2,3,4,5,6
    G B B B B B 
	
 mid=3, this might or might not be the first bad version so we set right=mid;
 
 */

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1,right=n;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(isBadVersion(mid))
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }
        }
        return right;
    }
};