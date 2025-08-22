// gcc -o example example.c libtfm.c

#include <stdio.h>
#include "libTFM.h"

int main() {
  printf(
    "False: %d\nMaybe: %d\nTrue: %d\n",
    DecodeTFMEnum(False),
    DecodeTFMEnum(Maybe),
    DecodeTFMEnum(True)
  );
  return 0;
}