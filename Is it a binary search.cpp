/*You are given a string S of length n. You can change atmost k characters from the string into any other character. You target is to find a largest substring which contains all same character.

Input Format

First line will contain two number n which indicate the length of the string and k.

Second line will contain the string S.

All characters Si will be lowercase English alphabet.

Output Format

In a single line print the answer of the question.

Sample Input 0

4 1
abac
Sample Output 0

3
Explanation 0

S="abac" and k=1.

You can change the string into "aaac" or "abaa" or "bbac" or many other ways.

If you convert the string into "aaac" it will have a substring "aaa" of length  which is maximum that contain all same characters. So our answer will be */

#include <iostream> 
using namespace std; 

int len(char A[], int n, int k, char ch) 
{ 
    int mx_l = 1, c = 0, l = 0, r = 0; 

    while (r < n) 
	{ 
        if (A[r] != ch) c++;
        while (c > k) 
        { 
            if (A[l] != ch) c--; 
			l++;
        } 
        mx_l = max(mx_l, r - l + 1); 
        r++; 
    } 
    return mx_l; 
} 


int lrg_substr(char A[], int n, int k) 
{ 
    int mx_l = 1; 
    for (int i = 0; i < 26; ++i) { 
        mx_l = max(mx_l, len(A, n, k, i + 'A')); 
        mx_l = max(mx_l, len(A, n, k, i + 'a')); 
    } 
    return mx_l; 
} 

int main() 
{ 

    int n, k;
    scanf("%d %d", &n, &k);
    char A[n];
    scanf("%s", A);
	printf("%d\n", lrg_substr(A, n, k));
}
