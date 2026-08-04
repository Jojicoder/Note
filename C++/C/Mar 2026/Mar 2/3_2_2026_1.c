#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    printf("\n--- OS Process Override (fork + exec) ---\n");
    printf("Main program starting... (PID: %d)\n", getpid());

    pid_t process_id = fork();

    if(process_id < 0){
        printf("Fork failed!\n");
        return 1;
    } else if (process_id == 0){
        printf("[CHILD] I am the clone (PID: %d). I will now transform into 'ls' comannde!\n\n",getpid());

        execlp("ls","ls","-l", NULL);

        printf("[CHILED] ERROR: exxclp failed! You will only see this if 'ls' was not found.\n");
        return 1;
        }
        else{
            printf("[PARENT] I created a child (PID: %d).\n", process_id);
            printf("[PARENT] I will finish my job now.\n");
        }
        return 0;
}
