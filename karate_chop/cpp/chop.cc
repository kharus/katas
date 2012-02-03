#include "chop.h"
#include <vector>

int chop(int n, std::vector<int> field) {
  if (field.size() == 0) {
    return -1;
  }

  int begin = 0;
  int end = field.size() - 1;
  
  while (begin != end) {
    int middle = (end - begin) / 2;
    if ( n <= field[middle] ){
      end = middle;
    } else {
      begin = middle + 1;
    }
  }

  if ( field[begin] == n ) {
    return begin;
  } else {
    return -1;
  }
}
