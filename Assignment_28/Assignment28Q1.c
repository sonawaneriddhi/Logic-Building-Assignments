///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accpets file name from user and open that file name in read mode.
//
//      Input List        : Demo.txt
//
//      Output            : File opened sucessfully
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
//#include<unistd.h>

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);

   fd = open(Fname, O_RDONLY);

   if(fd == -1)
   {
      printf("Unable to open the file\n");
   }
   else
   {
      printf("File is opened sucessfully\n");
   }

   close(fd);

   return 0;
}
 