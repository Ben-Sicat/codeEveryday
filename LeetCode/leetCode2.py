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
                