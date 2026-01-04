#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numberofcandidates , numberofvoters , enteredvote , winnerindex = 0;
      printf("Enter the number of candidates:");
      scanf("%d" , &numberofcandidates);
      
    int votes[numberofcandidates];
	
	 for(int i = 0 ; i < numberofcandidates ; i++){
	 	votes[i] = 0;
	 }  
	  printf("Enter the number of voters:");
	  scanf("%d" , &numberofvoters);
	 
	 /* number of voters */
	 
	 for(int i = 0 ; i < numberofvoters ; i++){
	 	printf("Enter the candidate number %d:" , i + 1);
	 	scanf("%d" , &enteredvote);
	 if(enteredvote >= 1 && enteredvote <= numberofcandidates){
	 	votes[enteredvote - 1]++;
	 }
	 else{
	 	 printf("invalid vote\n");
	 }
	 }
	 
	 for(int i = 0 ; i < numberofcandidates ; i++){
	 	printf("candidate number %d , vote %d\n" , i + 1 , votes[i]);
	 }
	 
	 /* winner	*/   
	 for (int i = 1; i < numberofcandidates; i++) {
    if (votes[i] > votes[winnerindex]) {
        winnerindex = i;
     }
      }
      printf("winner is candidate %d with %d votes\n" , winnerindex + 1, votes[winnerindex]);

	return 0;
}