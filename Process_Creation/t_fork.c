#include "../lib/tlpi_hdr.h"


int main(int argc, char *argv[])
{
    pid_t childPid;
    printf("running the program \n");
    switch (childPid = fork())
    {
    case -1:
        printf("exit");
    case 0:
        break;
    default:
        sleep(3);
        break;
    }

    printf("PID=%ld %s \n", (long)getpid(), (childPid == 0) ? "(child) " : "(parent)");
    exit(1);
}