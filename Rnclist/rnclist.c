#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"rnclist.h"
bool list_insert(node * root,int value){
    node * current =  root;
    node ** pre = &root;
    while(current != NULL && current->data < value){
        pre = &current->link;
        current = current->link;
    }
    node * new = malloc(sizeof(node));
    if(new !=NULL){
        new->data = value;
        *pre = new;
        new->link = current;
        return  true;
    }
    printf("no space \n");
    return false;
}
bool list_del(node * root,int value){
    node * current = root;
    node ** ptr = & root;
    while(current!=NULL&&current->data!=value){
        ptr = &current->link;
        current = current->link;
    }
    if(current!=NULL){
        *ptr = current->link;
         free(current);
         return true;
    }
    printf("no thie value\n") ; 
    return false;
}
bool list_add(node * ptr,int value){
    while(ptr!=NULL){
        ptr = ptr->link;
    }
    node * new = malloc(sizeof(node));
    if(new !=NULL){
        new->data = value;
        ptr->link = new;
        new->link = NULL;
        return true;
    }
    printf("no space\n");
    return false;
}
bool list_lookup(node * ptr,int value){
    while(ptr!=NULL && ptr->data !=value){
        ptr = ptr ->link;
    }
    if(ptr!=NULL){
        return true;
    }
    printf("no this value\n");
    return false;
}