#ifndef ERROR_HANDLER_
#define ERROR_HANDLER_

#include <stdlib.h>

#define CURRENT_FUNC_NAME __func__

enum error{
    NO_ERROR = 0,
    NULL_PARAMETER,
    ALLOCATION_ERROR,
    INVALID_TYPE_SHIP
};

void exitIfError(const void *const pointerToCheck, const enum error errorType, const char *funcName);

void printError(const int errType, const char *funcName);

#endif /* ERROR_HANDLER_ */
