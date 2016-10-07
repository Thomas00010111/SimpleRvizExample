#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include "ros/ros.h"
#include "visualization_msgs/Marker.h"
#include "tf/transform_broadcaster.h"


class MainApplication
{
private:
    uint32_t shape;
    ros::Publisher marker_pub;
public:
    MainApplication(int argc, char *argv[]);
    int sendMarker();
    void sendTransform();
};

#endif // MAINAPPLICATION_H
