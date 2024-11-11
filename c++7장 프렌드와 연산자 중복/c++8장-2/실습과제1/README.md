#### C++ 8장-2 실습문제 1
#### 예제 8-3에서 SmartTV 객체 htv가 생성될 때 자동으로 호출되는 생성자를 순서대로 자세히 설명하시오.  htv 생성시 지정된 인수가 각 생성자에 어떻게 전달되는지도 자세히 설명하시오.

1. TV클래스는 클래스 생성자가 호출
- SmartTV 클래스에서 생성자는 wideTV(size, true)를 호출하고, 이는 wideTV 클래스 생성자를 호출하여, 이는 다시 TV(size) 생성자를 호출하여 size 값을 전달합니다.
2. wideTV클래스 생성자 호출
- SmartTV 클래스에서 'wideTV(size, true)'를 호출하면 wideTV 생성자가 호출되어 'videoIn' 변수에 인수가 전달됩니다.
3. smartTV클래스 호출
- 마지막으로 호출되는 SmartTV 클래스에서 생성자는 해당 인수를 'ipAdder' 변수에 전달합니다.
