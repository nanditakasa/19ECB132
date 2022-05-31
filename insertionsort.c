#include <stdio.h>  
void insert(int a[], int n) 
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) 
    {  
        temp = a[i];  
        j = i - 1;  
        while(j>=0 && temp <= a[j])
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[] = { 10, 11, 13, 4, 32, 24 };  
    int n = sizeof(a) / sizeof(a[0]); 
    printf("After sorting array elements are - \n");    
    printArr(a, n);  
  
    return 0;  
}    
//OUTPUT:After sorting array elements are -
12 31 25 8 32 17//
