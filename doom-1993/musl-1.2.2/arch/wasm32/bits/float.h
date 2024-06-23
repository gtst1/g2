#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__

#define LDBL_TRUE_MIN __LDBL_DENORM_MIN__
#define LDBL_MIN __LDBL_MIN__
#define LDBL_MAX __LDBL_MAX__
#define LDBL_EPSILON __LDBL_EPSILON__

#define LDBL_MANT_DIG __LDBL_MANT_DIG__
#define LDBL_MIN_EXP __LDBL_MIN_EXP__
#define LDBL_MAX_EXP __LDBL_MAX_EXP__

#define LDBL_DIG __LDBL_DIG__
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__

#define DECIMAL_DIG __DECIMAL_DIG__

// TODO: https://github.com/WebAssembly/wasi-libc/blob/main/libc-top-half/musl/arch/wasm32/bits/float.h seems to have completely different numbers. Check if we use hardware floats.