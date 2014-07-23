INC_DIR = include
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
EXEC = character
CC=gcc
CLFAGS=-I$(INC_DIR) -lm
LDFLAGS =
#LIBS

SRC = $(wildcard $(SRC_DIR)/*.c)
INC = $(wildcard $(INC_DIR)/*.h)
#OBJ = $(SRC:.c=.o) #
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
#$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(SRC) $(OBJ)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

$(OBJ): $(SRC)  $(INC_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

#.o = $(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ_DIR)/*.o *~ core $(INC_DIR)/*~

.PHONY: clean
