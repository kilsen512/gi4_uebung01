#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
  int i = 1;
  char str[15];
  while(i < argc) {
    printf(argv[i]);
    printf("\n");
    i++;	
 }
  
  return 0;
}
