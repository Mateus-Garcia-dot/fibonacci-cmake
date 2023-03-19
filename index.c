#include "src/memoizationList.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  memoizationNode *list = inicializeNode();
  addNode(1, 1, list);
  return 0;
}
