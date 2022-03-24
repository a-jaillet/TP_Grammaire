CC=g++
INC_DIR=./inc
CFLAGS=-W -Wall -I $(INC_DIR)
LDFLAGS=
EXEC=main

SRC_DIR=./src
OBJ_DIR=./obj
BIN_DIR=./bin

SRC=$(wildcard $(SRC_DIR)/*)
OBJ=$(subst $(SRC_DIR),$(OBJ_DIR),$(SRC:.cpp=.o))

all: $(EXEC)

$(EXEC): $(OBJ)
	@mkdir -p $(@D) $(BIN_DIR)
	@$(CC) -o $(BIN_DIR)/$@ $^ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D) $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper
	
clean:
	@rm -rf $(OBJ_DIR)
	
mrproper: clean
	@rm -rf $(BIN_DIR)