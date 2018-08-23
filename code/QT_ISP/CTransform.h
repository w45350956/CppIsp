#pragma once
#include <opencv2/core.hpp>

typedef unsigned char BYTE;

class CTransform
{
public:
	CTransform();
	~CTransform();

	//公有函数
	BYTE* Mat2Array(cv::Mat matImage_);
	cv::Mat Array2Mat(BYTE* pbyImageRgb_, int nHeight_, int nWeight_, int nChannels_);
	//私有函数
	//公有变量
	//私有变量
	cv::Mat c_matImage;
	BYTE* c_pbyImageArray;

	//保护函数和变量
};

