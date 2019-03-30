#ifndef RNCLIST_RNCLIST_H_
#define RNCLIST_RNCLIST_H_
typedef struct Node{
    node * link ;
    void * data;
}node;
bool list_insert(node ** linktp,node * current);
bool list_del(node * root,void * data);
bool list_add(node *root,node * current);
bool list_lookup(node *root,void *data);
#endif 