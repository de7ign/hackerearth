/*
Ankit is in maze. The command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). 
String contains L, R, U, D denoting left, right, up and down. In each command he will traverse 1 unit distance in the respective direction.

maze

For example if he is at (2, 0) and the command is L he will go to (1, 0).

Input:

Input contains a single string.

Output:

Print the final point where he came out.

Constraints:

1 ≤ |S| ≤ 200

SAMPLE INPUT 
LLRDDR
SAMPLE OUTPUT 
0 -2
Explanation
None
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int r = 0, c = 0;
    char S[200];
    scanf("%s", S);

    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] == 'L')
            r--;
        if (S[i] == 'R')
            r++;
        if (S[i] == 'U')
            c++;
        if (S[i] == 'D')
            c--;
    }

    printf("%d %d", r, c);
    return 0;
}