//Rachel Festervand Project 2 Master File 
#include <errno.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <sys/wait.h> 
#include <sys/shm.h> 

int detachandremove(int shmid, void *shmaddr); 

int main(int argc, char *argv[]){ 
	pid_t childpid; 
	int sleeptime = 2; 
	
	if (argc < 2) { //Check for valid amount of command line arguments 
		fprintf (stderr, "Usage: %s command arg1 arg2...\n", argv[0]); 
		return 1; 
	} 
	while (sleeptime != 0) { 
	/*Allocate shared memory. If successful, shmat returns starting address of segment. Unsuccessful returns -1 and sets errno. */
	void *shmat(int shmid, const void *shmaddr, int shmflg); 
	
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
	
//Signal handler to catch Ctrl C 
void  INThandler(int sig){
     signal(sig, SIG_IGN);
         exit(0);
}

