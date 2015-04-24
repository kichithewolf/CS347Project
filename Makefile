CC = gcc
CXX = g++
RM = rm -f
CPPFLAGS = -g $(shell root-config --cflags)
LDFLAGS = -g $(shell root-config --ldflags)
LDLIBS = $(shell root-config --libs)

SRCS = CharacterCreation.cpp MakeChoices.cpp SaveLoad.cpp HandleInput.cpp main.cpp
OBJS = $(subst .cc,.o,$(SRCS))

all: game

game: $(OBJS)
	$(CXX) $(LDFLAGS) -o game $(OBJS) $(LDLIBS) 

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) tool
