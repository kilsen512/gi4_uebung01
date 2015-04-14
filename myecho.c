#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
  int i = 1;
  while(i < argc) {
    printf("%s\n", argv[i]);
    i++;	
 }
  printf("\n");
  return 0;
}
