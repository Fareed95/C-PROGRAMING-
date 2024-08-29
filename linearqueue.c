#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int is_full() {
    return rear == SIZE - 1;
}

int is_empty() {
    return front == -1;
}

void enqueue(int value) {
    if (is_full()) {
        printf("Queue is full!\n");
        return;
    }
    
    if (front == -1) {  // If the queue is empty
        front = 0;
    }
    
    rear++;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue() {
    if (is_empty()) {
        printf("Queue is empty!\n");
        return -1;
    }
    
    int dequeued_value = queue[front];
    printf("Dequeued: %d\n", dequeued_value);
    
    if (front == rear) {
        // If this was the last element in the queue
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    
    return dequeued_value;
}

void display() {
    if (is_empty()) {
        printf("Queue is empty!\n");
        return;
    }
    
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    
    dequeue();
    display();
    
    return 0;
}