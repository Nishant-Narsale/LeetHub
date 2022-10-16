class Solution:
    def minElements(self, nums: List[int], limit: int, goal: int) -> int:
        s = sum(nums)
        diff = abs(s-goal)
        if diff%limit==0:
            return int(diff/limit)
        else:
            return (int(diff/limit)+1)
        