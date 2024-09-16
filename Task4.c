#include <stdio.h>
	int main(){
		float income,tax,net;
		printf("Enter your income:");
		scanf("%f",&income);
		if(income<=250000)
			printf("No tax!,Your net income is %g",income);
		else if(income>=250001 && income<=500000){
			tax=0.05*(income-250000);
			net=income-tax;
			printf("Total income:%g,tax amount:%g and net income after tax:%g",income,tax,net);
		}
		else if(income>=500001 && income<=1000000){
			tax=0.2*(income-250000);
			net=income-tax;
			printf("Total income:%g,tax amount:%g and net income after tax:%g",income,tax,net);
		}
			else if(income>1000000){
			tax=0.3*(income-250000);
			net=income-tax;
			printf("Total income:%g,tax amount:%g and net income after tax:%g",income,tax,net);
		}
		else
			printf("Invalid amount");
			
		return 0;
	}