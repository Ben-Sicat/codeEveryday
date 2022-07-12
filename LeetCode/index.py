from re import L


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
        maxSub = nums[0]
        currSum = 0

        for n in nums:
            if currSum > 0:
                currSum = 0
            currSum += n
            print("max Sub",maxSub)
            print("max Sum",currSum)
            maxSub = max(maxSub, currSum)
            print(maxSub)
        return currSum
        

## fucking figure this out...... still dunno how that worked





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

    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:
        nums1.sort()
        nums2.sort()
        print(nums1)
        print(nums2)
        i = 0
        j = 0
        result = []
        while i < len(nums1) and j < len(nums2):
            if nums1[i] == nums2[j]:
                result.append(nums1[i])
                i+=1
                j+=1
            elif nums1[i] < nums2[j]:
                i+=1
            else:
                j+=1
        return result
    def  maxProfit(self, prices:list[int]) -> int:
        # overthinking this problem made it ten times harderr from the start
        # I think I need to think of a better way to do this, nay a simplier way
       
        #You are given an array prices where prices[i] is the price of a given stock on the ith day.

        # You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

        # Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

        l , r =  0, 1
        maxProfit = 0

        while  r  < len(prices):
            if prices[r] > prices[l]:
                profit =  prices[r] - prices[l]
                print ("priices l", prices[l], "prices r",prices[r])
                maxProfit= max(maxProfit, profit)
            else:
                l = r
            r+=1
        return maxProfit
    print(maxProfit(1,[7,1,5,3,6,4]))
    def matrixReshape(self, mat: list[list[int]], r : int, c:int)  -> list[list[int]]:
       
        if r*c != len(mat)*len(mat[0]):
            return mat
        newMat = []
        for i in range(r):
            newMat.append([])
            for j in range(c):
                newMat[i].append(0)
        for i in range(len(mat)):
            for j in range(len(mat[0])):
                newMat[i][j] = mat[i][j]
        return newMat

    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
        #either recursive or iterative binary serach:
        ROWS, COLS =  len(matrix), len(matrix[0])
        top, bot = 0, ROWS - 1
        while top <= bot:
            row = (top + bot ) // 2
            if target > matrix[row][-1]:
                top = row +1
            elif target < matrix[row][0]:
                bot = row - 1
            else:
                break
        if not ( top <= bot):
            return False
        row = (top + bot) // 2
        l, r = 0, COLS - 1
        while l <= r:
            m = (l + r) // 2
            if target  > matrix [row][m]:
                l = m + 1
            elif target < matrix[row][m]:
                r = m - 1
            else:
                return True
            return False

# array = [[[1,1,1,1,1,1,1]],[,1],[2,2,2,2,2,2,2],[]]
    def containsDuplicate (self, nums: list[int]) -> bool:
        hash = set()

        for num in nums:
            if num in hash:
                return True
            hash.add(num)
        return False
    
    def inAnagram(self, s: str, t:str) -> bool:
        if len(s) != len(t):
            return False
        hashS, hashT = {},{}

        for i in range(len(s)):
            hashS[i] = 1 + hashS.get(s[i],0)
            hashT[i] = 1 + hashT.get(s[i],0)
        for c in hashS:
            if hashS[c] != hashT.get(c,0):
                return False
        return True 
        