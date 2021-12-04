#include <stdio.h>

// checking weather the array is equal or not
void main()
{
    int arr1[5], arr2[5];
    for (int i = 0; i < 5 ; i++)
    {
        printf("Enter element to store in arr1  and arr2 resp.");
        scanf("%d %d", &arr1[i], &arr2[i]);
    }
    int flag = 1;
    // loop for checking equality.
    for (int i = 0; i < 5 ; i++)
    {
        if (arr1[i] != arr2[i])
        {
            flag = 0;
            break;
        }    
        else    
            continue;
    }
    if (flag)
        printf("both are equal\n");
    else
        printf("are not equal\n");
}

