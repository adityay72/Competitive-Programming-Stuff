#include <stdio.h>
#include <pthread.h>

void *thread_function(void *arg) {
    int *num = (int*)arg;
    printf("Thread received value: %d\n", *num);
    return NULL;
}

int main() {
    pthread_t thread;
    int value = 10;

    pthread_create(&thread, NULL, thread_function, &value);

    pthread_join(thread, NULL);

    printf("Thread has finished execution\n");

    return 0;
}

