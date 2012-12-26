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

int main(int argc, const char * argv[])
{

    task currentTask;
    printf("What is the name of your first task?");
    scanf("%s", &currentTask.name);
    printf("%s", &currentTask.name);
    return 0;
}

