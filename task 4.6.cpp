#include <stdio.h>
int main() {
    int number1;
    printf("Enter the Number: ");
    scanf("%d", &number1);

    
    if(number1 == 1 ) {
    	printf(" pizza\n Rs 293");}
    
    
else if (number1 ==2){
	printf(" Burger\n Rs 129");}
	
	else if (number1 ==3){
	printf (" Pasta\n Rs 179");}
	
	else if (number1 ==4){
	printf(" French Fries\n Rs 99");}
	
	else if (number1 ==5){
	printf(" Sandwich\n Rs 149");}
	
   

   
    else {
        printf("invalid number");
    }

    return 0;
}

