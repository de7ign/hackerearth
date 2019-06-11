/*
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like 

 
So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows : 

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
SAMPLE INPUT 
2
18
40
SAMPLE OUTPUT 
19 WS
45 AS
*/

#include <stdio.h>

int main()
{
    int T, N;
    scanf("%d", &T);
    const int arr[6] = {11, 9, 7, 5, 3, 1};
    const char *st[6] = {"WS\0", "MS\0", "AS\0", "AS\0", "MS\0", "WS\0"};
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        N -= 1;
        int i = N / 6;
        int j = N % 6;
        if (i % 2)
        {
            printf("%d %s\n", N + 1 - arr[5 - j], st[j]);
        }
        else
        {

            printf("%d %s\n", N + 1 + arr[j], st[j]);
        }
    }

    return 0;
}