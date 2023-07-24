#include <stdio.h>
#include <string.h>

int main(void)
{
    char command[100];
    char directory[100] = ""; 
    
    while (1) {
        printf("⚪︎ user/%s $ ", directory);
        scanf("%s", command);
        
        if (strcmp(command, "q") == 0) {
            break;
        }
        else if (strcmp(command, "help") == 0) {
            printf("Usage: \n");
            printf("q:    quit\n");
            printf("help: help\n");
            printf("cd:   change directory\n");
            printf("ls:   list directory contents\n");
        }
        else if(strcmp(command, "ls") == 0) {
            printf("user/ %s\n", directory);
        }
        else if (strcmp(command, "cd") == 0) {
            printf("user/ directory name: ");
            scanf("%s", directory);
            printf("Changed directory to %s\n", directory);
        }
        else {
            printf("user/ use \"help\" \n");
        }
    }
    
    return 0;
}
