//Write a program which accept number from user and return summation of all its non factors 

//Input: 12
//Output: 50
   
//Input: 10
//Output: 37

#include<stdio.h>
int SumNonFact(int iNo)
{
	int i=0;
	int sum=0;
	for(i=1;i<=iNo;i++)
	{
		if(iNo%i!=0)
		{
			sum=sum+i;
		}
	}
	return sum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	printf("%d",iRet);
	return 0;
}