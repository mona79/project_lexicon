#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 void saving_text ()
 {
     char sentence[1000];
     FILE *ftpr;
     ftpr = fopen("test.text" , "W");

     ftpr==NULL;

     printf("Enter your sentence:\n");
     fgets(sentence ,sizeof(sentence),stdin);
     fprintf(ftpr,"%s",sentence);
     fclose(ftpr);

      }

 main()
 {
     saving_text();
     return 0;
 }
