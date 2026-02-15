Problem Statement



In a bustling online marketplace, you’re tasked with developing a program to clean up product data. Your job is to filter out all negative prices from a list of product prices, ensuring only valid prices are retained. 



Write a program that processes user input to display only the non-negative prices.

Input format :
The first line contains an integer n, which denotes the number of prices.

The second line contains n space-separated double values, each representing a product price.

Output format :
The output prints space-separated double values, each representing a non-negative price from the input list.



Refer to the sample output formatting specifications.

Code constraints :
1 ≤ n ≤ 20

-100.0 ≤ prices ≤ 100.0

Sample test cases :
Input 1 :
7
-2.3 5.6 7.8 -4.5 9.1 -6.7 3.2
Output 1 :
5.6 7.8 9.1 3.2 
Input 2 :
5
10.5 -5.2 8.7 -3.9 12.3
Output 2 :
10.5 8.7 12.3 