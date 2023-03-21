#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

genericNode *inicializeNode() { return NULL; };

genericNode *allocateGenericNode(void *data) {
  genericNode *node = malloc(sizeof(genericNode));
  node->pointer = data;
  node->next = NULL;
  return node;
}

void addNode(void *data, genericNode **nodeReference) {
  genericNode *node = *nodeReference;
  if (node == NULL) {
    *nodeReference = allocateGenericNode(data);
    return;
  }
  for (; node->next == NULL; node = node->next)
    ;
  node->next = allocateGenericNode(data);
};

// This will not free correctly the pointers you must the pointer variable  by
// hand
void deleteNode(genericNode **nodeReference) {
  genericNode *node = *nodeReference;
  if (*nodeReference == NULL || node == NULL) {
    return;
  }
  deleteNode(&node->next);
  free(node);
}

void freeMemoizationList(genericNode *node);
