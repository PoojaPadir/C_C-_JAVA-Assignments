//write a program which accept string from user and accept one character.Return index of first occurence of that character
//Input: "Marvellous Multi OS
//        M
//Output: 0

//Input: "Marvellous Infosystems"
//        W
//Output: -1

//Input: "Marvellous Infosystems"
//        e
//Output: 4

#include<stdio.h>

int FirstChar(char *str,char ch)
{
	int iCnt=0;
 while(*str!='\0')
 {
	 if(*str==ch)
	 {
		 break;
	 }
	 str++;
	 iCnt++;
 }
 if(*str=='\0')
 {
	 return -1;
 }
 else
 {
	 return iCnt;
 }
}
int main()
{
	char arr[20],cValue='\0';
	int iRet=0;
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	printf("Eneter chracter to be search");
	scanf(" %c",&cValue);
	
	iRet=FirstChar(arr,cValue);
    
	printf("Character is present at %d location\n",iRet);
	return 0;
	
	
}