#ifndef LIBTFM_H
#define LIBTFM_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum TFM {
  False,
  Maybe,
  True
} TFM;

bool decodeTFM(TFM tfm);

#ifdef __cplusplus
}
#endif

#endif // LIBTFM_H