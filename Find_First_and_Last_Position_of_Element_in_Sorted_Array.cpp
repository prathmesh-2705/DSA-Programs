class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            int start =-1,end=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                if(start==-1)
                {
                    start=i;  
                     end=i;  
                }
                else
                {
                    end=i;
                }
            }
        }
        return {start,end};   
    }
};
