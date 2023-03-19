#include "memoizationList.h"
#include <stdlib.h>

memoizationNode *instanciateNode(int pos, int num) {
  memoizationNode *node = malloc(sizeof(memoizationNode));
  node->num = num;
  node->pos = pos;
  return node;
}

memoizationNode *inicializeNode() { return NULL; }

void addNode(int pos, int num, memoizationNode *node) {
  for (; node != NULL; node = node->next)
    ;
  node = instanciateNode(pos, num);
}

void freeMemoizationList(memoizationNode *node) {
  if (node == NULL)
    return;
  freeMemoizationList(node->next);
  free(node);
}
