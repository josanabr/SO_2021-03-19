#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h> 
#include <assert.h>

int main(int argc, char* argv[]) {
  pid_t pid; 

  printf("Pid del proceso padre %d\n",getpid());
  pid = fork();
  assert(pid >= 0); 
  if (pid == 0) {
    printf("Pid del proceso recien creado %d\n",getpid());
    while(1) {
      // no hace nada en el while
    }
  } else {
    while(1) {
      //no hace nada en el while
    }
  }
  // al final del programa no se hace nada mas, tampoco
  printf("Saliendo del sistema\n");
  return 0;
}
