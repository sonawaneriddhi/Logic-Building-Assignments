///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write application which accept file name from user and create that file.
//
//      Input  : Demo.txt
//      Output : File opened Sucessfully
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>    
#include<fcntl.h>

int main()
{
    int fd = 0, iCnt = 0;
    char fName[20] = {'\0'};

    printf("Enter file name : ");
    scanf("%s",fName);

    fd = creat(fName,0777);           

    if( -1 == fd)
    {
        printf("Unable to create file\n");
        return -1;
    }
    
    printf("File is succesfully created with FD %d\n",fd);

    return 0;
}