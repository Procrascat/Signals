#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int counter = 0;
void handle_sigint(int sig)
{ //signal handler
  printf("\nTime: %d\n", counter);
  exit(1);
}