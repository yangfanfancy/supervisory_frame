//
// Created by dujiajun on 1/23/17.
//

#ifndef SUPERVISORY_FRAME_TARGET_HPP
#define SUPERVISORY_FRAME_TARGET_HPP
#include <opencv/cv.hpp>
using namespace cv;
/**
 *
 */

class Target {
public:
	enum TARGET_CLASS {
		PEDESTRIAN,
		CAR,
		CYCLIST,
		UNKNOWN
	};
private:
    Rect region;
    Mat image;
	enum TARGET_CLASS target_class;
public:
    Target(TARGET_CLASS t=UNKNOWN);
    TARGET_CLASS getClass() const;
    void setClass(TARGET_CLASS t);
    Rect getRegion() const;
    void setRegion(Rect r);
    Mat getImage() const;
    void setImage(Mat i);
};

#endif //SUPERVISORY_FRAME_TARGET_HPP
