
CFLAGS = -g -Wall 


TARGET = COMPLEX 


OBJS = complex.o main.o 


$(TARGET): $(OBJS)                             # 재료를 넣어준다
	g++ $(CFLAGS) -o $(TARGET) $(OBJS)         # 실행파일 마드는 코드

complex.o: complex.cpp complex.hpp             # 재료를 넣어준다
	g++ $(CFLAGS) -c complex.cpp               # 오브젝트 파일 만드는 코드


main.o: main.cpp complex.hpp                   # 재료를 넣어준다
	g++ $(CFLAGS) -c main.cpp                  # 오브젝트 파일 만드는 코드


.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)                    # 오브젝트 파일과 실행 파일 삭제
