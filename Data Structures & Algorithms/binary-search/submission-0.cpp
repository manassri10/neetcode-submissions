class Solution {
public:
    int helper(int startIndex , int endIndex , vector<int>& nums, int target)
    {
      if(startIndex > endIndex)
      {
        return -1;
      }
      int middleIndex = (startIndex + endIndex)/2;
          if(nums[middleIndex] == target)
          {
            return middleIndex;
          }
          if(target < nums[middleIndex])
          {
            return helper(startIndex , middleIndex-1 , nums , target);
          }
          else
          {
            return helper(middleIndex+1 , endIndex , nums, target);
          }
    }
    int search(vector<int>& nums, int target) {
          int startIndex = 0;
          int endIndex = nums.size()-1;
          int ans = helper(startIndex , endIndex , nums, target);
          return ans;
    }
};
