CXX = g++
CXXFLAGS = -std=c++0x -Wall -g

TARGET = main
OBJS = libraryFunctions.o recursiveFunctions.o main.o
SRCS = libraryFunctions.cpp recursiveFunctions.cpp main.cpp
HEADERS = libraryFunctions.hpp recursiveFunctions.hpp

${TARGET}: ${OBJS} ${HEADERS}
	${CXX} ${SRCS} -o ${TARGET}

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm ${TARGET} ${OBJS}