#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Looking for file \n ");

    char fileName = "./temp";
    int fd = open(fileName, "O_WRONLY");
    if(fd != -1){
        printf("Success \n ");
    }else{
        printf("File might exists \n ");
    }
}