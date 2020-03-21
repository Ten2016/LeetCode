﻿class Solution:
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        i,j=0,len(numbers)-1
        while True:
            v=numbers[i]+numbers[j]
            if v==target:
                return[i+1,j+1]
            elif v>target:
                j-=1
            else:
                i+=1