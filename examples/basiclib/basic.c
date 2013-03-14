#include <stdio.h>
#include "simplelib.h"

int basic_hello (char *msg)
{
  printf ("basic\n");
  simplelib_hello (msg);
  return 0;
}
