//
//  task.c
//  taskmanager
//
//  Created by Brett Jackson on 12/25/12.
//  Copyright (c) 2012 Brett Jackson. All rights reserved.
//

#include <stdio.h>

typedef struct task {
    char name;
    char description;
    int time;
    struct person *assigned_to;
} task;

typedef struct person {
    char name;
    struct task *assigned_task;
} person;


task taskList[15];
person* personList[15];

