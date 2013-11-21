#include <stdio.h>

void main(int argc, char* argv[])
{
  printf("%p\n", getenv(argv[1]));
  return 0;
}
