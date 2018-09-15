#include<stdio.h>
#include<string.h>
#define N 105
int main()
{
	char str1[N], str2[N];
	gets(str1);
	gets(str2);
	int A[N] = {0}, B[N] = {0}, C[N] = {0};
	int len1, len2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	for(int i = 0, j = len1 - 1; j >= 0; i++, j--)
		A[i] = str1[j] - 48;
	for(int i = 0, j = len2 - 1; j >= 0; i++, j--)
		B[i] = str2[j] - 48;
	len1 > len2 ? len1 = len1 : len1 = len2;
	int num = 0, len;
	for(int i = 0; i < len1; i++)
	{
		num = A[i] + B[i];
		C[i] += num;
		len = i;
		if(C[i] > 9)
		{
			C[i + 1] += C[i]/10;
			C[i] = C[i]%10;
			len = i + 1;
		}
	}
	for(int i = len; i >=0; i--)
		printf("%d", C[i]);
	return 0;
} 
