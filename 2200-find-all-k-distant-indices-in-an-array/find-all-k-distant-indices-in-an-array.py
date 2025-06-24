class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:
        result = set()
        for i in range(len(nums)):
            if nums[i] == key:
                start = max(0, i-k)
                end = min(len(nums)-1, i+k)
                for z in range(start, end+1):
                    result.add(z)
        return sorted(result)