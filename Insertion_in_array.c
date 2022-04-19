#include<stdio.h>
#include<conio.h>
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
	for(i=size;i>=pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=item;
	size++;
	printf("resultant array elements");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
}
