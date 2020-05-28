#include <stddef.h>
size_t maxSeq(int * array, size_t n) {
  if (n <= 0) {
    return 0;
  }

  size_t subLen = 1; 
  size_t subLenT = 1; 
  for (size_t i = 0; i < n - 1; i++) {

    if (array[i] < array[i + 1]) {

      subLenT++;
      if (i + 1 == n - 1) {
	subLen = (subLenT > subLen) ? subLenT : subLen;
      }
    }
    else {

      subLen = (subLenT > subLen) ? subLenT : subLen; 
      subLenT = 1; 
    }
  }

  return subLen;
}
