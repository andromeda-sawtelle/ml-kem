#include "ml_kem_test.h"

#define TEST_FN(f) { f, #f }

typedef struct {
    int (*fn)();
    const char* name;
} test_func;

static const test_func test_funcs[] = {
    TEST_FN(util_test)
};
static const int test_func_len = 1;

int main() {
    for(int i = 0; i < test_func_len; i++) {
        int res = test_funcs[i].fn();
        printf("%s result = %d\n", test_funcs[i].name, res);
    }
}
