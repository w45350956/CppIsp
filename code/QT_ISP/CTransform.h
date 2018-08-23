#pragma once
#include <opencv2/core.hpp>

typedef unsigned char BYTE;

class CTransform
{
public:
	CTransform();
	~CTransform();

	//���к���
	BYTE* Mat2Array(cv::Mat matImage_);
	cv::Mat Array2Mat(BYTE* pbyImageRgb_, int nHeight_, int nWeight_, int nChannels_);
	//˽�к���
	//���б���
	//˽�б���
	cv::Mat c_matImage;
	BYTE* c_pbyImageArray;

	//���������ͱ���
};

