// //Linked List - 3
// #include<stdio.h>
// #include<stdlib.h>
// //linked list model

// struct node{
// 	int arr[10];
// 	struct node *next;
// };

// typedef struct node link;

// void print(link *start){
// link *temp = start;
// while(temp !=NULL){
// for(int i = 0 ; i<10;i++){
// printf("%d\t" , temp->arr[i]);
// }
// printf("\n");
// temp = temp->next; 
// }
// }




// int main(){
// link *head;

// link a1 , a2 , a3;
//     for (int i = 0; i < 10; i++) {
//         a1.arr[i] = i + 1;
//         a2.arr[i] = i + 11;
//         a3.arr[i] = i + 21;
//     }
// head = &a1;

// a1.next = &a2;
// a2.next = &a3;
// a3.next = NULL;
// print(head);
// return 0;

// }
#include<stdio.h>
#include<stdlib.h>

// Linked List Model
struct node {
    int arr[10];
    struct node *next;
};

typedef struct node link;

// Function to print the linked list
void print(link *start) {
    link *temp = start;
    while (temp != NULL) {
        for (int i = 0; i < 10; i++) {
            printf("%d\t", temp->arr[i]);
        }
        printf("\n");
        temp = temp->next;  // Move to the next node
    }
}

int main() {
    link *head;

    link a1, a2, a3;

    // Initialize arrays correctly
    for (int i = 0; i < 10; i++) {
        a1.arr[i] = i + 1;
        a2.arr[i] = i + 11;
        a3.arr[i] = i + 21;
    }

    // Create linked list
    head = &a1;
    a1.next = &a2;
    a2.next = &a3;
    a3.next = NULL;

    // Print the linked list
    print(head);

    return 0;
}



