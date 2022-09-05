#include <stdio.h>


 int max_find()
 {
  int a,b,max;
    printf("Enter the first number :\n");
    scanf("%d",&a);
    printf("Enter the second number :\n");
    scanf("%d",&b);
    if (a>b){
        max= a;
        printf ("the max is : %d",max);}

    if (b>a){
        max= b;
        printf ("the max is : %d ",max);
    }
    if (a==b) {
        printf ("they are equel");}
 }

main()
{

max_find();
 return 1;
}

