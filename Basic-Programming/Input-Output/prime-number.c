/**
You are given an integer N. You need to print the series of all prime numbers till N.

Input Format

The first and only line of the input contains a single integer N denoting the number till where you need to find the series of prime number.

Output Format

Print the desired output in single line separated by spaces.

Constraints

1<=N<=1000

SAMPLE INPUT 
9
SAMPLE OUTPUT 
2 3 5 7
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    bool arr[1000];
    memset(arr, true, sizeof(arr));

    for (int i = 2; i * i < N + 1; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j < N + 1; j += i)
            {
                arr[j] = false;
            }
        }
    }

    for (int i = 2; i < N + 1; i++)
    {
        if (arr[i])
        {
            printf("%d ", i);
        }
    }

    return 0;
}