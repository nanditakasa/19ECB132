#include<stdio.h>
main(){
	int array[10],number,i,n;
	printf("enter n: ");
	scanf("%d",&n);
	printf("enter %d",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("enter number: ");
	scanf("%d",&number);
	if(position>=n+1)
	printf("cannot be deleted");
	else{
		for(i=position-1;i<n-1;i++)
		array[i]=array[i+1];
		printf("resultant array is: ");
		for(i=0;i<n-1;i++)
		printf("%d",array[i]);
	}
}
