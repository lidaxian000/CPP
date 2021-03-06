/*************************************************************************
  >  File  Name  : copyFile.c
  >    Author    : lirongwei
  >     Mail     : a2413044193@gmail.com
  > Created Time : 2020/07/13 21:19:03
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define P_PRINT_ERROR(e)          \
    do {                          \
        if (e == NULL) {          \
            printf("open error"); \
            exit(-1);             \
        }                         \
    } while (0)

int main(int argc, char** argv) {
    // FILE* prf = fopen("copyFile.c", "r");
    FILE* prf = fopen(argv[1], "r");
    P_PRINT_ERROR(prf);

    // FILE* pwf = fopen("copyFile.c.copy", "w+");
    FILE* pwf = fopen(argv[2], "w+");
    P_PRINT_ERROR(pwf);

    char ch;
    while ((ch = fgetc(prf)) != EOF) putchar(fputc(ch, pwf));

    fclose(prf);
    fclose(pwf);
    return 0;
}
