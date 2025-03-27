#My Name: Jordan Sowell
#My Class: CPSC 1020
#Date: 
#Time: 
#Description: Make a file

COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out



all: $(PROGRAM)
	

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Card.cpp Deck.cpp Hand.cpp
	$(COMPILER) $(OPTIONS) main.cpp Card.cpp Deck.cpp Hand.cpp -o $(PROGRAM)

clean:
	rm *.out