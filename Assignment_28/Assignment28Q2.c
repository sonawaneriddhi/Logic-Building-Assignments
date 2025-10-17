///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accpets file name from user and creates that file
//
//      Input List        : Demo.txt
//
//      Output            : File created sucessfully
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
//#include<unistd.h>

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};

   printf("Enter the file name : ");
   scanf("%s",Fname);

   fd = creat(Fname,0777);

   if(fd == -1)
   {
      printf("Unable to create the file\n");
   }
   else
   {
      printf("File is created sucessfully\n");
   }

   return 0;
}
 