//Write a recursive program which dispaly below pattern
//Output: A B C D E F
#include<stdio.h>
void Display()
{
	static char ch='A';
	while(ch<='F')
	{
		printf("%c\t",ch);
		ch++;
		Display();
	}
}
int main()
{
	Display();
	return 0;
}