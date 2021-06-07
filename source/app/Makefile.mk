-include source/app/test/Makefile.mk

CXXFLAGS	+= -I./source/app

VPATH += source/app

OBJ += $(OBJ_DIR)/main.o
OBJ += $(OBJ_DIR)/rectangle.o
OBJ += $(OBJ_DIR)/circle.o
