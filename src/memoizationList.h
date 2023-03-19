#ifndef MEMOIZATION_H
#define MEMOIZATION_H

typedef struct memoizationNode {
  int pos;
  int num;
  struct memoizationNode *next;
} memoizationNode;

memoizationNode *inicializeNode();
void addNode(int pos, int num, memoizationNode *node);
void freeMemoizationList(memoizationNode *node);

#endif
