#include<stdio.h>
#include<conio.h>

void Red ()
{
    printf("\033[1;31m]");
}
void Green ()
{
  printf("\033[1;32m]");

}
void reset()
{
    printf("\033[0m");

}
int main()
{
    Red();
    printf("Mona");
    Green();
    printf("Taji \n ");
    reset();
    return 0;
}
