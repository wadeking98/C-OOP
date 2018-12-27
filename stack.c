/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stack.h"
#include "point.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
stack* newStack(){
    stack *s = malloc(sizeof(stack) + sizeof(point));
    s->size = 0;
    s->pop = pop;
    s->push = push;
    s->isEmpty = isEmpty;
    s->toString = toStringStack;
    return s;
}

void push(stack *self, point item){
    self->size++;
    self = realloc(self, sizeof(stack) + self->size*sizeof(point));
    if(!self){
        printf("error: push realloc returned null");
    }
    self->items[self->size-1] = item;
}

point pop(stack *self){
    point popItem = self->items[self->size-1];
    self->size--;
    self = realloc(self, sizeof(stack) + (self->size)*sizeof(point));
    return popItem;
}

int isEmpty(stack* self){
    return self->size == 0;
}

char* toStringStack(stack *self){
    
    char* strSt = malloc(0);
    char* strPt;
    
    sprintf(strSt, "%s", "");
    for(int i = 0; i<self->size; i++){
        strPt = self->items[i].toString(&(self->items[i]));
        strSt = realloc(strSt, sizeof(strSt)+sizeof(char)*strlen(strPt));
        sprintf(strSt, "%s%s", strSt, strPt);
        free(strPt);
    }
    
    
    
    
    return strSt;
}