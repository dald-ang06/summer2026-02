// 1. 본인이름학번의 네임스페이스
// -본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 1234567일 경우 KimPro1234567
// using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.
// -using 지시자 예: { using namespace std; cout << "Enter your id: "; }
// -네임스페이스 지정자 예: std::cout << "Enter your id: ";

// 2. timeOfDay.h: timeOfDay 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: int형 hour, int형 minute
// private 멤버함수 정의
// -testHour: hour는 0~23가 아니면 프로그램 종료
// -testMinute: minute은 0~59가 아니면 프로그램 종료
// public 멤버함수 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정, test함수들 호출
// -input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출
// -set 접근함수들: 멤버변수 값 설정 및 test함수 호출
// const 멤버함수 정의
// -print: 표준스트림출력으로 멤버변수들 출력, 1자리수면 앞에 0을 붙여줌, hour:minute형식
// -get 접근함수들: 멤버변수 값 리턴

// 3. alarm.h: alarm 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: timeOfDay형 wakeTime, bool형 inActive
// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정
// -print: 표준스트림출력으로 멤버변수들 출력, hour:minute alarm is on/off 형식
// -wakeTime의 접근함수를 참조형식으로 구현

// 4. main.cpp: 테스트
// 1의 본인이름학번의 네임스페이스 안에 비멤버함수 compareTimeOfDay 정의: 매개변수는 const timeOfDay 참조형 2개, 매개변수 멤버들이 모두 같은지를 비교
// -main
// alarm 클래스형 객체1 선언, print함수 호출
// alarm 클래스형 객체2 초기값을 넣어서 선언, print함수 호출
// 비멤버함수 compareTimeOfDay를 호출하여 그 리턴값이 true면 same, false면 different를 콘솔창으로 출력
