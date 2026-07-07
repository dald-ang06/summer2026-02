// 3. alarm.h: alarm 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: timeOfDay형 wakeTime, bool형 inActive
// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정
// -print: 표준스트림출력으로 멤버변수들 출력, hour:minute alarm is on/off 형식
// -wakeTime의 접근함수를 참조형식으로 구현
#pragma once
#include "timeOfDay.h"
#include <string>

namespace leedayeon2566038{
    class alarm{
        private:
        std::string name; //alram이라는 클래스에 객체가 name 
        timeOfDay wakeTime;
        bool inActive;

        public:
        alarm(const std::string& n="no name yet", timeOfDay t=timeOfDay{1,1},bool a=false)
        :name{n},wakeTime{t},inActive{a}{}
        void print() const {
            std::cout<<name<<" ";
            wakeTime.print();//지금 여기서 시간이 출력됨
            std::cout<<" is "<<((inActive)?"on":"off")<<"\n";
        }
        void input(){
            std::cout<<"Enter alarm name: ";
            std::getline(std::cin>>std::ws, name);//알람이름에 띄어쓰기가 되어있을 수도 있으니까
            wakeTime.input(); //시간을 입력받는 코드
            std::cout<<"Enter 1 or 0(on/off): ";
            std::cin>>inActive;
        }
        friend std::istream&operator>>(std::istream& is, alarm& a){
            std::cout<<"Enter alarm name: ";
            std::getline(is>>std::ws, a.name);//알람이름에 띄어쓰기가 되어있을 수도 있으니까
            is>>a.wakeTime; //시간을 입력받는 코드
            std::cout<<"Enter 1 or 0(on/off): ";
            is>>a.inActive;
            return is;
        }

        friend std::ostream& operator<<(std::ostream& os, const alarm& a){
            os<<a.name<<" ";
            os<<a.wakeTime<<" ";
            os<<" alarm is "<<((a.inActive)? "on":"off")<<'\n';
            return os;
        }
        bool getActive() const {return inActive;}
        const std::string&getName() const{return name;}
        void setName(const std::string& n){name=n;}
        void setWakeTime(const timeOfDay& t){wakeTime=t;}
        void setActive(bool b){inActive=b;}


        timeOfDay& getWakeTime(){return wakeTime;}

    
    };
};

// friend std::ostream& operator<<(std::ostream& os, const Alarm& alarm);
// friend std::istream& operator>>(std::istream& is, Alarm& alarm);