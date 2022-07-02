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


    def merge(self, nums1: list[list[int]], m: int, nums2: list[int], n : int) -> None:
        i = 0
        j = 0
        while i < m and j < n:
            if nums1[i][0] < nums2[j][0]:
                i += 1
            else:
                nums1.insert(i, nums2[j])
                m += 1
                j += 1
        if j < n:
            nums1[m:] = nums2[j:]
        return nums1
    
    print(merge(1, [1,2,3,0,0,0], 3, [2,5,6], 3))