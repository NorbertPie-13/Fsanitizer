#include "../include/test_main.h"

int main( void )
{
    int ret_val = FAIL;

    errno = 0;
    uint8_t * number = calloc(1, sizeof(uint8_t));
    if (NULL == number)
    {
        perror("Calloc");
        errno = 0;
        goto EXIT;
    }

    printf("Number after Memory Initialization: %d\n", *number);

    EXIT:
        return ret_val;
}