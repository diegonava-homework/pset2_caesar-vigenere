#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
 
int main(int argc, char *argv[])
{ 
//PART 1
// return "1" as message if the user don't enter 2 arguments
    if (argc != 2) 
    {
        printf("You need at least 2 arguments\n");
        return 1;
        return 1;
    }   
         
    else     
    {
        
        
//get the second argument as a string
        string user_argument = argv[1];
        
        
//PART 2
// Make sure that each character is a letter
        for(int A = 0; A < strlen(user_argument); A++)
        {
            if (isalpha(user_argument[A]))
            {continue;}
            if (!isalpha(user_argument[A]))
//Show error message if a character is not a letter
            printf("Error! you need to enter just letters\n");
            return 1;
            {break;}
        }
        

//PART 3
//Print plaintext
        printf("plaintext: ");
        
        
//Get the user input
        string plain = get_string();
        
        
//Print ciphertext
        printf("ciphertext: ");
        int B = 0;
        for (int C = 0; C < strlen(plain); C++)
        {  
        if (isalpha(plain[C]) == 0)
        {


//PART 4
//Condition for special characters
            printf("%c", plain[C]);
            B++;
        }
        else
        {
            char a = plain[C];
            int x = a;
            int l = ((C - B) % strlen(user_argument));
            char m = user_argument[l];
            int d = m;
                    
            if (x > 64 || x < 91)


//PART 5
//Condition for lowercase characters
            {
                if (d < 91)
                {
                    int A = d - 65;
                    int v = A + x;             
                    if (v > 90)
                    {
                        int o = v - 26;
                        printf("%c", o);
                    }
                    else
                    {
                        printf("%c", v);
                    }
                }
                else


//PART 6
//Condition for uppercase characters
                {
                    int A = d - 97;
                    int v = A + x;              
                    if (v > 122)
                    {
                        int o = v - 26;
                        printf("%c", o);
                    }
                    else
                    {
                        printf("%c", v);
                    }
                }
            }            
        }   
    }


//PART 7
//Print a new line
    printf("\n");
    

//Return 0 if the program works
    return 0;
    }
}

