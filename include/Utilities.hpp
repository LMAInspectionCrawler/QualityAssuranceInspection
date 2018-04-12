#pragma once

#ifndef __UTILITIES_HPP__
#define __UTILITIES_HPP__

#include <sl_zed/Camera.hpp>
#include <opencv2/opencv.hpp>

using namespace sl;

cv::Mat slMat2cvMat(Mat& input);
void printHelp();

#endif