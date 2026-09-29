#include<stdio.h>
int main(){
  int size,choice,value,top=-1;
  printf("enter the size of the stack:");
  scanf("%d",&size);
  int stack[size];
  while(1){
  printf("\n1.push\n2.pop\n3.display\n4.exit\n");
  printf("enter your choice:");
  scanf("%d",&choice);
  switch(choice){
    case 1:
  if(top==size-1){
   printf("stack overflow!\n");
   } else{
   printf("enter value to push:");
   scanf("%d",&value);
   stack[++top]=value;
   printf("%d pushed to stack\n",value);
   }
   break;
  case 2:
 if(top==-1){
  printf("stack underflow!\n");
  }else{
 printf("%d popped from stack\n",stack[top--]);
  }
  break;
  case 3:
 if(top==-1){
  printf("stack is empty\n");
  }else{
  printf("stack elements:");
  for(int i=top;i>=0;i--){
  printf("%d",stack[i]);
  }
  printf("\n");
  }
  break;
 case 4:
  printf("exiting...\n");
 return 0;
 default:
  printf("invalid choice!.\n");
   }
  }
 return 0;
}

