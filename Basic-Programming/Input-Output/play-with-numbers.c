/*
You are given an array of n numbers and q queries. For each query you have to print the floor of the expected value(mean) of the subarray from L to R.

Input
First line contains two integers N and Q denoting number of array elements and number of queries.

Next line contains N space seperated integers denoting array elements.

Next Q lines contain two integers L and R(indices of the array).

Output
print a single integer denoting the answer.

Constraints :
1<= N ,Q,L,R <= 10^6

1<= Array elements <= 10^9

NOTE

Use Fast I/O

Problem setter : Sheldon Tauro

SAMPLE INPUT 
5 3
1 2 3 4 5
1 3
2 4
2 5
SAMPLE OUTPUT 
2 
3
3
*/

#include <stdio.h>

int main()
{
    int n, l, q, r;
    unsigned long long int a[1000000];
    unsigned long long int sum;
    scanf("%d %d", &n, &q);
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        a[i] += a[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        scanf("%d %d", &l, &r);
        printf("%llu\n", (a[r] - a[l - 1]) / (r - l + 1));
    }
}
