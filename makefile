.PHONY: all clean

BANDERAS = -std=c++11 -Wall -g
SALIDA = test_1

all: ejemplo

ejemplo:
	g++ $(BANDERAS) word.cpp archivist.cpp ahorcado.cpp main.cpp  -o $(SALIDA)

clean:
	rm -r *.dSYM $(SALIDA)
