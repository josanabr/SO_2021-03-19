#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv) {
   pid_t pid;
   int a = 5;

   pid = fork();
   if (pid < 0) {
     printf("Fallo el fork()\n");
     exit(1);
   }
   if (pid == 0) {
     a = a + 10; // hijo
     printf("Soy el hijo %d y el valor de a es: %d\n",getpid(),a);
   } else {
     a = a + 5; // padre
     printf("Soy el padre %d y el valor de a es: %d\n",getpid(),a);
   }
   return 0;
}
