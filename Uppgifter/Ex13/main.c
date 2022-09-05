#include <stdio.h>
#include <stdlib.h>

void between_number()
{
    int a, b, temp, count;

    printf("Enter 2  numbers\n");
    scanf("%d%d", &a,&b);

    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("numbers from %d to %d are:\n",a,b);

    for(count = a; count <= b; count++)
    {
        printf("%d\n", count);
    }


}
main()
{
    between_number();
     return 0;
}
