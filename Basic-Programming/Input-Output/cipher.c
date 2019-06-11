/*
Indian army is going to do a surprise attack on one of its enemies country. The President of India, the Supreme Commander of the Indian Army will be sending an alert message to all its commanding centers. As enemy would be monitoring the message, Indian army is going to encrypt(cipher) the message using basic encryption technique. A decoding key 'K' (number) would be sent secretly.

You are assigned to develop a cipher program to encrypt the message. Your cipher must rotate every character in the message by a fixed number making it unreadable by enemies.

Given a single line of string 'S' containing alpha, numeric and symbols, followed by a number '0<=N<=1000'. Encrypt and print the resulting string.

Note: The cipher only encrypts Alpha and Numeric. (A-Z, a-z, and 0-9) . All Symbols, such as - , ; %, remain unencrypted.

SAMPLE INPUT 
All-convoYs-9-be:Alert1.
4
SAMPLE OUTPUT 
Epp-gsrzsCw-3-fi:Epivx5.
Explanation
First line contains the string to convert. S

Second line contains the number, encrypt key. K

A becomes E, Y becomes C, 9 becomes 3,

-, . unchanged.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%s", str);
    int k;
    scanf("%d", &k);
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            str[i] = (str[i] - '0' + k) % 10 + '0';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A' + k) % 26 + 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' + k) % 26 + 'a';
        }
    }
    printf("%s", str);
    return 0;
}