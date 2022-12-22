#include<stdio.h>
#include<stdlib.h>
# define SIZE 4
int top = -1,inp_array[SIZE];
void push();
void pop();
void show();
int main()
{
    int choice;
    while(1){
        printf("\n*********Perform Stack Operations:********");
        printf("\n1.push the elements\n2.pop the elements\n3.show\n4.End");
        printf("\nChoose the choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            break;
            Default:
            printf("\nInvalid choice !!");
        }
    }
}
void push(){
    int x;
    if(top == SIZE -1)
    {
        printf("\nOVERFLOW!!");
    }
    else
    {
        printf("\nEnter the element of stack: ");
        scanf("%d",&x);
        top = top+1;
        inp_array[top]=x;
    }
}
void pop(){
    if(top == -1)
    {
        printf("\nUNDERFLOW!!");
    }
    else
    {
        printf("\nPopped elemets are %d:",inp_array[top]);
    }
}
void show(){
    if(top == -1)
    {
        printf("\nUNDERFLOW!!");
    }
    else
    {
        printf("\nElements are present in the stack: ");
        for(int i = top;i>=0;--i)
        printf("%d\n",inp_array[i]);
    }
}