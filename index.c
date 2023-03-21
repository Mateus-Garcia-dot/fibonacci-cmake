#include "src/memoizationList.h"
#include <stdio.h>

int fibbonattiMemo(int pos, memoizationNode *memo) {
  int find = findWithPos(pos, memo);
  if (find != 0)
    return find;
  if (pos <= 2)
    return 1;
  int sum = fibbonattiMemo(pos - 1, memo) + fibbonattiMemo(pos - 2, memo);
  addNode(pos, sum, &memo);
  return sum;
}

int main(int argc, char *argv[]) {
  memoizationNode *list = inicializeNode();
  printf("%d", fibbonattiMemo(100, list));
  return 0;
}
