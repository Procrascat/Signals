/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "timer.h"
#include <unistd.h>



int sigNum = 1;
void handler(int signum)
{ //signal handler
  printf("Hello World!\n");
 
  sigNum = 0;//turn off signal condition
  alarm(1);
  counter++;
}

int main(int argc, char * argv[])
{
   
  signal(SIGALRM,handler); //register handler to handle SIGALRM
  signal(SIGINT,handle_sigint);
  alarm(1); //Schedule a SIGALRM for 1 second
  counter++;
  
  while(1) {
    while(sigNum == 1);//busy wait for signal to be delivered
    
    printf("Turing was right!\n");
    
    sigNum = 1; //turn on signal condition
  }; 
  
  
  return 0; //never reached
}