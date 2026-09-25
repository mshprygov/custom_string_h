CC = gcc
CFLAGS = -Wall -Wextra -Wconversion -Werror
COMMON = main.c globals.c functions.c
CUSTOM = my_string.c my_string_names.h

binstan: $(COMMON)
	$(CC) $(CFLAGS) $(COMMON) -o binstan

bincust: $(COMMON) $(CUSTOM)
	$(CC) $(CFLAGS) -DCUSTOM_LIB $(COMMON) $(CUSTOM) -o bincust

clean:
	rm -f bincust binstan
