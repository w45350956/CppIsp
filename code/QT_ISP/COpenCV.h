#pragma once
#include <opencv2/core.hpp>

class COpenCV
{
public:
	COpenCV();
	~COpenCV();


	//QT�ź�
	//QT��

	//���к���
public:
	cv::Mat getGaussianKernel1(int n, double sigma, int ktype);
	//˽�к���
	//���б���
	//˽�б���

	//���������ͱ���
};

