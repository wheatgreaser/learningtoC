#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int inp = 0;
  printf("Enter 1 for rock, 2 for paper, 3 for scissors \n");
  scanf("%d", &inp);
  
  
  srand(time(NULL));
  int opp = 0;
  opp = (rand()%4)+1;
  printf("%d \n", opp);
  if(inp == opp){
    printf("tie");
  }
  else if((inp ==1 && opp == 2) || (inp == 2 && opp == 3) || (inp == 3 && opp == 1)){
    printf("you lose");
  }
  else{
    printf("you win");
  }
  return 0;
}