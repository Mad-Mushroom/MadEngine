COMPILER = g++
NAME = Mad2DEngine
OUTPUT = $(BIN-DIR)/$(NAME)
SRC-DIR = ./src
BIN-DIR = ./bin
FILES = $(SRC-DIR)/*.cpp
COMPILER-FLAGS = -Wall -std=c++11
LINKER-FLAGS = -lraylib

build:
	$(COMPILER) $(COMPILER-FLAGS) -o $(OUTPUT) $(FILES) $(LINKER-FLAGS)

run:
	./$(OUTPUT)

build.run:
	$(COMPILER) $(COMPILER-FLAGS) -o $(OUTPUT) $(FILES) $(LINKER-FLAGS)
	./$(OUTPUT)

clean:
	rm $(OUTPUT)

build.run.clean:
	$(COMPILER) $(COMPILER-FLAGS) -o $(OUTPUT) $(FILES) $(LINKER-FLAGS)
	./$(OUTPUT)
	rm $(OUTPUT)
