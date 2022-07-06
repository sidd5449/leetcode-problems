class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
      nums.sort()
      current = nums[0]
      
      for i in range(1,len(nums)):
        if nums[i]==current:
          return True
        current = nums[i]
      return False
        