// linded list - 1
#include<stdio.h>
#include<stdlib.h>


struct node{
    int num;
    struct node *next;
};
    typedef struct node node; 

void print(node *start){
    node *temp = start;
    while(temp !=NULL){
        printf("%d\t" , temp ->num);
        temp = temp->next;

    }
}

int main()
{
    node *head = NULL;
    node num1 , num2 , num3;
    num1.num = 1;
    num2.num = 2;
    num3.num = 3;
    head = &num1;
    num1.next = &num2;
    num2.next = &num3;
    num3.next = NULL;
    print(head);



    return 0;
}