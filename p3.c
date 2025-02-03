//Linked List - 2

#include<stdio.h>
#include<stdlib.h>
//making Linked list datatype;

struct node{
	char val;
	struct node *next;	

};
typedef struct node link;


void print(link *head){
	link *temp = head;
	while(temp !=NULL){
		printf("%c\t",temp->val);
		temp = temp->next;
	}
}


int main(){
	link l1 , l2, l3,l4 ; 
	link *start = NULL;
	l1.val = 'a';
	l2.val = 'b';
	l3.val = 'c';
	l4.val = 'd';
	start = &l1;
	l1.next = &l2;
	l2.next = &l3;
	l3.next = &l4;
	l4.next = NULL;
	print(start);
	
return 0;
}


	


