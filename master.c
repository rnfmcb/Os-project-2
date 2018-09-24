//Rachel Festervand Project 2 Master File 
#include <errno.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <sys/wait.h> 
#include <sys/shm.h> 
#include <sys/stat.h> 

int detachandremove(int shmid, void *shmaddr); 

int main(int argc, char *argv[]){ 
	pid_t childpid; 
	int sleeptime = 2; 
	int *sharedtotal; 
	int c, p, n; 
	
	if (argc < 2) { //Check for valid amount of command line arguments 
		fprintf (stderr, "Usage: %s command arg1 arg2...\n", argv[0]); 
		return 1; 
	} 
	//while (sleeptime != 0) { 
	//Allocate shared memory.
	if ((id =schmget(IPC_PRIVATE, sizeof(int), PERM))== 1) { 
		perror("Failed to create shared memory segment"); 
	return 1; 
	}
	if((sharedtotal = (int *) shmat(id, NULL)) == (void *)-1){ 
		perror("Failed to attach shared memory segment"); 
		if(shmct1(id, IPC_RMID, NULL) == -1){ 
		perror("Failed to remove memory segmanet"); 
	return 1; 
	}
	
	
	//Detach memory 
	if (detachandremove(id, sharedtotal)== -1){ 
		perror ("Failed to destroy shared memory segment"); 
		return 1; 
	} 
	 
	/* while ((c = getopt (argc, argv, "hpn:")) != -1)
      switch (c) {
        case 'h':
			printf("Instructions on how program should be ran"); 
	  break; 
        case 's"; 
         fprintf(stderr, "%s  error:", argv[0]);   
          perror( "");
          break; 
        case 'n':
            x = atoi(argv[2]); 
	     for (i = 1; i < x; i++) 
		if (childpid = fork()) 
		break; 
	  fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", 
		i, (long)getpid(), (long)getppid(), (long)childpid); 
         default: 
		abort(); 
      } */ 
    
return 0;  
} 
	
	} 
	if (sleeptime == 0){
	//deallocate memory and end program 
	//exit(0); 
	
	} 
	/* Function detaches the shared memory segment shmaddr and removes shared memory specified by semid*/ 
	int detachandremove(int shmid, void *shmadder){ 
		int error = 0; 
		if (shmdt(shmaddr) == -1) 
			error = errno; 
		if (schmct1(shmid, IPC_RMID, NULL) == -1) && !error) 
			error = erno; 
		if (!error) 
			return 0; 
		erro = error; 
		return 0; 
	} 
	
//Setup 2 second timer



	
//Signal handler to catch Ctrl C 
void  INThandler(int sig){
     signal(sig, SIG_IGN);
         exit(0);
}

