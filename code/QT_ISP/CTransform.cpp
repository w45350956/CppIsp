#include "CTransform.h"



CTransform::CTransform()
{
	c_pbyImageArray = nullptr;
}


CTransform::~CTransform()
{
	// 防止内存泄露
	if (c_pbyImageArray != nullptr)
	{
		delete[] c_pbyImageArray;
		c_pbyImageArray = nullptr;
	}
}


BYTE* CTransform::Mat2Array(cv::Mat matImage_)
{
	if (matImage_.empty())
	{
		return nullptr;
	}

	// 防止内存泄露
	if (c_pbyImageArray != nullptr)
	{
		delete[] c_pbyImageArray;
		c_pbyImageArray = nullptr;
	}
	// 没有填充像素，把行设为1，列设为H*W，从而去除外层的循环	
	int nr = matImage_.rows;
	int nc = matImage_.cols * matImage_.channels();
	if (matImage_.isContinuous())
	{		
		nc = nr * nc;
		nr = 1;
	}
	c_pbyImageArray = new BYTE[nr * nc];

	BYTE* pbyImgeRgb = c_pbyImageArray;
	for (int i = 0; i < nr; i++)
	{
		BYTE* data = matImage_.ptr<uchar>(i);

		for (int j = 0; j < nc; j++)
		{
			*pbyImgeRgb = data[j];
			pbyImgeRgb++;
		}
	}

	return c_pbyImageArray;
}


cv::Mat CTransform::Array2Mat(BYTE* pbyImageArray_, int nHeight_, int nWeight_, int nChannels_)
{
	if (pbyImageArray_ == nullptr)
	{
		// Debug
		/*return -1;*/
	}

	if (!c_matImage.empty())
	{
		c_matImage.release();
	}
	c_matImage = cv::Mat(nHeight_, nWeight_, CV_8UC3);

	int nr = nHeight_;
	int nc = nWeight_ * nChannels_;

	BYTE* pbyImgeRgb = pbyImageArray_;
	for (int i = 0; i < nr; i++)
	{
		BYTE* data = c_matImage.ptr<uchar>(i);

		for (int j = 0; j < nc; j++)
		{
			data[j] = *pbyImgeRgb;
			pbyImgeRgb++;
		}
	}

	return c_matImage;
}
