#include <stdio.h>
#define MAX 10
int stack[MAX], top=-1;
void push(int val){ if(top==MAX-1) printf("Stack Overflow\n"); else stack[++top]=val; }
void pop(){ if(top==-1) printf("Stack Underflow\n"); else printf("Popped: %d\n", stack[top--]); }
void display(){ if(top==-1) printf("Stack Empty\n"); else { printf("Stack: "); for(int i=0;i<=top;i++) printf("%d ", stack[i]); printf("\n"); } }
int main(){ push(5); push(10); push(20); display(); pop(); display(); return 0; }