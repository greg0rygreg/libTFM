#include "libTFM.h"
#include <stdlib.h>
#include <time.h>


bool decodeTFM(TFM tfm) {
  switch (tfm) {
    case False: return false; break;
    case Maybe: {
      srand(clock() + time(NULL));
      return rand() % 2; // lol
      break;
    }
    case True: return true; break;
  }
}