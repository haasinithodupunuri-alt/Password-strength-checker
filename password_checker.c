/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pass[100];
    int upper=0,lower=0,digit=0,special=0;
    int i;

    printf("Enter the password: ");
    scanf("%s",pass);

    for(i=0;pass[i]!='\0';i++)
    {
        if(isupper(pass[i]))
        upper=1;

         else if(islower(pass[i]))
         lower=1;

         else if(isdigit(pass[i]))
         digit=1;

        else
        special=1;

    }

    if(strlen(pass)>=8 && upper && lower && digit && special)

    printf("Strong Password");

    else
    printf("Week password");

    return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pass[100];
    int upper=0, lower=0, digit=0, special=0, i, score=0;

    printf("Enter password: ");
    scanf("%s", pass);

    for(i=0; pass[i]!='\0'; i++)
    {
        if(isupper(pass[i]))
            upper=1;
        else if(islower(pass[i]))
            lower=1;
        else if(isdigit(pass[i]))
            digit=1;
        else
            special=1;
    }

    if(strlen(pass) >= 8)
        score++;
    if(upper)
        score++;
    if(lower)
        score++;
    if(digit)
        score++;
    if(special)
        score++;

    if(score <= 2)
        printf("Password Strength: Weak\n");
    else if(score <= 4)
        printf("Password Strength: Medium\n");
    else
        printf("Password Strength: Strong\n");

    return 0;
}