#include "ErrorHandler.h"

#include <stdio.h>

void exitIfError(const void *const pointerToCheck, const enum error errorType, const char *funcName)
{
  if (pointerToCheck == NULL)
  {
    printError(errorType, funcName);
    exit(EXIT_FAILURE);
  }
}

void printError(const int errType, const char *funcName)
{
  char* errors[] = {"NO_ERROR", "NULL_PARAMETER", "ALLOCATION_ERROR", "INVALID_TYPE"};
  
  fprintf(stderr, "%s() failed: received %s error.\n", funcName, errors[errType]);

}