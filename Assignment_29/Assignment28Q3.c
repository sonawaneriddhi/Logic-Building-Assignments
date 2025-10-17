///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write application which accept file name from user and read all data and display it
//
//      Input  : Demo.txt
//      Output : File opened Sucessfully
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);  

    if(-1 == fd)
    {
        printf("Unable to open file.\n");
        return -1;
    }
    else 
    {
        printf("File is sucessfully opened with FD : %d.\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            write(1,Buffer,iRet);
            memset(Buffer,0,BUFFER_SIZE);                                               
        }
        close(fd);
    }
    

    return 0;
}