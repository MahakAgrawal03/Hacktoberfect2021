class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int []ans= new int[2];
     int   flag=0;
        for(int i=0;i<nums.length;i++)
        {
            for(int j=i+1;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    flag=1;
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
                if(flag==1)
                {
                   
                    break;
                }
            }
        }
        return ans;
    }
}
