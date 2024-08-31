#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

#define MAX_RECORDS 1000000

int main(int argc, char *argv[]) {
    if (argc < 2) {
        print_help();
        return 0;
    }

    char *filename = NULL;
    int month = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            print_help();
            return 0;
        } else if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            filename = argv[++i];
        } else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            month = atoi(argv[++i]);
        } else {
            print_help();
            return 1;
        }
    }

    if (!filename) {
        fprintf(stderr, "Error: No filename provided.\n");
        return 1;
    }

    TemperatureRecord *records = (TemperatureRecord *)malloc(MAX_RECORDS * sizeof(TemperatureRecord));
    if (records == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Завершение программы при ошибке выделения памяти
    }
    int record_count = load_data(filename, records, MAX_RECORDS);

    if (record_count < 0) {
        fprintf(stderr, "Error: Failed to load data.\n");
        return 1;
    }

    if (month > 0) {
        calculate_monthly_statistics(records, record_count, month);
    } else {
        for (int i = 1; i <= 12; i++) {
            calculate_monthly_statistics(records, record_count, i);
        }
        calculate_yearly_statistics(records, record_count);
    }

    free(records);
    return 0;
}