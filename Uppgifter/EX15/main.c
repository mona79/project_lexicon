#include <stdio.h>

void sum()
{
    int i,n,sum=0;

	printf("Input the 10 numbers : \n");

	for (i=1;i<=10;i++)
	{
	    printf("Number %d :",i);
	    scanf("%d",&n);

		sum +=n;
	}

	printf("The sum of 10 no is : %d\n",sum);

}
main()
{
    sum();
    return 0;
}



