#pragma once
#include <iostream>

namespace leedayeon2566038{
    class timeOfDay{
        private:
        int hour{};
        int minute{};
        void testHour(){
            if((hour<0)||(hour>23)){
                std::cout<<"Illegal hour value!\n";
                std::exit(1);
            }
        }
        void testMinute(){
            if((minute<0)||(minute>59)){
                std::cout<<"Illegal minute value!\n";
                std::exit(1);
            }
        }

        public:
        timeOfDay(int h=0,int m=0)
        :hour{h},minute{m}{
            testHour();
            testMinute();
        }
        void input(){
            std::cout<<"Enter hour(0~23) ";
            std::cin>>hour; testHour();
            std::cout<<"Enter minute(0~59) ";
            std::cin>>minute; testMinute();
        }
        void print() const{
            if(hour<10){
                std::cout<<"0";
            }
            std::cout<<hour<<":"
            if(minute<10){
                std::cout<<"0";
            }
            std::cout<<minute;

        }
        void setHour(int h){
            hour=h; testHour();
        }
        void setMinute(int m){
            minute=m; testMinute();
        }
        int getHour() const {return hour};
        int getMinute() const{return minute};

    };
}