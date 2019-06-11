/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 

Note
String S consists of lowercase English Alphabets only.

SAMPLE INPUT 
aba
SAMPLE OUTPUT 
YES
*/

#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main()
{
    char str[100], buff[100];
    scanf("%s", str);

    int len = strlen(str);
    int end = len - 1;
    int mid = len / 2;
    for (int i = 0; i < mid; i++, end--)
    {
        if (str[i] != str[end])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;

    // if (strcmp(str, buff))
    // {
    //     printf("NO");
    // }
    // else
    // {
    //     printf("YES");
    // }

    // return 0;
}