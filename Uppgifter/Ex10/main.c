#include<stdio.h>
#include<conio.h>
#include<math.h>

Multiplication_Table ()
{
	 int i, j, multiplies;

	 for(i=1;i<=10;i++)
	 {
		  for(j=1;j<=10;j++)
		  {
			  multiplies = i*j;
			   printf("%d x %d = %d\t\t", i, j, multiplies);
		  }
		  printf("\n\n");
	 }
	 getch();

}

int main()
{
    Multiplication_Table();
    return(1);
}
