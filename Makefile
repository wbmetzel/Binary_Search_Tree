OBJS = driver.cpp Menu.cpp BSTree.cpp
CC = g++
#COMPILER_FLAGS = -w -Wl,-subsystem,windows
OBJ_NAME = demo

all : $(OBJS)
	$(CC) $(OBJS) -o $(OBJ_NAME)
