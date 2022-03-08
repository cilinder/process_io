#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>

int main(int argc, char** argv) {
    system(argv[1]);
    struct rusage ru;
    getrusage(RUSAGE_CHILDREN, &ru);
    printf("\nblocks in:\t%li\nblocks out:\t%li\nmaxrss:\t\t%li\n",
            ru.ru_inblock, ru.ru_oublock, ru.ru_maxrss / 1000);
}
