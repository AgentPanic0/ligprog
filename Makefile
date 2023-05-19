#Falta fazer

CC = g++
LD = g++

CFLAGS = -Wall
LFLAGS = -Wall

TRAB1OBJS = main.o liga.o time.o 

TRABALHOS = ./execTrab1

.cpp.o:
	$(CC) $(CFLAGS) -c $<

all: $(TRABALHOS)

trab1: $(TRAB1OBJS)
	$(LD) $(LFLAGS) -o $@ $(TRAB1OBJS) -lm

clean:
	rm -f *.o $(TRABALHOS)
		
#*.exe
#o $(TRABALHOS)
