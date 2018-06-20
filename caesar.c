#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(int argc, char* argv[])
{
// return "1" as message if the user don't enter 2 arguments
    if (argc < 2)
        {
            printf("You need at least 2 arguments\n");
            return 1;
        }
    
// convert the number from string to an int
    int strings_count = atoi(argv[1]);
    
// alert error if the content of argv is less than 1
    if (strings_count < 1)
    {
        printf("You neeed to enter a positive number\n");
        return 1;
    }
    
// get user string
    printf("plaintext: ");
    char* user_text = get_string();
    printf("ciphertext: ");
    
// the fun starts here
    for (int i = 0, n = strlen(user_text); i < n; i++)
    {
        if (isalpha(user_text[i]))
        {
            
// condition for uppercase
            if (isupper(user_text[i]))
            {
                int answer = (user_text[i] + strings_count - 65) % 26 + 65;
                printf("%c", answer);
            }
            
// condition for lowercase
            else
            {
                int answer2 = (user_text[i] + strings_count - 97) % 26 + 97;
                printf("%c", answer2);
            }
        }
        
// condition for other characters
        else
            printf("%c", user_text[i]);
    }
    
// add a new line at the end
    printf("\n");
}