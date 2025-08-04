#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    n=len(arr)
    pos_count=sum(1 for x in arr if x>0)
    neg_count=sum(1 for x in arr if x<0)
    zero_count=sum(1 for x in arr if x==0)
    print("{:.6f}".format(pos_count/n))
    print("{:.6f}".format(neg_count/n))
    print("{:.6f}".format(zero_count/n))
    # Write your code here

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
