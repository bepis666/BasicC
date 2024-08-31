#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureRecord;

// Прототипы функций
int load_data(const char *filename, TemperatureRecord records[], int max_records);
void calculate_monthly_statistics(TemperatureRecord records[], int record_count, int month);
void calculate_yearly_statistics(TemperatureRecord records[], int record_count);
void print_help();

#endif