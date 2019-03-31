#include <stdio.h>
#include <math.h>

bool isPrime(int);

int main()
{
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int i, count = 0, *prime;
	prime = new int[20000];
	for (i = 2; i <105000; i++)
	{
		if (isPrime(i))
		{
			prime[count] = i;
			count++;
		}
	}

	for (i = m - 1; i < n; i++)
	{
		printf("%d", prime[i]);
		if ((i - m + 2) % 10 != 0 && (i != (n - 1)))
			printf(" ");
		if ((i - m + 2) % 10 == 0)
			printf("\n");
	}
	return 0;
}

bool isPrime(int n)
{
	int j;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n%j == 0)
			return false;
	}
	return true;
}
