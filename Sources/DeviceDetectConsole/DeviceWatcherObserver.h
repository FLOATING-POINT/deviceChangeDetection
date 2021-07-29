#ifndef _TEST_DEVICE_WATCHER_OBSERVER_H_
#define _TEST_DEVICE_WATCHER_OBSERVER_H_

#include "IDeviceWatcherObserver.h"
//#include "ofMain.h"

class DeviceWatcherObserver : public DeviceDetectLibrary::IDeviceWatcherObserver
{
public:

    DeviceWatcherObserver();
    ~DeviceWatcherObserver();

	//ofEvent<DeviceDetectLibrary::DeviceInfo> deviceEvt;


    void AppearedDevice(const DeviceDetectLibrary::DeviceInfo& deviceInfo);
    void DisappearedDevice(const DeviceDetectLibrary::DeviceInfo& deviceInfo);

private:

    DeviceDetectLibrary::Devices devices_;

};

#endif // _TEST_DEVICE_WATCHER_OBSERVER_H_