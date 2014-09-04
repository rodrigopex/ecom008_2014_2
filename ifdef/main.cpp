#include "a.h"
#include "a.h"

#ifdef TEST
#include <stdio.h>
#endif
int main() {
    #ifdef TEST
    printf("hello!\n");
    #else
    printf("world!\n");
    #endif
    /*foi!!!*/
	return 0;
}
