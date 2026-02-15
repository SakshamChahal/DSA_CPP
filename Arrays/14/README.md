Problem Statement



Vaishnavi is developing a program for a mathematical research project focusing on pattern analysis within integer datasets. The research team needs to identify common elements between two distinct datasets to understand overlapping patterns. Prints all the common elements in the order they appear in the first array.



Your task is to write a program to help her find the common elements between the two datasets (arrays).

Input format :
The first line of input contains an integer n, which represents the size of the first dataset.

The second line contains n elements of the first dataset, separated by spaces.

The third line contains an integer m, which represents the size of the second dataset.

The fourth line contains m elements of the second dataset, separated by spaces.

Output format :
The output prints "Common Elements: " followed by the common elements between the two datasets.

If no common elements are found, output "None".



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n, m ≤ 20

-100 ≤ dataset elements ≤ 100

Sample test cases :
Input 1 :
4
1 2 3 4
3
3 4 5
Output 1 :
Common Elements: 3 4 
Input 2 :
5
7 8 9 10 11
3
12 13 14
Output 2 :
Common Elements: None
Input 3 :
10
-1 -2 -3 -4 -5 0 1 2 3 4
5
0 -1 3 5 10
Output 3 :
Common Elements: -1 0 3 
Input 4 :
3
5 5 5
5
5 5 5 5 5
Output 4 :
Common Elements: 5 5 5