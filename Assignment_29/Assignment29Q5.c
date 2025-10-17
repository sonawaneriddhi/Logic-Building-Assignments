////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which accpets file name and a count from the user and read that many number of characters from that file from strating position
//      Input List        : Demo.txt
//
//      Output            : 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>    //filehandlinginputoutput
#include<fcntl.h> //filecontrol

void Display(char FName[], int iSize)
{
   int fd = 0, iRet = 0 , iCnt = 0 , iCount = 0;
   char Buffer[50] = {'\0'};

   fd = open(FName , O_RDONLY);

   iRet = read(fd,Buffer,iSize);

   while((iRet != 0))
   {
      for(iCnt = 0; iCnt < iRet ; iCnt++)
      {
        printf("%c",Buffer[iCnt]);
      }
      memset(Buffer,'\0',iSize);
      iRet = 0;
   }

}

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};
   int iRet = 0;
   int iLength = 0;

   printf("Enter file name that you want to open : ");
   scanf("%s",Fname);

   printf("Enter number of bytes you want to read : ");
   scanf("%d",&iLength);

   Display(Fname, iLength);
   
   return 0;
}