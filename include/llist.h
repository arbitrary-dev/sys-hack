#ifndef LLIST_H
#define LLIST_H

typedef struct node {
  void *value;
  struct node *next;
} Node;

Node * l_prepend(Node *to, void *value);
Node * l_prependn(Node *to, Node *n);
Node * l_append(Node *to, void *value);

#endif
