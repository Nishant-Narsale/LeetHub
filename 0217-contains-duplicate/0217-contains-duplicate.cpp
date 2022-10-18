class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> ma;
        for(int i=0; i<size(nums); i++){
            if (ma[nums[i]]!=0){
                return true;
            }
            ma[nums[i]]+=1;
        }
        
        return false;
    }
};