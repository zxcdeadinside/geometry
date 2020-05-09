.PHONY: clean all run_geometry 
FLAGS := -std=c++0x
FLAG := -std=c++11
SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./build
all: $(BIN_DIR)/geometry 

$(BIN_DIR)/geometry:  $(OBJ_DIR)/main.o  $(OBJ_DIR)/input.o  $(OBJ_DIR)/intersection.o
	g++ -Wall -Wextra  $(OBJ_DIR)/main.o  $(OBJ_DIR)/input.o  $(OBJ_DIR)/intersection.o -o $(BIN_DIR)/geometry -lm $(FLAGS)

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	g++ -Wall -Wextra -c  $(SRC_DIR)/main.cpp -o  $(OBJ_DIR)/main.o $(FLAGS)

$(OBJ_DIR)/input.o: $(SRC_DIR)/input.cpp
		g++ -Wall -Wextra -c  $(SRC_DIR)/input.cpp -o  $(OBJ_DIR)/input.o -lm $(FLAGS)

$(OBJ_DIR)/intersection.o: $(SRC_DIR)/intersection.cpp
	g++ -Wall -Wextra -c  $(SRC_DIR)/intersection.cpp -o  $(OBJ_DIR)/intersection.o $(FLAGS)

clean:
	rm $(OBJ_DIR)/*.o	
	rm $(BIN_DIR)/geometry

run_geometry:
	$(BIN_DIR)/geometry
