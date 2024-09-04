.PHONY: all clean

BANDERAS = -std=c++11 -Wall -g
SALIDA = separador

all: ejemplo

ejemplo:
	g++ $(BANDERAS) separadorDeLetras.cpp main.cpp -o $(SALIDA)

clean:
	rm -r *.dSYM $(SALIDA)