#include <iostream>
#define Q_SIZE 5

struct Queue{
    int head, tail;
    int data[Q_SIZE + 1];
};

void enqueue(Queue *q, int item){
    const int tail_size = (q->tail + 1) % (Q_SIZE + 1);

    if(tail_size == q->head){
        printf("Queue is full! \n");
        return;
    }

    q->data[q->tail] = item;
    q->tail = tail_size;
}

int dequeue(Queue *q){
    int item;

    if(q->tail == q->head){
        printf("Queue is empty! \n");
        return -1;
    }

    item = q->data[q->head];
    q->head = (q->head + 1) % (Q_SIZE + 1);

    return item;
}

void display(Queue q){
    for (int i = 0; i < Q_SIZE; ++i) {
        printf("%d  ", q.data[i]);
    }
}

int main(){
    Queue my_q{};
    int item;
    my_q.head  = 0;
    my_q.tail = 0;

    enqueue(&my_q, 12);
    printf("tail = %d\n", my_q.tail);
    enqueue(&my_q, 23);
    printf("tail = %d\n", my_q.tail);enqueue(&my_q, 23);
    printf("tail = %d\n", my_q.tail);enqueue(&my_q, 23);
    printf("tail = %d\n", my_q.tail);enqueue(&my_q, 23);
    printf("tail = %d\n", my_q.tail);enqueue(&my_q, 23);
    printf("tail = %d\n", my_q.tail);


   item = dequeue(&my_q);
   printf("%d ", item);

}