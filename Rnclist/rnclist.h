#ifndef RNCLIST_RNCLIST_H_
#define RNCLIST_RNCLIST_H_
typedef struct Node{
    node * link ;
    void * data;
}node;
bool list_insert(node * root,int value);
bool list_del(node * root,int value);
bool list_add(node * ptr,int value);
bool list_lookup(node * ptr,int value);
#endif 