#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <stddef.h>
#include <stdint.h>

#define PROTOCOL_KEY_SIZE 32
#define PROTOCOL_IV_SIZE 12
#define PROTOCOL_TAG_SIZE 16

typedef struct {
    uint8_t *ciphertext;
    size_t ciphertext_len;

    uint8_t iv[PROTOCOL_IV_SIZE];
    uint8_t tag[PROTOCOL_TAG_SIZE];

    uint8_t *signature;
    size_t signature_len;

    uint8_t *aad;
    size_t aad_len;

    uint8_t *sender_public_key;
    size_t sender_public_key_len;
} secure_message_t;

void secure_message_free(secure_message_t *msg);

#endif