#include <stdio.h>
	int main(){
		char ch;
		printf("Enter any letter of English alphabet:");
		scanf("%c",&ch);
		if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
			printf("The entered character is a vowel.");
		}
		else{
			printf("The entered character is a consonant.");
		}
		return 0;
	}