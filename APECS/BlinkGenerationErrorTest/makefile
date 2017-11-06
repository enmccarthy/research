CC=clang++
CFLAGS= -std=c++11 -Wall -Wextra -g
DEPS = BlnkPeakSegAvg.cpp main.cpp
OBJS = main.o BlnkPeakSegAvg.o

main : $(OBJS)
	$(CC) $(CFLAGS) main.o BlnkPeakSegAvg.o -o main

main.o : main.cpp BlnkPeakSegAvg.h
	$(CC) $(CFLAGS) -c main.cpp

BlnkPeakSegAvg.o : BlnkPeakSegAvg.h BlnkPeakSegAvg.cpp
	$(CC) $(CFLAGS) -c BlnkPeakSegAvg.cpp
clean:
	rm -f *.o *~ main
