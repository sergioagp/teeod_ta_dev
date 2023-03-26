#ifndef TEE_SHAREDMEM_H
#define TEE_SHAREDMEM_H
//0xA0030000
#define TEE_SHARED_MEM 0x00C0000000
#define TEE_SECURE_STORAGE_ADDR TEE_SHARED_MEM + 0x1000
#define TEE_SECURE_STORAGE_SIZE 0x4000
#endif /*TEE_SHAREDMEM_H*/