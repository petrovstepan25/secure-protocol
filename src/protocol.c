#include "protocol.h"

#include <stdlib.h>
#include <string.h>

void secure_message_free(secure_message_t *msg) {
    if (msg == NULL) {
        return;
    }

    free(msg->ciphertext);
    free(msg->signature);
    free(msg->aad);
    free(msg->sender_public_key);

    memset(msg, 0, sizeof(*msg));
}