#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv) {
  pid_t pid;

  printf("%d\n",getpid());
  while(1);

  return 0;
}
