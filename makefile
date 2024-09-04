.PHONY: all clean

BANDERAS = -std=c++11 -Wall -g
SALIDA = game

all: ejemplo

ejemplo:
	g++ $(BANDERAS) ahorcado.cpp main.cpp  -o $(SALIDA)

clean:
	rm -r *.dSYM $(SALIDA)
