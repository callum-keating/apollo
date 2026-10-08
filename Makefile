.PHONY: all run clean

BUILD_DIR 	:= build
OBJ_DIR 	:= $(BUILD_DIR)/objs
EXECUTABLE 	:= $(BUILD_DIR)/apollo

SRCFILES := $(shell find src -name "*.c")
OBJFILES := $(patsubst src/%.c, $(OBJ_DIR)/%.o,$(SRCFILES))

CC := clang
CLFAGS :=

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJFILES)
	$(CC) $(CFLAGS) $^ -o $@


build/objs/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CLFAGS) -c $^ -o $@ 

run: all
	$(EXECUTABLE)

clean:
	rm -rf $(BUILD_DIR)
