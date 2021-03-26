#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h> 
#include <assert.h>

int main(int argc, char* argv[]) {
  pid_t pid; 
  int i;
  int a, b, c, d;
  for (i =0; i < 10; i++) {
    a  = 4;
    b = 3;
    c = 10; 
    d = 15;
    a = a * b;
    c = d/b;
    d = a*b*c;
    fork();
  }

  return 0;
}
