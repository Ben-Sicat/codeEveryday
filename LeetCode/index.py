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
        i = len(nums1)
        print(nums1)
        while i != m:
            nums1.pop()
            print(nums1)
            i-=1
        for i in range(n):
            nums1.append(nums2[i])
        print(nums1)
        #sort
        sorted = False
        while not sorted:
            sorted = True
            for I in range(0, len(nums1)-1):
                if nums1[I] > nums1[I+1]:
                    nums1[I], nums1[I+1] = nums1[I+1], nums1[I]
                    sorted = False
    print(merge(1,[1,2,3,0,0,0],3,[2,5,6],3))