
CFLAGS = -g -Wall 


TARGET = POWER


OBJS = Power.o main.o 


$(TARGET): $(OBJS)                             # 재료를 넣어준다
	g++ -o $(TARGET) $(OBJS)                   # 실행파일 마드는 코드

Power.o: Power.cpp Power.hpp                 # 재료를 넣어준다
	g++ $(CFLAGS) -c Power.cpp                 # 오브젝트 파일 만드는 코드


main.o: main.cpp Power.hpp                     # 재료를 넣어준다
	g++ $(CFLAGS) -c main.cpp                  # 오브젝트 파일 만드는 코드


.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)                    # 오브젝트 파일과 실행 파일 삭제
