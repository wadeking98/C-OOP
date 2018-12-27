/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "point.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

point newPoint(){
    point pt = {0,0, toString};
    return pt;
}

point newPointxy(int x, int y){
    point pt = {x,y, toString};
    return pt;
}

char* toString(point *self){
    char *strPt = (char*)malloc(sizeof(char)*10);
    
    
    sprintf(strPt, "%s", "(");
    sprintf(strPt, "%s%d", strPt, self->x);
    sprintf(strPt, "%s%s", strPt, ",");
    sprintf(strPt, "%s%d", strPt, self->y);
    sprintf(strPt, "%s%s", strPt, ")");
    
    
        
    return strPt;
}


