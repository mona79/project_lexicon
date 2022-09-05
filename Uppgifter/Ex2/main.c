#include <stdio.h>


 void getting_info (){

    char firstname[20], lastname[20];
    int age;
    printf("Input your firstname: ");
    scanf("%s", firstname);
    printf("Input your lastname: ");
    scanf("%s", lastname);
    printf("Input your age: ");
    scanf("%d", &age);
    printf("%s %s %d\n", firstname, lastname, age);

 }

 main()
{
 getting_info();
  return 0;
}
