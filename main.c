#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
void Display(StackEntry p){
     printf("p is : %d\n",p);
}
int main()
{
    Stack stack;
    StackEntry e;
    InitializeStack(&stack);
    if(!StackFull(&stack)){
     Push(10,&stack);
     Push(20,&stack);
     Push(30,&stack);
     Push(40,&stack);
     Push(50,&stack);
    }
    while(!StackEmpty(&stack)){
        Pop(&e,&stack);
        printf("e is : %d\n",e);
    }
    while(!StackEmpty(&stack)){
        Pop(&e,&stack);
        TraverseStack(&stack,&Display);
    }
    return 0;
}
