/* In this problem I will give you an array A of length n. You have to print maximum value for every prefix of that array.

Input Format

First line will contain a number n which indicate the length of the array.

Second line will contain n number Ai.

Output Format

In a single line print n integer. ith of which is the maximum value of ith prefix.

Sample Input 0

5
5 4 10 2 1
Sample Output 0

5 5 10 10 10
Explanation 0

Here,  prefix means [5] and here maximum value is 5.

1st prefix means [5,4] and maximum value is 5.

2nd prefix means [5,4,10] and maximum value is 10.

So our total answer will be: 5 5 10 10 10 */

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int a[n], i;
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	
	int max = a[0];
	for(i = 0; i < n; i++)
	{
		if(max < a[i]) max = a[i];
		printf("%d ", max);
	}
	printf("\n");
}
