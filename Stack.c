#include <stdio.h>
#include "Stack.h"
//complexity is big theta of 1 theta(1)
void InitializeStack(Stack* stackpointer)
{
    //*stackpointer.top = 0; the same as
    stackpointer->top = 0;
}
//preConditions:stack is initialized & not full
//postConditions: the element e has beeb=n stored at the top of the stack & e doesn't change
void Push(StackEntry e,Stack* stackpointer){
    stackpointer->entry[stackpointer->top] = e;
    stackpointer->top++;
    //the lastest two lines can be stackpointer->entry[stackpointer->top++] = e
}
//preConditions:stack is initialized & not empty
//postConditions: the last element entered is returned
void Pop(StackEntry* ep,Stack* stackpointer){
     stackpointer->top--;
     *ep = stackpointer->entry[stackpointer->top];
    //the lastest two lines can be  *e = stackpointer->entry[--stackpointer->top]
}
//preConditions:stack is initialized & not empty
//postConditions: the top element entered is returned
void StackTop(StackEntry* ep,Stack* stackpointer){
     *ep = stackpointer->entry[stackpointer->top -1];
}
//preConditions:stack is initialized & not empty
//postConditions: the top element entered is returned
void TraverseStack(Stack* stackpointe,void (*pf)(StackEntry)){
    for(int counter =stackpointe->top -1 ;counter>0 ;counter--){
        (*pf)(stackpointe->entry[counter]);
    }
}
//preConditions:stack is initialized
//postConditions: true or false is returned
int StackFull(Stack* stackpointer){
    if(stackpointer ->top == MAXSTACK)
        return 1;
    else
        return 0;
    //it can be return stackpointer ->top >= MAXSTACK;
}
//preConditions:stack is initialized
//postConditions: true or false is returned
int StackEmpty(Stack* stackpointer){
    if(stackpointer ->top == 0)
        return 1;
    else
        return 0;
    //it can be return stackpointer ->top >= 0;
}
//preConditions:stack is initialized
//postConditions: int Stack size
int StackSize(Stack* stackpointer){
    return stackpointer ->top ;
}
void ClearStack(Stack* stackpointer)
{
    stackpointer->top = 0;
}
