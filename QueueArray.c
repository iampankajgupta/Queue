#include<stdio.h>
#include<cs50.h>
int array[6];
int front = 0;
int rear = 0; 
// to insert the element in the Queue // 
void Enqueue(int data){
    array[rear] = data;
    rear = rear + 1;
}
// to delete the front element in the array // 
void  Dequeue(){
    if (front == -1 && rear == -1){
        return ;
    }
    array[front] = 0;
    front = front +1;
} 
// to print the element of the queue // 
void Print(){
    for (int i = 0;i < 6; i++){

        printf("%i", array[i]);
    }
}
int main (){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    Dequeue();
    Print();
}
