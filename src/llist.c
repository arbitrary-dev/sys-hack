#include <stdlib.h>

#include "llist.h"

Node *
l_prepend(Node *to, void *value) {
  Node *n = calloc(1, sizeof(*n));
  n->value = value;
  return l_prependn(to, n);
}

Node *
l_prependn(Node *to, Node *n) {
  n->next = to;
  return n;
}

Node *
l_append(Node *to, void *value) {
  Node *n = calloc(1, sizeof(*n));
  n->value = value;

  if (!to)
    return n;

  Node *last = to;
  while (last->next)
    last = last->next;
  last->next = n;

  return to;
}
