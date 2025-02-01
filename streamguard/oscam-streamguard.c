#include "oscam-client.h"
#include <openssl/rand.h>
#include <time.h>

#ifdef STREAMGUARD_ENABLED
void generate_initial_key(uint8_t *key_out) {
    RAND_bytes(key_out, 32);  // 使用OpenSSL生成32字节随机密钥
    // 扰动算法（与StreamGuard逻辑一致）
    for(int i = 0; i < 32; i++) {
        key_out[i] = (key_out[i] ^ 0xAA) + (i % 0xFF);
    }
}
#endif
