class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     
     int k=1,j=1;
      for(int i=0 ; i<nums.size()-1; i++)
       {
           if(nums[i] <= nums[i+1])
                k++; 

           if(nums[i] >= nums[i+1])
                 j++; 
       } 
      
       return (k==nums.size() || j==nums.size());
    }
};
