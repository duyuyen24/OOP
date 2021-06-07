-include source/app/ex1/Makefile.mk

CXXFLAGS	+= -I./source/app

VPATH += source/app
OBJ += $(OBJ_DIR)/main.o
