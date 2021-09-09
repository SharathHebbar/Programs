"""
Move all negative numbers to beginning and positive to end with constant extra space

    Difficulty Level : Easy
    Last Updated : 09 Jun, 2021

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5

Note: Order of elements is not important here.


"""

inp = [-1, 0, 5, 7, 3, 45, 5, 56, 7, 6, -2, -4, 8, -3]

for i in range(len(inp)):
    if(inp[i] < 0):
        x = inp.pop(i)
        inp.insert(0, x)
print(inp)
