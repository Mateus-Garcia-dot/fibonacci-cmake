#include "memoizationList.h"
#include <stdio.h>
#include <stdlib.h>

memoizationNode *instanciateNode(int pos, int num) {
  memoizationNode *node = malloc(sizeof(memoizationNode));
  node->num = num;
  node->pos = pos;
  return node;
}

memoizationNode *inicializeNode() { return NULL; }

void addNode(int pos, int num, memoizationNode **list) {
  memoizationNode *node = *(list);
  int find = findWithPos(pos, node);
  if (find != 0)
    return;
  if (node == NULL) {
    *list = instanciateNode(pos, num);
    return;
  }
  for (; node->next != NULL; node = node->next)
    ;
  node->next = instanciateNode(pos, num);
}

void freeMemoizationList(memoizationNode *node) {
  if (node == NULL)
    return;
  freeMemoizationList(node->next);
  free(node);
}

int findWithPos(int pos, memoizationNode *node) {
  for (; node != NULL; node = node->next) {
    if (node->pos == pos)
      return node->num;
  };
  return 0;
}
