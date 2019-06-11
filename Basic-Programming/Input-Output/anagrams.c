/*
Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

test cases,t
two strings a and b, for each test case
Output:

Desired O/p

Constraints :

string lengths<=10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.

SAMPLE INPUT 
1
cde
abc
SAMPLE OUTPUT 
4
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    char string1[10001];
    char string2[10001];

    int freq1[26];
    int freq2[26];

    for (int i = 0; i < T; i++)
    {
        scanf("%s", string1);
        scanf("%s", string2);

        int freq1[26] = {0};
        int freq2[26] = {0};

        for (int i = 0; i < strlen(string1); i++)
        {
            freq1[122 - (int)string1[i]]++;
        }
        for (int i = 0; i < strlen(string2); i++)
        {
            freq2[122 - (int)string2[i]]++;
        }

        int max = strlen(string1) + strlen(string2);
        int match = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] == freq2[i])
            {
                match += freq1[i] + freq2[i];
            }
            else if (freq1[i] != 0 && freq2[i] != 0)
            {
                if (freq1[i] > freq2[i])
                {
                    match += freq2[i] + freq2[i];
                }
                else
                {
                    match += freq1[i] + freq1[i];
                }
            }
        }
        printf("%d\n", max - match);
    }

    return 0;
}