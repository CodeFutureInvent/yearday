#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    
    time_t now = time(NULL);
    struct tm *today = localtime(&now);
    int day_of_year = today->tm_yday +1;
    
    printf("Day of the year: %d\n", day_of_year);
    
    return EXIT_SUCCESS;
}
