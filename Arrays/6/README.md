Problem Statement

﻿

You are given an array of integers representing the prices of a product over a period of time. Your task is to modify the array in such a way that each element is replaced by the product of its neighbouring elements. The first and last elements will be replaced by the product of themselves and their adjacent element.

Input format :
The first line contains an integer n, representing the size of the array.

The second line contains n space-separated integers representing the elements of the array.

Output format :
The output consists of the modified array after performing the required operations, with each element separated by a space.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 20

1 ≤ array elements ≤ 100

Sample test cases :
Input 1 :
5
2 3 4 5 6
Output 1 :
6 8 15 24 30 
Input 2 :
3
10 20 30
Output 2 :
200 300 600 