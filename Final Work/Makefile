CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: temperature_stats

temperature_stats: main.o temp_functions.o
	$(CC) $(CFLAGS) -o temperature_stats main.o temp_functions.o

main.o: main.c temp_functions.h
	$(CC) $(CFLAGS) -c main.c

temp_functions.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

clean:
	rm -f *.o temperature_stats