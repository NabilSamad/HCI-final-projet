#pragma once

#define DRTFACE_VERSION_MAJOR 1
#define DRTFACE_VERSION_MINOR 0
#define DRTFACE_VERSION_PATCH 0

#include <optional>
#include <limits>
#include <vector>
#include <memory>
#include <thread>
#include <math.h>
#include "opencv2/opencv.hpp"

using namespace cv;

#ifdef _WIN32
	using byte	= unsigned __int8;
	using word	= unsigned __int16;
	using dword	= unsigned __int32;
	using qword	= unsigned __int64;
#else
	using byte	= uint8_t;
	using word	= uint16_t;
	using dword	= uint32_t;
	using qword	= uint64_t;
#endif

static const double	Pi	= 3.1415926;			///< Pi number
static const float	Pif	= 3.1415926f;			///< Pi number

template <class T>  T& lvalue_cast(T&& t) { return t; }
#ifdef _WIN32
	#define EmptyMat	Mat()	
	#define DllExport	__declspec(dllexport)
#else
	#define EmptyMat	lvalue_cast(Mat())	
	#define DllExport
#endif
