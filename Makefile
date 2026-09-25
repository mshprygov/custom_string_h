CC = gcc
CFLAGS = -Wall -Wextra -Wconversion -Werror
COMMON = string.c globals.c

binstan: $(COMMON) main_standard.c
	$(CC) $(CFLAGS) $(COMMON) main_standard.c -o binstan

bincust: $(COMMON) main_custom.c
	$(CC) $(CFLAGS) $(COMMON) main_custom.c -o bincust

clean:
	rm -f bincust binstan
