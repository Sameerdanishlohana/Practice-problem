#include <stdio.h>
	int main(){
		int year;
		printf("Enter any year: ");
		scanf("%d",&year);
		if(year%4==0 && year%100!=0)
			printf("The Entered year is a Leap Year");
		else
			printf("The Entered year is not a Leap Year");
		return 0;
	}