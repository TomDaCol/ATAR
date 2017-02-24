/*
 * aruco_extrinsic.hpp
 *
 *  Created on: Jan 13, 2017
 *      Author: nearlab
 */

#ifndef INCLUDE_EXTRINSICARUCO_HPP_
#define INCLUDE_EXTRINSICARUCO_HPP_

#include <ros/ros.h>
#include <sensor_msgs/Image.h>
#include <opencv2/core.hpp>

#include "utils/BoardDetector.hpp"
#include <image_transport/image_transport.h>


class ArucoExtrinsic {
public:

    ArucoExtrinsic(std::string node_name);

    void CameraImageCallback(const sensor_msgs::ImageConstPtr &msg);

    /**
     * Get the latest image from the input.
     *
     * If no image is available this call will block until an image is received. Otherwise this will
     * simply return #ArucoExtrinsic::Image. In practice the only time where #ArucoExtrinsic::Image might be empty
     * is just after the start of the program before the first frame has arrived or if the camera
     * gets disconnected.
     *
     * @param timeout The maximum amount of time to wait for the image
     * @return A reference to the image.
     */
    cv::Mat& Image(ros::Duration timeout = ros::Duration(1));

private:

    void GetROSParameterValues();

    /**
     * Populate the #ArucoExtrinsic::Camera object from the camera parameters file
     *
     * The file should be an xml file containing a `camera_matrix` tag and a
     * `distortion_coefficients` tag. This file can be generated by the `opencv_cam_calib` tool that
     * should have been built alongside this tool.
     *
     * @param file_path The path to the camera parameters file.
     */
    void ReadCameraParameters(std::string file_path);

public:

    //in-class initialization
    ros::NodeHandle n;
    ArucoBoard Board;
    double ros_freq = 0.0;
    bool show_image = false;
    cv::Mat image_msg;
    CameraDistortion Camera;
    int camId_param = 0;
    image_transport::Subscriber sub;
    image_transport::ImageTransport *it;
    ros::Subscriber camera_imgae_subscriber;
    ros::Publisher pub_board_to_cam_pose;

};





#endif /* INCLUDE_EXTRINSICARUCO_HPP_ */
