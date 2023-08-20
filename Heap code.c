#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Queue {
    long long *arr;
    long long front, rear, capacity;
};

struct Queue* createQueue(long long capacity) {
    struct Queue *queue = (struct Queue*) malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->arr = (long long*) malloc(queue->capacity * sizeof(long long));
    return queue;
}

bool isFull(struct Queue *queue) {
    return ((queue->rear + 1) % queue->capacity == queue->front);
}

bool isEmpty(struct Queue *queue) {
    return (queue->front == -1);
}

void enqueue(struct Queue *queue, long long value) {
    if (isFull(queue))
        return;
    if (isEmpty(queue))
        queue->front = 0;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = value;
}

long long dequeue(struct Queue *queue) {
    long long value;
    if (isEmpty(queue))
        return -1;
    value = queue->arr[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front = (queue->front + 1) % queue->capacity;
    return value;
}

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    struct Queue *q1 = createQueue(k);
    struct Queue *q2 = createQueue(k);

    long long sum = 1 + k;

    enqueue(q1, 1);
    enqueue(q2, k);

    long long i = 2;
    

    while (i < n) {
        long long a = q1->arr[q1->front];
        long long b = q2->arr[q2->front];
        
        
        if (b-a>1)
        {

        long long c = (a + b) / 2;
        enqueue(q1, a);
        enqueue(q2, c);

        enqueue(q1, c);
        enqueue(q2, b);

        sum = sum + c;
        i++;
        }

        dequeue(q1);
        dequeue(q2);
    }

    printf("%lld\n", sum);

    return 0;
}