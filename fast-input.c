/*

*/

#include <stdio.h>

int main()
{

	return 0;
}

// fast i/o

void s(long long *x)
{
	register char c = getchar_unlocked();
	*x = 0;
	while ((c < 48) || (c > 57))
		c = getchar_unlocked();
	while ((c > 47) && (c < 58))
	{
		*x = (int)((((*x) << 1) + ((*x) << 3)) + c - 48);
		c = getchar_unlocked();
	}
}

void p(long long n)
{
	if (n == 0)
	{
		putchar_unlocked('0');
		putchar_unlocked('\n');
	}
	else if (n == -1)
	{
		putchar_unlocked('-');
		putchar_unlocked('1');
		putchar_unlocked('\n');
	}
	else
	{
		char f[11];
		f[10] = '\n';
		int i = 9;
		while (n)
		{
			f[i--] = n % 10 + '0';
			n /= 10;
		}
		while (f[i] != '\n')
			putchar_unlocked(f[++i]);
	}
}