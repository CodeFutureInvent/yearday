/*
Author: Victor deMatos (victorkolis)
Date: May 27, 2024

Purpose:
This C program (year day, yday short) is designed to replicate the functionality of the `date +%j` command in a Bash script. The `date +%j` command is used to retrieve the day of the year in the form of an integer, where January 1st is represented as 1, January 2nd as 2, and so on.

Functionality:
The program retrieves the current date and extracts the day of the year using C's time.h library. It then adds 1 to account for zero-based indexing of days in C, and prints the day of the year to the console.

Example:
If today's date is May 27, 2024, the program will output '148' since May 27th is the 148th day of the year.

Usage:
1. Save the program as 'yday.c'.
2. Compile the program using a C compiler: `gcc day_of_year.c -o day_of_year`.
3. Run the compiled executable: `./yday`.
*/

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
