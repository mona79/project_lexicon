#include <stdio.h>
#include<stdlib.h>
#include<math.h>


 raised ()
{
    float num;
    double raised_two ,raised_ten;

    printf("Enter your decimal number :");
    scanf("%f",&num);

    raised_two = pow (num ,2);
    printf("number raised by 2 is : %Lf\n",raised_two);

    raised_ten = pow(num ,10);
    printf("number raised by 10 is :%lf",raised_ten);

}

main()
{
    raised();
    return 0;
}
