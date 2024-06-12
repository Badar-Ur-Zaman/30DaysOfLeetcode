class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeroCount, oneCount, twoCount = 0, 0, 0
        for element in nums:
            if element == 0:
                zeroCount += 1
            elif element == 1:
                oneCount += 1
            else:
                twoCount += 1
        
        for i in range(len(nums)):
            if i < zeroCount:
                nums[i] = 0
            elif i < zeroCount + oneCount:
                nums[i] = 1
            else:
                nums[i] = 2
        