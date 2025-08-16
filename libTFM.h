#ifndef LIBTFM_H
#define LIBTFM_H
#include <stdbool.h>

enum TFM {
  False,
  Maybe,
  True
};

bool DecodeTFMEnum(enum TFM tfm);

#endif // LIBTFM_H