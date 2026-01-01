#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50] , family[50] ;
	int pin = 1234 , balance = 0 , accountactive = 0 ;
	int transactions[10] , transcount = 0 , choice , enteredpin , wrongpin = 0 ;

    while(1){
    	 printf("enter the pin:");
    	 scanf("%d" , &enteredpin);
    	 
    if(enteredpin == pin){
    	break;
	}	 
	else {
	    wrongpin++;
	    printf("wrong pin\n");
	}
    if(wrongpin == 3){
    	printf("You entered the PIN incorrectly 3 times");
    	return 0;
	}
	  }
	
    while(1){
    	printf("1.create account\n");
    	printf("2.deposit\n");
    	printf("3.change pin\n");
    	printf("4.exit\n");
    	printf("choose:");
    	scanf("%d" , &choice);
    if( choice == 1){
    	if(accountactive == 1){
    		printf("The account is available\n");
		}
	    else{
	    	printf("Enter the name:");
	    	
	    	 scanf("%s" , &name);
	    	 
	    	printf("Enter the family name:");
			
			 scanf("%s" , &family);
			 
			printf("Enter initial balance:"); 
			
			 scanf("%d" , &balance);
			 
			accountactive = 1 ;
			
			for(int i = 0 ; i < 10 ;i++){
				transactions[i] = 0 ;
			} 
			transcount = 0 ;
			
		}	
	}
	    else if(choice == 2){
	    	if(accountactive == 0){
	    		printf("There is no account\n");
	    		continue;
			}
		int amount;
		   
		   printf("Enter deposit amount: ");
		     
		    scanf("%d" , &amount);
			
			if(amount>0){
				balance = amount + balance ;
				
			if(transcount < 10){
				 transactions[transcount] = amount;
                     transcount++;
			}
			else{
				for(int i = 0 ; i < 9 ; i++){
				  transactions[i] = transactions[i + 1];
				}
				transactions[9] = amount;
			}
			printf("Deposit successful Balance:%d\n" , balance);	
			}	
			else {
				printf("Invalid amount!\n");
			}
		}
	
	    else if (choice == 3){
	    	int oldpin , newpin ; 
	    	
	    	   printf("Enter current pin:");
	    	     scanf("%d" , &oldpin);
	    	
			if(oldpin == pin){
				printf("Enter the newpin:");
				  scanf("%d" , &newpin);
				  pin = newpin;
				  printf("PIN changed successfully\n");
			}
			else
			printf("wrong pin\n");     
		}
		else if(choice == 4){
			printf("Exit");
		     break;    
		}
	       }
	     return 0;  
		}
