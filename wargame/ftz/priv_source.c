#include <stdio.h>
#include <stdlib.h>

#define UID	3010

int main(int argc, char *argv[])
{
    setreuid(3010,3010);
    system("/bin/bash");
}
