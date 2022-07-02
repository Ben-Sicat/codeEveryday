class Solution:
    # def containsDuplicate(self, nums: List[int]) -> bool:
    #     return len(nums) != len(set(nums))

    def getSkyline(self, buildings: list[list[int]]) -> list[list[int]]:
        if not buildings:
            return []
        if len(buildings) == 1:
            return [[buildings[0][0], buildings[0][2]], [buildings[0][1], 0]]
        mid = len(buildings) // 2
        left = self.getSkyline(buildings[:mid])
        right = self.getSkyline(buildings[mid:])
        return self.merge(left, right)

    def maxSubArray(self, nums: list[int]) -> int:
        max_so_far = nums[0]
        max_ending_here = 0
        size = len(nums)
        for i in range(0, size):
            max_ending_here = max_ending_here + nums[i]
            if max_ending_here < 0:
                max_ending_here = 0
            
            # Do not compare for all elements. Compare only  
            # when  max_ending_here > 0
            elif (max_so_far < max_ending_here):
                max_so_far = max_ending_here
                
        return max_so_far
    def twoSum(self, nums: list[int], target: int) -> int:
        size = len(nums)
        index = []
        print(nums)
        print(size)
        for i in range(size):
            print(i)
            for j in range(size):
                print(j)
                if nums[i]+nums[j] == target and i != j:
                    
                    index.append(i)
                    index.append(j)
                    return index

    print(twoSum(1, [3,2,4], 6))