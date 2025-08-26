#include<stdio.h>
#include<math.h>
void instr()
{
	printf("WELCOME TO THE CALCULATOR PROGRAM\n");
	printf("1. ADD\n");
	printf("2. SUBTRACT\n");
	printf("3. MULTIPLY\n");
	printf("4. DIVISION\n");
	printf("5. MODULOS\n");
	printf("6. POWER\n");
	printf("7. QUITTING THE GAME");
}
void value(int *choice,int *a,int *b)
{

	instr();
	printf("Enter the choice -");
	scanf("%d",choice);
	if(*choice>=7||(*choice<=0))
	{
		printf("QUITTING THE GAME");
		return ;
	}
	printf("Enter the 1st value - ");
	scanf("%d",a);
	printf("Enter the 2nd value- ");
	scanf("%d",b);
	
}
void func(int *choice,int *a,int *b)
{
	int res=0;
	value(choice,a,b);
	
	switch(*choice)
	{
		case 1:
		{
			res=*a+*b;
			break;
		}
		case 2:
		{
			res=*a-*b;
			break;
		}
		
		case 3:
		{
			res =(*a)*(*b);
			break;
		}
	
		case 4:
		{
			if(*b!=0){
				res=*a/(*b);
			}
			else{
				printf("Error:Division by zero\n");
				return 0;
			}
			break;
		}
		case 5:
		{
			if(*b!=0){
				res = (*a)%(*b);
			}
			else{
				printf("Error:Modulus by zero\n");
				return 0;
			}
			break;
		}
		case 6:
		{
			res = pow(*a,*b);
			break;
		}
		
	}
	printf("Result = %d\n",res);
}
int main()
{
	int choice,a,b;
	func(&choice,&a,&b);
	return 0;
}
	
