class Solution:
    def matrixReshape(self, nums: List[List[int]], r: int, c: int) -> List[List[int]]:
        curr_rows = len(nums)
        curr_columns = len(nums[0])
        if (r*c) != (curr_rows*curr_columns):
            return nums
        row_num = 0
        col_num = 0
        out = [[0 for i in range(c)] for j in range(r)]
        for i in range(curr_rows):
            for j in range(curr_columns):
                out[row_num][col_num] = nums[i][j]
                col_num+=1
                if col_num == c:
                    col_num = 0
                    row_num+=1
        return out
    def generatePascal(self, numRow: int) -> List[List[int]]:
        # if numRow == 0:
        #     return []
        # if numRow == 1:
        #     return [[1]]
        # out = [[1]]
        # for i in range(1,numRow):
        #     row = [1]

        #     for j in range(1,i+1):
        #         row.append(out[i-1][j-1]+out[i-1][j])
        #     row.append(1)
        #     out.append(row)
        # return out
        # if numRow == 0:
        #     return []
        # elif numRow == 1:
        #     return [[1]]
        # out =  [[0 for i in range(numRow)] for j in range(numRow)]
        # for i in range(1,numRow):
        #     row = [1]
        #     for j in range(1,i+1):
        #         row.append(out[i-1][j-1]+out[i-1][j])
        #     out.append(row)
        # return out
        # use sliding window  technique to calculate the Pascal's triangle
        res = [[1]]
        
        for i in range(numRow -1 ):
            temp = [0] + res[-1] + [0]
            
            row = []
            for j in range(len(res[-1])+1):
                row.append(temp[j]+temp[j+1])
            res.append(row)
        return res

        def random_function(self):
            self.array = {}
            
        # make use of the logic of pointers

        def binary_search(arr: list[int], target: int) -> int: 

            ## goal is to get the target int in the given array with the least possible moves
            ## but for this case I'll do it first with a binary search

            start_index = 0
            end_index = len(arr)-1 
            while start_index <= end_index:
                midpoint = start_index + (end_index - start_index) // 2
                midpoint_val = arr[midpoint]

                if midpoint_val == target:
                    return midpoint_val
        
        binary_search()