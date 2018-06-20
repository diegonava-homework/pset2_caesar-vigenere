#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <cs50.h>

int main (void) {
    
    string name;
    
    /*Get user name*/
    /*printf("Type your name\n");*/
    name = get_string();
    printf("%c", toupper(name[0]));
    
    /*For loop to go over the lenght of the name the user typed on the previous step - character by character*/
    for (int i = 0, name_lenght = strlen(name); i < name_lenght; i++) {
         /*If condition to detect a space*/
         if (name[i] == ' ') {
            /*print the 1st character after a space*/    
            printf("%c", toupper(name[i+1]));
                        
         }
    }
    
/*print a new line*/
printf("\n");

}

/*
GOAL
Implement a program that, given a person’s name, prints a person’s initials, per the below.
$ ./initials
Regulus Arcturus Black
RAB
    - You may assume that the only spaces in the user’s input will be single spaces between words
    - You may assume that the user’s input will contain only letters (uppercase and/or lowercase) 
      plus single spaces between words. You don’t need to worry about names like Joseph Gordon-Levitt, 
      Conan O’Brien, or David J. Malan!
    - Your program should print the user’s initials (i.e., the first letter of each word in their name) 
      with no spaces or periods, followed by a newline (\n).


CHECK
check50 2016.initials.less initials.c


STAFF SOLUTION
~cs50/pset2/initials
*/


/* NOTES/SYNTAXIS AND CODE SNIPPETS FROM LECTION 2
#include <string.h>
#include <ctype.h>

        for (int i = 0, n = strlen(s); i < n; i++)



printf("%c\n", s[i]);



    if (s != NULL)




for (int i = 0, n = strlen(s); i < n; i++)
{
            if (islower(s[i]))
            {
                printf("%c", toupper(s[i]));
            }
            else
            {
                printf("%c", s[i]);
            }


string s = get_string();
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
We’ll get a string as usual, and create a variable n to store some number. 
We’ll start it at 0, and while s[n], the character at that index in s, isn’t something called \0, we’ll increase n.

But why does this work? Turns out, strings are stored with a character at the end marking 
the end of a string, since there’s no predetermined length, so a string in memory really looks like:
------------------------------
| Z | a | m | y | l | a | \0 |


Typecasting
for (int i = 65; i < 65 + 26; i++)
    {
        printf("%c is %i\n", (char) i, i);


for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c is %i\n", c, c);
*/



