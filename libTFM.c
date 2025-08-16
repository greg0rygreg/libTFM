#include "libTFM.h"
#include <stdlib.h>
#include <time.h>


bool DecodeTFMEnum(enum TFM tfm) {
  switch (tfm) {
    case False: {
      return false;
    }
    case Maybe: {
      srand(time(NULL));
      return rand() % 2; // lol
    }
    case True: {
      return true;
    }
  }
}