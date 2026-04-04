// gcc -o example example.c libtfm.c

#include <stdio.h>
#include "libTFM.h"

int main() {
  printf(
    "False: %d\nMaybe: %d\nTrue: %d\n",
    decodeTFM(False),
    decodeTFM(Maybe),
    decodeTFM(True)
  );
  return 0;
}