#include <furi_hal_random.h>

#include <wolfssl/wolfcrypt/random.h>
#include <wolfssl/wolfcrypt/error-crypt.h>

int wc_RNG_GenerateBlock(WC_RNG* rng, byte* output, word32 sz) {
    (void)rng;

    if(output == NULL && sz != 0) {
        return BAD_FUNC_ARG;
    }

    if(sz != 0) {
        furi_hal_random_fill_buf((uint8_t*)output, sz);
    }

    return 0;
}
