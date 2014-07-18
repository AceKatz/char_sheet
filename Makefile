INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./obj
LIB_DIR = ./lib

CC=gcc
CLFAGS=-I$(INC_DIR) -lm

#LIBS

SRC = $(wildcard $(SRC_DIR)/*.c)
INC = $(wildcard $(INC_DIR)/*.h)
OBJ = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(SRC) $(OBJ)

$(OBJ_DIR)/%.o: %.c $(INC_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)


