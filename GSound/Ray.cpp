#include "Ray.h"


Ray::Ray(void)
{
}

Ray::Ray(Position start,int angle,int depth,int weigtht/*,int length*/)
{
	Start=start;
	Angle=angle;
	Depth=depth;
	Weigtht=weigtht;
	//Length=length;
}

bool Ray::Detect_Object()
{
	//������ �� ����� ���� ������ �������� ���� ���� ����� tan(Ray.Angle)
	//�� ���� ������� "���������� " �� ������
}

Position Ray::Detect_Object(int i)
{
	// ��� ������ ��� ���� ���� ���� ������� ����������
}

Ray Ray::RelfetiveRay(Position Newstart)
{
	//����� �������� = ����� ������
	return Ray(Newstart,Angle,Depth+1,Weigtht-=10);
}


Ray::~Ray(void)
{
}
