//���� ���� : ���� ������ ���� ���ϴ�, �ҼӵǾ� ���� �ʴ�.
//�ٸ� Ŭ������ ���� �� �ִ°�? : �뵵 �ܿ� ����
//����� ���縦 Ŭ������ ����? No
//�ܹ���

#pragma once
#include "Worker.h"
#include "Timer.h"

void Worker::doSomething()
{
	Timer timer;//start timer
	timer.elapsed();//end timer and report relapsed time.
}

//Work Ŭ������ �ڽ��� ��� �Լ� doSOmething����
//Time Ŭ������ ��� �Լ� elapsed�� ������ ���.
//���� ���������� ������ ��� �Լ��� �ʿ��� �� �����ٰ� ���� ���� ��������
//timer.elapsed()->Time Ÿ���� ��ü timer�� �� �Լ� ������ �� ���� �Ͻ������� ���� �����
//work.h�� time Ŭ������ ���� ���� �ȴ�. Work cpp �� �˰� ������ ��.