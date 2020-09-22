#include <iostream>
#include <string>

// OpenCV libraries
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

int main()
{
	std::string img_path = "lenna.jpg";
	cv::Mat imageLennaGrayScale = cv::imread(img_path, cv::IMREAD_GRAYSCALE);
	cv::Mat imageLennaColor = cv::imread(img_path, cv::IMREAD_COLOR);

	if (imageLennaGrayScale.empty())
	{
		std::cout << "Couldn't be readed Lenna image" << std::endl;
		return -1;
	}
	// Write grayscale image 
	cv::imwrite("lenna_gray.png", imageLennaGrayScale);
	cv::imwrite("lenna_color.png", imageLennaColor);


	// Show the image at grayscale 
	cv::imshow("GRAYSCALE LENA IMAGE", imageLennaGrayScale);
	// Show the image at RGB Color Space
	cv::imshow("COLOR LENA IMAGE", imageLennaColor);
	
	//cv::Mat imageLennaRGB;
	//cv::cvtColor(imageLennaColor, imageLennaRGB, cv::COLOR_BGR2RGB);
	//
	//// Show the image at RGB Color Space
	//cv::imshow("COLOR LENA IMAGE", imageLennaRGB);
	
	cv::waitKey();
	return 0;
}

