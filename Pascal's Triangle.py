# -*- coding: utf-8 -*-
"""
Created on Sun Sep 22 22:37:26 2019

@author: Akhil
"""

class Solution:
    def generate(self, numRows):
        pascal = []
        if numRows == 0:
            return
        pascal.append([1])
        for xxx in range(1, numRows):
            row = []
            row.append(1)
            for i in range(1, xxx):
                row.append(pascal[xxx-1][i-1]+pascal[xxx-1][i])
            row.append(1)
            pascal.append(row)
        return pascal
    
ss = Solution()
answer = ss.generate(0)
for i in answer:
    print(i)