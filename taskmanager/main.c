//
//  main.c
//  taskmanager
//
//  Created by Brett Jackson on 12/25/12.
//  Copyright (c) 2012 Brett Jackson. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "task.c"

typedef struct task {
    char name[40];
    char description[140];
    int time;
    struct person *assigned_to;
    struct task *next;
} task;

typedef struct person {
    char name;
    struct task *assigned_task;
    struct person *next;
} person;



typedef struct TaskArray {
    task *array;
    size_t used;
    size_t size;
} TaskArray;

void initTaskArray(TaskArray *a, size_t initialSize) {
    a->array = (task *)malloc(initialSize * sizeof(task));
    a->used = 0;
    a->size = initialSize;
}

void insertTaskArray(TaskArray *a, task element) {
    if (a->used == a->size) {
        a->size *= 2;
        a->array = (task *)realloc(a->array, a->size * sizeof(task));
    }
    a->array[a->used++] = element;
}

void freeTaskArray(TaskArray *a) {
    free(a->array);
    a->array = NULL;
    a->used = a->size = 0;
}


TaskArray taskList;
person personList;

int main(int argc, const char * argv[])
{

    initTaskArray(&taskList, 5);
    for (int i = 0; i > -1; i++) {
        task *currentTask = malloc(sizeof(task));
        printf("What is the name of your task?\n");
        scanf("%s", currentTask->name);
        
        printf("Describe your task.\n");
        scanf("%s", currentTask->description);
        
        //printf("%s\n", currentTask->name);
        //1printf("%s\n", currentTask->description);
        insertTaskArray(&taskList, *currentTask);
        for (int n = 0; n <= i; n++) {
            printf("%s", taskList.array[n].name);
    }
    
    }
    return 0;
}



