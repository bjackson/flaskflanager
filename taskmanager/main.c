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
    while (1==1) {
        printf("What is the name of your task?\n");
        scanf("%s", currentTask.name);
        
        printf("Describe your task.\n");
        scanf("%s", currentTask.description);
        
        printf("%s\n", currentTask.name);
        printf("%s\n", currentTask.description);
    }
    return 0;
}

