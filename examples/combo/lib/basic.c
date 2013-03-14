#include <stdio.h>
#include "simplelib.h"
#include "private.h"

int basic_hello (char *msg)
{
  printf ("basic\n");
  simplelib_hello (msg);
  private_foo (msg);
  printf ("\n");
  return 0;
}
