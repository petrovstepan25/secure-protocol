cmake_minimum_required(VERSION 3.16)

project(secure_protocol C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_package(OpenSSL REQUIRED)

include_directories(include)

add_executable(secure_protocol
    src/main.c
    src/protocol.c
    src/crypto_keys.c
    src/hkdf.c
    src/aes_gcm.c
    src/signature.c
    src/utils.c
)

target_link_libraries(secure_protocol OpenSSL::SSL OpenSSL::Crypto)