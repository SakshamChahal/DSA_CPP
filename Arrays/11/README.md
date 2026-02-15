Problem Statement



Given an array of strings, write a program to traverse through the array and find the index of a specific string. The program should prompt the user to enter the string to be searched and then display the index if found or a message indicating that the string was not found.

Input format :
The first line of input consists of an integer N, representing the size of the array.

The following N lines consist of the strings representing the elements of the array.

The last line of input consists of the string to be searched.

Output format :
If the string to be searched is found in the array, print the index of the string (0-based).

Otherwise, print "String not found!".



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 20

1 ≤ length of each string ≤ 100

String comparison is case-sensitive, so the search is case-sensitive.

Sample test cases :
Input 1 :
3
Apple
Mango
Banana
Apple
Output 1 :
0
Input 2 :
2
Pen
Pencil
Paper
Output 2 :
String not found!
Input 3 :
3
Hello
HEllo
hello
hello
Output 3 :
2