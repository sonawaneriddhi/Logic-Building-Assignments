//////////////////////////////////////////////////////////////////////////////////
// Description : Write a application which accepts file name from user and 
/*
   Input : Demo.txt
           Hello World
   Output : write Hello World at the end of the Demo.txt file
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accpets file name from user and one string from user and append that string to the file
//
//      Input List        : Demo.txt
//                          Hello Riddhi
//
//      Output            : n bytes get sucessfully written in the file
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};
   char Buffer[50] = {'\0'};
   int iRet = 0;

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);


   printf("Enter the string : ");
   scanf(" %[^'\n']s",Buffer);

   fd = open(Fname,O_WRONLY | O_APPEND);

   if(fd == -1)
   {
      printf("Unable to create the file\n");
   }
   else
   {
      printf("File is sucessfully opened with fd : %d\n",fd);

      iRet = write(fd,Buffer,strlen(Buffer));
      
      printf("%d bytes get sucessfully written in the file\n",iRet);

      close(fd);
   }

   return 0;
}
 