#include <stdio.h>
#include <fcntl.h> 
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    printf("Looking for file \n ");

    char *fileName = "temp";
    int fd = open(fileName, O_RDONLY | O_CREAT);

    printf(" File descriptor %d \n ", fd);
    if (fd != -1)
    {
        printf("Success \n ");
    }
    else
    {
        printf("File might exists or ERROR \n ");
    }
}