CC=g++
INC_DIR=./inc
CFLAGS=-W -I $(INC_DIR)
#LDFLAGS= -g -O0 # memcheck valgrind
LDFLAGS=
EXEC=exe

SRC_DIR=./src
OBJ_DIR=./obj

SRC=$(wildcard $(SRC_DIR)/*)
OBJ=$(subst $(SRC_DIR),$(OBJ_DIR),$(SRC:.cpp=.o))

all: $(EXEC)

$(EXEC): $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D) $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper
	
clean:
	@rm -rf $(OBJ_DIR)
	
mrproper: clean
	@rm -f $(EXEC)