/*
In this problem, we define "set" is a collection of distinct numbers. For two sets A and B, we define their sum set is a set S(A,B)={a+b|a∈A,b∈B}. In other word,  set S(A,B) contains all elements which can be represented as sum of an element in A and an element in B. Given two sets A,C, your task is to find set B of positive integers less than or equals 100 with maximum size such that S(A,B)=C. It is guaranteed that there is unique such set.

Input Format

The first line contains N denoting the number of elements in set A, the following line contains N space-separated integers ai denoting the elements of set A.

The third line contains M denoting the number of elements in set C, the following line contains M space-separated integers ci denoting the elements of set C.

Output Format

Print all elements of B in increasing order in a single line, separated by space.

Constraints

1≤N,M≤100
1≤ai,ci≤100
 

SAMPLE INPUT 
2
1 2
3
3 4 5

SAMPLE OUTPUT 
2 3
Explanation
If e is an element of set B, then e+2 is an element of set C, so we must have e≤3. Clearly, e cannot be 1 because 1+1=2 is not an element of set C. Therefore, B={2,3}.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int N, M;
    scanf("%d", &N);
    int a[100], c[100], b[101];
    memset(b, 0, 101 * sizeof(b[0]));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
 
    scanf("%d", &M);
 
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &c[i]);
    }
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(c[j] >= a[i]) b[abs(c[j] - a[i])]++;
        }
    }
 
    for (int i = 0; i < 101; i++)
    {
        if (b[i] >= N)
        {
            printf("%d ", i);
        }
    }
}
