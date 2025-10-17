///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accpets file name from user and display the size of the file
//
//      Input List        : Demo.txt
//
//      Output            : Size of file is n bytes
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
//#include<unistd.h>

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};
   char Buffer[10] = {'\0'};
   int iRet = 0, iSum = 0;

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);

   fd = open(Fname,O_RDONLY);

   if(fd == -1)
   {
      printf("Unable to create the file\n");
   }
   else
   {
      printf("File is sucessfully opened with fd : %d\n",fd);

      while((iRet = read(fd,Buffer,10)) != 0)
      {
         iSum = iSum + iRet;
      }

      printf("Size of file is %d bytes",iSum);

      close(fd);

   }

   return 0;
}
 