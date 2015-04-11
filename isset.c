#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[], char* envp[])
{ 
    //check if env exists
    if(getenv(argv[1])){
	if(argv[2] && strcmp(argv[2],"-v") == 0) {
		char* env;
		env = getenv(argv[1]);	
        	printf(env);
	}
 	return 1;
    }
    else 
	return 0;
}
