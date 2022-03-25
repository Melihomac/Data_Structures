#include <stdio.h>
#include <string.h>

#define stackSize 100

char stack[stackSize];
int top = 0;
void push(char value)
{
	if (top == stackSize)
	{
		printf("Stack Dolu");
		return 0;
	}
	stack[top] = value;
	top++;
}

void pop()
{
	if (top == 0)
	{
		printf("Stack Bos");
		return 0;
	}
	top = top - 1;
}

int degerDondur(char ifade)
{
	if (ifade == '*' || ifade == '/')
		return 2;
	else if (ifade == '+' || ifade == '-')
		return 1;
	else
		return -1;
}

int main()
{
	char ifade[100];
	int i = 0, j = 0; 
	printf("Ifadeyi girin(Max 100)(Or: (a + b) - c): \n");
	gets(ifade);
	char temp[sizeof(ifade)];
	char postfix[sizeof(ifade)];

	while (ifade[i] != '\0')
	{
		if (ifade[i] == '(')
			push(ifade[i]);
		else if (ifade[i] == '+' || ifade[i] == '-' || ifade[i] == '*' || ifade[i] == '/')
		{
			if (top == 0)
				push(ifade[i]);
			else
			{
				while (degerDondur(stack[top]) > degerDondur(ifade[i]))
				{
					postfix[j] = stack[top - 1];
					j++;
					pop();
				} 
				push(ifade[i]);
			}
		}
		//ifade kapa parantez ise
		else if (ifade[i] == ')')
		{
			while (stack[top - 1] != '(')
			{
				postfix[j] = stack[top - 1];
				j++;
				pop();
			}	   
			pop(); 
		}
		else
		{
			postfix[j] = ifade[i];
			j++;
		}
		i++;
	} //

	while (top > 0)
	{
		postfix[j] = stack[top - 1];
		j++;
		pop();
	}
	postfix[j] = '\0';
	printf("Postfix ifadesi:\n % s \n", postfix);
	system("PAUSE");
	return 0;
}

