/*
You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.

Input Format
The first and only line of input contains the String S

Output Format
Print the resultant String on a single line.

Constraints
1 <= |S| <= 100 where S denotes the length of string S.

SAMPLE INPUT 
abcdE
SAMPLE OUTPUT 
ABCDe
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if ((int)str[i] <= 91)
        {
            str[i] = str[i] + 32;
        }
        else
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);

    return 0;
}