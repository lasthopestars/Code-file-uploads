//의존 관계 : 연결 강도가 가장 약하다, 소속되어 있지 않다.
//다른 클래스에 속할 수 있는가? : 용도 외엔 무관
//멤버의 존재를 클래스가 관리? No
//단방향

#pragma once
#include "Worker.h"
#include "Timer.h"

void Worker::doSomething()
{
	Timer timer;//start timer
	timer.elapsed();//end timer and report relapsed time.
}

//Work 클래스는 자신의 멤버 함수 doSOmething에서
//Time 클래스의 멤버 함수 elapsed를 가져다 사용.
//서로 묶여있지는 않지만 멤버 함수가 필요할 때 가져다가 쓰는 것이 의존관계
//timer.elapsed()->Time 타입의 객체 timer는 이 함수 가져와 쓸 때만 일시적으로 쓰고 사라짐
//work.h는 time 클래스에 대해 몰라도 된다. Work cpp 만 알고 있으면 됨.