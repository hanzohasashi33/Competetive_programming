// https://practice.geeksforgeeks.org/problems/parenthesis-checker/0


#include<stdlib.h>
#include<string.h>
int Balanced(char a, char b)
{
    if((a=='('&&b==')')||(a=='['&&b==']')||(a=='{'&&b=='}'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int top = -1;//Global variable for 'top'
void push(char* stack, char data)
{
    top++;
    stack[top]=data;
}
void pop(char* stack)
{
    top--;
}

int isStackEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    char* str = (char*)calloc(100000,sizeof(char));
    scanf("%s",str);
    char* stack = (char*)calloc(100000,sizeof(char));
    int i;
    int n = strlen(str);
    push(stack,str[0]);
    for(i=1;i<n;i++)
    {
        if(Balanced(stack[top],str[i])==1)
        {
            pop(stack);
        }
        else
        {
            push(stack,str[i]);
        }
    }
    if(isStackEmpty()==1)
    {
        printf("balanced\n");
    }
    else
    {
        printf("not balanced\n");
    }
    free(str);
    free(stack);
    }
    return 0;


}
