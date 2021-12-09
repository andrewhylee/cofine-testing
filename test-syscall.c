#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <string.h>
#include <unistd.h>
int testing ();

int main()
{
	/*char syscalls_names_arr[2][10] = {
		"mkdir",
		"msync"
	};

	char syscalls_numbers_arr[2][10] = {
		83,
		26,
	};

	int i;

	for(i = 0; i < 2; i++){
		printf("%s\n",syscalls_arr + i );
	}*/

	testing();
}

int testing()
{  
    printf("Invoking mkdir system call... /n");

    struct Person{
    
    } person1;

    const char * fname = "/home/andrew/Hunter/sysCallTesting/cofine-testing/syscall.txt";

    long int ret_status1 = syscall(83, "to", 0755); // mkdir - 83 is the syscall number
    if(ret_status1 == 0) 
         printf("System call TEST: mkdir executed correctly.\n");

    else 
         printf("System call TEST: mkdir did not execute as expected\n");

   long int ret_status2 = syscall(26, 0x00, 0, 1); // mkdir - 83 is the syscall number
    if(ret_status2 == 0) 
         printf("System call 1: msync executed correctly.\n");

    else 
         printf("System call 1: msync did not execute as expected\n");

   long int ret_status3 = syscall(135); // 
    if(ret_status3 != -1) 
         printf("System call 2: personality executed correctly ( %li ).\n", ret_status3);

    else 
         printf("System call 2: personality did not execute as expected\n");

   long int ret_status4 = syscall(253); // mkdir - 83 is the syscall number
    if(ret_status4 != -1) 
         printf("System call 3: inotify_init executed correctly.\n");

    else 
         printf("System call 3: inotify_init did not execute as expected\n");

   long int ret_status5 = syscall(27, 0, 0, 0); // mkdir - 83 is the syscall number
    if(ret_status5 == 0) 
         printf("System call 4: mincore executed correctly.\n");

    else 
         printf("System call 4: mincore did not execute as expected\n");

   long int ret_status6 = syscall(57, 3); // 
    if(ret_status6 == 0) 
         printf("System call 5: fork executed correctly.\n");

    else 
         printf("System call 5: fork did not execute as expected\n");


     return 0;
}

/*int testing(char* curr_syscall)
{  
    printf("Invoking '%s' system call... /n", curr_syscall);

    // long int ret_status = syscall(83, "too", 0755); // mkdir - 83 is the syscall number
    long int ret_status = syscall(26, 0x00, 0, 1); //syscall(1, ); // 385 is the syscall number

    if(ret_status == 0) 
         printf("System call '%s' executed correctly. Use dmesg to check processInfo\n", curr_syscall);

    else 
         printf("System call '%s' did not execute as expected\n", curr_syscall);

     return 0;
}*/
