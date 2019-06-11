/*
You are given an array A of N elements. Now you need to choose the best index of this array A. 
An index of the array is called best if the special sum of this index is maximum across the special sum of all the other indices.

To calculate the special sum for any index  i, you pick the first element that is A[i] and add it to your sum. Now you pick next two elements i.e.  
A[i + 1] and A[i + 2] and add both of them to your sum. Now you will pick the next  elements and this continues till the index for which it is possible to pick the elements. For example:

If our array contains 10 elements and you choose index to be  then your special sum is denoted by - (A[3]) + (A[4] + A[5]) + (A[6] + A[7] + A[8])
 , beyond this its not possible to add further elements as the index value will cross the value 10.

Find the best index and in the output print its corresponding special sum. Note that there may be more than one best indices but you need to only print the maximum special sum.

Input
First line contains an integer N as input. Next line contains N space separated integers denoting the elements of the array A.
Output
In the output you have to print an integer that denotes the maximum special sum

Constraints
1 \le N \le 10^5
Sample Inputs
-10^7 \le A[i] \le 10^7

Input	
5
1 3 1 2 5

Output
8

Input	
10
2 1 3 9 2 4 -10 -9 1 3

Output
9
 

SAMPLE INPUT 
6
-3 2 3 -4 3 1
SAMPLE OUTPUT 
3
Explanation
Let us calculate the special value for each index :

For index 1: (A[1]) + (A[2] + A[3]) + (A[4] + A[5] + A[6]) = 2
For index 2: (A[2]) + (A[3] + A[4]) = 1
For index 3: (A[3]) + (A[4] + A[5]) = 2
For index 4: (A[4]) + (A[5] + A[6]) = 0
For index 5: (A[5]) = 3
For index 6: (A[6]) = 1
So the maximum value among all the special values is 3 hence it is the output.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int N;
    int A[100000];
    long long int M[100001];
    scanf("%d", &N);
    M[0] = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        M[i + 1] = M[i] + A[i];
    }
    int j, mi, mi_;
    long long int sum = 0, msum = LLONG_MIN;
    for (int i = 0; i < N; i++)
    {
        j = 1;
        mi = 1;
        mi_ = 1;

        while (j)
        {
            mi = ((j * (4 + j - 1)) / 2) + 1;
            if (mi + i > N)
            {
                break;
            }
            mi_ = mi;
            j++;
        }
        mi_ += i;
        sum = M[mi_] - M[i];
        if (msum <= sum)
        {
            msum = sum;
        }
    }
    printf("%lld\n", msum);
    return 0;
}
