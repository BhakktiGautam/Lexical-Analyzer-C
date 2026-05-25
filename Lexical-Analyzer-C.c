#include<stdio.h>
#include<string.h>
#include<ctype.h>
char keywords[][20]={"int","float","char","if","else","while","return"};
int isKeyword(char word[]){
	for(int i=0;i<7;i++)
	{
		if(strcmp(word,keywords[i])==0)
		{
			return 1;
		}	
	}
	return 0;
}
int main(){
char input[200];
fgets(input,sizeof(input),stdin);
for(int i=0;input[i]!='\0';i++)
{
	if(isalpha(input[i])|| input[i]=='_')
	{
		char word[50];
		int j=0;
		while(isalnum(input[i])||input[i]=='_')
		{
			word[j]=input[i];
			j++;
			i++;
		}
		word[j]='\0';
		if(isKeyword(word))
		{
			printf("Keyword:%s\n",word);
		}
		else
		{
			printf("Identifier:%s\n",word);
		}		
		i--;
	}
	if(isdigit(input[i]))
	{
		char number[50];
		int j=0;
		while(isdigit(input[i]))
		{
			number[j]=input[i];
			j++;
			i++;
		}
		number[j]='\0';
		printf("Number: %s\n",number);
		i--;		
	}
	if(input[i]=='=' && input[i+1]=='=')
	{
		printf("Operator : ==\n");
		i++;
	}
	else if(input[i]=='!' && input[i+1]=='=')
	{
		printf("Operator : !=\n");
		i++;
	}
	else if(input[i]=='<' && input[i+1]=='=')
	{
		printf("Operator : <=\n");
		i++;
	}
	else if(input[i]=='>' && input[i+1]=='=')
	{
		printf("Operator : >=\n");
		i++;
	}
	else if(input[i]=='+' && input[i+1]=='+')
	{
		printf("Operator : ++\n");
		i++;
	}
	else if(input[i]=='-' && input[i+1]=='-')
	{
		printf("Operator : --\n");
		i++;
	}
	else if(input[i]=='+' || input[i]=='-' || input[i]=='=')
	{
		printf("Operator : %c\n",input[i]);
	}
	 else if(input[i]==';'|| input[i]==',' || input[i]== '(' || input[i] == ')' || input[i]=='{' || input[i]=='}' ||input[i]=='[' || input[i] ==']')
	{
		printf("Special Symbol : %c\n",input[i]);
	}
	
}
return 0;
}