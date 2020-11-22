#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAXSTACK 100
/****Stack.h*******/
typedef int StackEntry;
typedef struct stack{
	int top;
	StackEntry entry[MAXSTACK];
} Stack;

void InitializeStack(Stack *);
void Push(StackEntry, Stack *);
void Pop(StackEntry *, Stack *);
int	StackEmpty(Stack *);
int	StackFull(Stack *);
void StackTop(StackEntry *, Stack *);
int StackSize(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *, void (*)(StackEntry));
#endif // STACK_H_INCLUDED
