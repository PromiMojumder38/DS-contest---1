/* All pair product sum
Sample Input 0

3 2
1 2 3
4 5
Sample Output 0

54 */

#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	int i, j, a[n], b[m];
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	for(j = 0; j < m; j++) scanf("%d", &b[j]);
	
	long long s = 0, ans = 0;
	for(i = 0; i < n; i++)
	{
		s += a[i];
	}
	//printf("%lld\n", s);
	for(j = 0; j < m; j++)
	{
		ans += s * b[j];
	}
	printf("%lld\n", ans);
}
