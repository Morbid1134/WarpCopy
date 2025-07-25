# Makefile for WarpCopy
# Build targets: debug, release

CC = gcc
CFLAGS = -Wall -Wextra -I./src -I./include
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = WarpCopy.exe

all: release

debug: CFLAGS += -g -O0
release: CFLAGS += -O2

debug: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

release: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	del /Q *.o $(TARGET) 2>NUL || true

.PHONY: all debug release clean
