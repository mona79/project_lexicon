#include <stdio.h>
#include <stdlib.h>

void compare()

{
        int arr[], i;


        for (i = 0; i <=10; i++){

        printf("Enter the elements of the array : ");
         scanf("%d", &arr[i]);


        {

            if (arr[i] % 2 == 0)
            {
                printf("%d \t", arr[i]);
                printf("Even numbers in the array are : ");
            }
            if (arr[i] % 2 != 0){

         printf("%d \t", arr[i]);
        printf("\n Odd numbers in the array are :");

            }
        }
        }
    }

    main()
    {
        compare();
        return 0;
    }
