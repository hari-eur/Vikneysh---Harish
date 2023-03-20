#include <stdio.h>

#define PRINTAPI(argc, argv)                  \
  for (int i=1;i <argc;i++){ \
    printf("%s ", argv[i]);                    \
  }

int main(int argc, char *argv[])
{
    PRINTAPI(argc,argv);
    return 0;
}
