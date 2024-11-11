CX = g++
CFLAGS = -g -Wall 


TARGET = SHAPE 


OBJS = Shape.o main.o 


$(TARGET): $(OBJS)                             # 재료를 넣어준다
	g++ -o $(TARGET) $(OBJS)               # 실행파일 마드는 코드

Shape.o: Shape.cpp Shape.hpp             # 재료를 넣어준다
	g++ $(CFLAGS) -c Shape.cpp           # 오브젝트 파일 만드는 코드


main.o: main.cpp Shape.hpp                   # 재료를 넣어준다
	g++ $(CFLAGS) -c main.cpp              # 오브젝트 파일 만드는 코드


.PHONY: clean
clean:
	rm $(OBJS) $(TARGET)                # 오브젝트 파일과 실행 파일 삭제