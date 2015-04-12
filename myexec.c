#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[], char* envp[]) 
{
	pid_t pid;
	pid = fork();
	if(pid==0) {
		printf("child process PID is %d\n",getpid());
                execv(argv[1],argv+1);

	}
	else if(pid > 0) {
		//execv(argv[1],argv+1);
		printf("parent process PID is %d\n"
			"fork PID is %d\n",getpid(),pid);
		execv(argv[1],argv+1);
	}
	else {
		printf("fork failed");
	} 
	return 0;
}
