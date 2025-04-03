#My Name: Jordan Sowell
#My Class: CPSC 1020
#Date: 4/5/2025
#Time: 1 minute
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