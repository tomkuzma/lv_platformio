#include <string.h>
#include "vars.h"

char test_string[100] = { 0 };

const char *get_var_test_string() {
    return test_string;
}

void set_var_test_string(const char *value) {
    strncpy(test_string, value, sizeof(test_string) / sizeof(char));
    test_string[sizeof(test_string) / sizeof(char) - 1] = 0;
}
