#ifndef MEMOIZATION_H
#define MEMOIZATION_H

typedef struct genericNode {
  void *pointer;
  struct genericNode *next;
} genericNode;

genericNode *inicializeNode();
void addNode(void *data, genericNode **node);
void freeMemoizationList(genericNode *node);

#endif
