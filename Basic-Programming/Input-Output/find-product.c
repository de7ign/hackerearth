/*
You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo 10^9+7.

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 10^9+7.

Constraints:
1 <= N <= 10^3
1 <= A[i] <= 10^3

SAMPLE INPUT 
5
1 2 3 4 5
SAMPLE OUTPUT 
120

Explanation
There are 5 integers to multiply. Let's store the final answer in  variable. Since 1 is identity value for multiplication, initialize  as 1.

So the process goes as follows:

answer = 1
answer = (answer x 1) % (10^9+7)
answer = (answer x 2) % (10^9+7)
answer = (answer x 3) % (10^9+7)
answer = (answer x 4) % (10^9+7)
answer = (answer x 5) % (10^9+7)



The above process will yield answer as 120
*/

#include <stdio.h>

int main()
{
    int A[1000];
    int N, j;
    unsigned long int ans = 1;
    unsigned long int mod = 1000000007;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &j);
        ans = (ans * j) % mod;
    }
    // for (int i = 0; i < N; i++)
    // {
    //     ans = (ans * A[i]) % mod;
    // }
    printf("%lu", ans);
    return 0;
}
