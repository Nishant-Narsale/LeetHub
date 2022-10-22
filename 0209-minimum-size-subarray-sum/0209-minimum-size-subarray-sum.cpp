class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = size(nums);

        long long int current_sum=0;
        int min_length=n+1;

        int i=0;

        for (int j = 0; j < n; j++)
        {
            current_sum+=nums[j];

            while (current_sum>=target)
            {
                min_length = min(min_length, j-i+1);
                current_sum-=nums[i];
                i++;
            }

        }
        
        if(min_length==n+1)
            return 0;

        return min_length;
    }
};