/*
Given two strings of equal length, you have to tell whether they both strings are identical.

Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

Input :

First line, contains an intger 'T' denoting no. of test cases.
Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.
Output:

For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.
Constraints:

1<= T <=100
1<= |S1| = |S2| <= 10^5
String is made up of lower case letters only.
Note : Use Hashing Concept Only . Try to do it in O(string length) .

SAMPLE INPUT 
3
sumit mitsu
ambuj jumba
abhi hibb
SAMPLE OUTPUT 
YES
YES
NO
Explanation
For first test case,

mitsu can be rearranged to form sumit .

For second test case,

jumba can be rearranged to form ambuj .

For third test case,

hibb can not be arranged to form abhi.

Time Limit:	
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    char S1[100000], S2[100000];

    for (int i = 0; i < T; i++)
    {
        int F1[26] = {0}, F2[26] = {0};
        int j;
        scanf("%s %s", S1, S2);
        int size = strlen(S1);
        for (j = 0; j < size; j++)
        {
            F1[122 - (int)S1[j]]++;
            F2[122 - (int)S2[j]]++;
        }

        for (j = 0; j < 26; j++)
        {
            if (F1[j] != F2[j])
            {
                printf("NO\n");
                break;
            }
        }

        if (j == 26)
            printf("YES\n");
    }

    return 0;
}