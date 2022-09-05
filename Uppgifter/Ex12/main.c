#include <stdio.h>
#include <string.h>


int main()
{
     char a[1000],b[1000];

    printf("Enter  the string: ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(!strcmp(a,b))

 	    printf("string is palindrome");
    else
        printf("string is not palindrome");


    return 0;


}
