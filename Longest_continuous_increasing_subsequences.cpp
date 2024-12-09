class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        int m = INT_MIN;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                count++;
                
            }
            else{
                m = max(count,m);
                count=1;
                
            }
        }
        m = max(count,m);
        if(m==INT_MIN){
            return nums.size();
        }
        return m;
    }
};
