/*
Emerson is very fond of strings, and he keeps trying to reverse them.
His mother gives him 2 binary strings and asks him to convert the binary strings str1 and str2 by applying the following rules:
Step 1: Reverse any substring of length 2 (of str1 ) and get str1(str1 != str1)
Step 2: Reverse any substring of length 3 (of str1 ) and get str1(str1 != str1)
Step 3: Reverse any substring of length 4 (of str1 ) and get str1(str1 != str1)
Step 4: Step 5 and so on

Write an algorithm to help. Emerson convert the binary string str1 into str2, in the minimum number of steps.

Input:

The first line of the input cosnists of a binary string str1
The second line of the input cosnists of a binary string str2

Output:

Print an integer representing the minimum number of steps required to convert str1 into str2.
If there is no such way of conversion print -1

Constraints 

2<N<=30

Note

At any step Emerson can only reverse one substring.
The strings str1 and str2 consist of only 0s and 1s.

Example 

Input:
1010
0011

Explanation:

Step1: String str1 -> 1010 - 1001(Reverse substring of length 2)
Step2: String str1 -> 1001 - 0011(Reverse substring of length 3)
String str1 is converted to String str2 in 2 steps; so the output is 2.

*/

