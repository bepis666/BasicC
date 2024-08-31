#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

// Функция загрузки данных из CSV-файла
int load_data(const char *filename, TemperatureRecord records[], int max_records) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return -1;
    }

    char line[256];
    int record_count = 0;
    int line_number = 0;

    while (fgets(line, sizeof(line), file)) {
        line_number++;
        
        TemperatureRecord record;
        if (sscanf(line, "%d;%d;%d;%d;%d;%d", &record.year, &record.month, &record.day, &record.hour, &record.minute, &record.temperature) != 6) {
            fprintf(stderr, "Error in line %d: %s", line_number, line);
            continue;
        }

        if (record_count < max_records) {
            records[record_count++] = record;
        } else {
            break; // Достигнут лимит
        }
    }

    fclose(file);
    return record_count;
}

// Функция расчета статистики за месяц
void calculate_monthly_statistics(TemperatureRecord records[], int record_count, int month) {
    int sum = 0, count = 0;
    int min_temp = 100, max_temp = -100;

    for (int i = 0; i < record_count; i++) {
        if (records[i].month == month) {
            int temp = records[i].temperature;
            sum += temp;
            count++;

            if (temp < min_temp) min_temp = temp;
            if (temp > max_temp) max_temp = temp;
        }
    }

    if (count > 0) {
        printf("Month: %d\n", month);
        printf("Average Temperature: %.2f\n", (float)sum / count);
        printf("Min Temperature: %d\n", min_temp);
        printf("Max Temperature: %d\n", max_temp);
    } else {
        printf("No data for month %d\n", month);
    }
}

// Функция расчета статистики за год
void calculate_yearly_statistics(TemperatureRecord records[], int record_count) {
    int sum = 0, count = 0;
    int min_temp = 100, max_temp = -100;

    for (int i = 0; i < record_count; i++) {
        int temp = records[i].temperature;
        sum += temp;
        count++;

        if (temp < min_temp) min_temp = temp;
        if (temp > max_temp) max_temp = temp;
    }

    if (count > 0) {
        printf("Yearly Statistics:\n");
        printf("Average Temperature: %.2f\n", (float)sum / count);
        printf("Min Temperature: %d\n", min_temp);
        printf("Max Temperature: %d\n", max_temp);
    }
}

// Функция вывода помощи
void print_help() {
    printf("Temperature Statistics Application\n");
    printf("Usage:\n");
    printf("  -h                    : Show this help message.\n");
    printf("  -f <filename.csv>     : Specify the input CSV file.\n");
    printf("  -m <month>            : Show statistics for the specified month.\n");
}