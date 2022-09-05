#include <stdio.h>
#include <stdlib.h>
#include <string.h>

reading_file()
{
  FILE *fptr;
  char sentence;

  fptr==NULL;
  fptr=fopen("test.text" ,"r");
  printf("The sentence is :");

  while (sentence !=EOF)
    {
    sentence = fgetc(fptr);
    printf("%c",sentence);
    fclose(fptr);
  }

}

main()
{
    reading_file();
    return 0;
}
