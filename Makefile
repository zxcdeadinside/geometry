CXX := g++
MKDIR := mkdir -p
CXX_FLAGS := -std=c++11 -Wall -Wextra -c
LD_FLAGS :=
SRC_DIR := src
TEST_SRC_DIR := test
BUILD_DIR := build
BIN_DIR := bin
APP_NAME := geometry

all: dirs build

test: dirs build_tests

build: $(BUILD_DIR)/intersection.o $(BUILD_DIR)/input.o $(BUILD_DIR)/main.o
	$(CXX) $(LD_FLAGS) $^ -o $(BUILD_DIR)/$(BIN_DIR)/$(APP_NAME)

build_tests: $(BUILD_DIR)/intersection.o $(BUILD_DIR)/input.o $(BUILD_DIR)/tmain.o
	$(CXX) $(LD_FLAGS) $^ -o $(BUILD_DIR)/$(BIN_DIR)/$(APP_NAME)_TEST

$(BUILD_DIR)/intersection.o: $(SRC_DIR)/intersection.cpp
	$(CXX) $(CXX_FLAGS) $< -o $@

$(BUILD_DIR)/input.o: $(SRC_DIR)/input.cpp
	$(CXX) $(CXX_FLAGS)	$< -o $@

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CXX) $(CXX_FLAGS)	$< -o $@

$(BUILD_DIR)/tmain.o: $(TEST_SRC_DIR)/tmain.cpp
	$(CXX) $(CXX_FLAGS) $< -o $@

dirs:
	$(MKDIR) $(BUILD_DIR)/$(BIN_DIR)

clean:
	@rm -r $(BUILD_DIR)

.PHONY: all build tests dirs clean