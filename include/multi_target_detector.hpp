//
// Created by root on 1/23/17.
//

#ifndef SUPERVISORY_FRAME_MULTI_TARGET_DETECTOR_HPP
#define SUPERVISORY_FRAME_MULTI_TARGET_DETECTOR_HPP
#include "target.hpp"
#include <vector>
using namespace std;

/**
 * @brief A detector that can detect targets of multiple classes.
 */
class MultiTargetDetector{
public:
    MultiTargetDetector(const vector<Target::TARGET_CLASS> &itc):idToClass(itc) {}
    /**
     * @brief Detect the targets from the image.
     * @param image The image.
     * @return A vector of targets.
     */
    virtual vector<Target> detectTargets(const Mat& image) = 0;
protected:
    /**
     * @brief Map id to target class.
     */
    vector<Target::TARGET_CLASS> idToClass;
};

#endif //SUPERVISORY_FRAME_MULTI_TARGET_DETECTOR_HPP
