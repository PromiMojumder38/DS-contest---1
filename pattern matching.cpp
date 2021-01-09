/*In this problem I will give you an array A of length n and an array B of length m. You have to count how many sub-array are there in A which is equal to B

Input Format

First line will contain two number n and m which indicate the length of the array.

Second line will contain n number Ai.

Third line will contain m number Bi.

Output Format

In a single line print the answer of the question.

Sample Input 0

7 2
1 2 1 2 3 2 1
1 2
Sample Output 0

2
Explanation 0

Here, =[1,2,1,2,3,2,1] and =[1,2]

Here all the subarray of  is [1],[1,2],[1,2,1],[1,2,1,2],[1,2,1,2,3],[1,2,1,2,3,2],[1,2,1,2,3,2,1],[2],[2,1],[2,1,2],[2,1,2,3],[2,1,2,3,2],[2,1,2,3,2,1],[1],[1,2],[1,2,3],[1,2,3,2],[1,2,3,2,1],[2],[2,3],[2,3,2],[2,3,2,1],[3],[3,2],[3,2,1],[2],[2,1],[1]

so number of subarray which is equal to  is 2 */

#include<stdio.h>

int main()
{
	long long n, m;
	scanf("%lld %lld", &n, &m);
	
	long long a[n], b[m], x, i, j, cnt, ans = 0;
	for(i = 0; i < n; i++) scanf("%lld", &a[i]);
	for(i = 0; i < m; i++) scanf("%lld", &b[i]);
	
	for(i = 0; i < n; i++)
	{
		x = i, cnt = 0;
		for(j = 0; j < m; )
		{
			if(a[x] == b[j])
			{
				cnt++, j++, x++;
			}
			else break;
			if(cnt == m)
			{
				ans++;
				break;
			}
		}
	}
	printf("%lld\n", ans);
}
