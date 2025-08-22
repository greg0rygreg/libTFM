#ifndef LIBTFM_H
#define LIBTFM_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

enum TFM {
  False,
  Maybe,
  True
};

bool DecodeTFMEnum(enum TFM tfm);

#ifdef __cplusplus
}
#endif

#endif // LIBTFM_H