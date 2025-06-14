SRC = src/starfetch.cpp
GEN_SRC = src/_gen_constellations_list.hpp
GEN = res/res_gen.sh
CC = g++
CFLAGS = -std=c++17 -g
BIN_DIR = ${HOME}/starfetch/bin

all: starfetch

starfetch: ${SRC}
	sh ${GEN} > ${GEN_SRC}
	${CC} ${CFLAGS} ${SRC} -o starfetch

install: starfetch
	chmod 711 starfetch
	cp -rf starfetch ${BIN_DIR}/starfetch

clean:
	rm -rf starfetch
	rm -rf ${GEN_SRC}

uninstall:
	rm -rf ${BIN_DIR}/starfetch
