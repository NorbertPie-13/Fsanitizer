.PHONY: all clean debug valgrind time
CFLAGS := -std=c99 -Wall -Wextra -Wpedantic -Waggregate-return -Wwrite-strings -Wvla -Wfloat-equal -lpthread

CC := gcc
PROJ_NAME := example
TST_DIR := test
TST_SERVER := test_server


SRC := src

SRC := $(wildcard src/*.c)
HDR:= $(wildcard include/*.h)

$(PROJ_NAME): CFLAGS += -D _POSIX_C_SOURCE=200809L	
$(PROJ_NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $(PROJ_NAME)


profile: CFLAGS += -pg
profile: LDFLAGS += -pg
profile: all

debug: CFLAGS += -g3 -fsanitize=address
debug: CFLAGS += -D _POSIX_C_SOURCE=200809L
debug: $(SRC)
	$(CC) $(CFLAGS) $^ -o $(PROJ_NAME)

clean:
	rm -f $(wildcard $(SRC)/*.c~) && rm -f $(wildcard $(SRC)/*.h~)
	rm -f $(PROJ_NAME)

valgrind: $(EXE)
	valgrind --leak-check=full --show-leak-kinds=all -s ./$(PROJ_NAME)
	
%.o: %.c $(SRC)
	$(CC) $(CFLAGS) -c $< -o $(PROJ_NAME)

time: 
	echo "Can you Teach me how to Makefile?"