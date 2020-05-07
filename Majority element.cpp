class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Based on Moore's Voting Algorithm
	// which gets you majority element if it exists
	int majority = nums[0], vote=1;
	for( int i=1; i < nums.size(); i++ ) {
		if( nums[i] == majority )
			vote++;
		else if( --vote == 0 ) {
			majority = nums[i];
			vote = 1;
		}
	}
	return  majority; 
    }
};