#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    printf("\n--- OS Process Creation (fork) ---\n");

    printf("Program starting... (My PID: %d)\n", getpid());
    printf("Excuting fork()...\n\n");


    pid_t process_id = fork();

    if(process_id < 0){
        printf("Fork failed!\n");
        return 1;
    }else if(process_id == 0){
        printf("[CHILD] Hello! I am the new clone. (My PID: %d)\n", getpid());

    }else{
        printf("[PARENT] I created a clone. (Child's PID: %d)(My PID: %d)\n",process_id,getpid());
    }

    printf("Process %d is exiting.\n", getpid());
    return 0;
}