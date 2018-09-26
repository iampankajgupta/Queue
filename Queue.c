// insertion and deletion in the queue is O(n) //
#include<stdio.h>
#include<cs50.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*front = NULL;
struct Node*rear = NULL;
// Enqueue or insertion in the queue //
void insert(int data){
    struct Node*headNode = (struct Node*)malloc(sizeof(struct Node));
    headNode->data = data;
    headNode->next = NULL;
    if (front==NULL && rear==NULL){
        front = headNode;
        rear = headNode;
        return ;
    }
    rear->next = headNode;
    rear = headNode;
}
// dequeue or deletion from the front of the queue //
void dequeue(){
    struct Node*temp = front;
    if (front==NULL) return ;
    if (front==rear){
        front = rear = NULL;
    }
    else{
    front = front->next;
    free(temp);
    }
}
// Print the elements of Queue // 
void Print(){
    struct Node*iterate = front;
    while(iterate->next!=NULL){
        printf("%i",iterate->data);
        iterate = iterate->next;
    }
     printf("%i",iterate->data);
}
int main (){
    front = NULL;
    rear = NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    dequeue();
    Print();
}
