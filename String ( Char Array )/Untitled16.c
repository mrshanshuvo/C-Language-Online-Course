#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3,1};

    printf("Duplicate elements in given array: \n");
    //Searches for duplicate element
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(arr[i] == arr[j])
                printf("%d\n", arr[j]);
        }
    }
    return 0;
}
