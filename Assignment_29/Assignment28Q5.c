///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write application which accept file name from user and one string from user.write it at the end of file
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

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[] = "India is my country";

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname,O_CREAT| O_WRONLY | O_APPEND);  

    if(-1 == fd)
    {
        printf("Unable to open file.\n");
        return -1;
    }
    else 
    {
        printf("File is sucessfully opened with FD : %d.\n",fd);

        iRet = write(fd, Buffer,strlen(Buffer));

        printf("%d bytes gets written sucessfully\n",iRet);

        close(fd);
    }
    

    return 0;
}