#pragma once
#include <opencv2/core.hpp>

class COpenCV
{
public:
	COpenCV();
	~COpenCV();


	//QT信号
	//QT槽

	//公有函数
public:
	cv::Mat getGaussianKernel1(int n, double sigma, int ktype);
	//私有函数
	//公有变量
	//私有变量

	//保护函数和变量
};

