INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./obj
LIB_DIR = ./lib
EXEC = character
CC=gcc
CLFAGS=-I$(INC_DIR) -lm
LDFLAGS =
#LIBS

SRC = $(wildcard $(SRC_DIR)/*.c)
INC = $(wildcard $(INC_DIR)/*.h)
OBJ = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(SRC) $(OBJ)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

$(OBJ_DIR)/%.o: %.c $(INC_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)


