#include <stdio.h>  
int main ()  
{  
    int arr[50];  
    int pos, i, num; 
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);    
    printf (" \n Enter %d elements in array: \n ", num);  
    for (i = 0; i < num; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  
    printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);  
    if (pos >= num+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1];
        }    
        printf (" \n The resultant array is: \n");  
        for (i = 0; i< num - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
    return 0;  
}  
//OUTPUT:Enter the number of elements in an array: 
 3
 
 Enter 3 elements in array: 
  arr[0] = 1 3 4
 arr[1] =  arr[2] =  Define the position of the array element where you want to delete: 
 1
 
 The resultant array is: 
 arr[0] =  3 
 arr[1] =  4//
