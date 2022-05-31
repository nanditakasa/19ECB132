#include<stdio.h>
void main(){
	int a[100],i,posi,size,item;
	printf("enter size of array: ");
	scanf("%d",&size);
	printf("enter array elements: \n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("enter position");
	scanf("%d",&posi);
	printf("enter item");
	scanf("%d",&item);
	for(i=size;i>=posi;i--){
		a[i]=a[i-1];
	}
	a[posi]=item;
	size++;
	printf("resultant array elements");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
}
//OUTPUT:enter size of array: 5
enter array elements: 
1 2 3 4 5
enter position2
enter item2
resultant array elements122345//
