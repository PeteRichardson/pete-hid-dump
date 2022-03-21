#include <stdio.h>
#include <IOKit/hid/IOHIDManager.h>

int main(int argc, const char * argv[]) {
    IOHIDManagerRef mgr;
    mgr = IOHIDManagerCreate(kCFAllocatorDefault, kIOHIDManagerOptionNone);
    IOHIDManagerSetDeviceMatching(mgr, NULL);
    IOHIDManagerOpen(mgr, kIOHIDOptionsTypeNone);
    
    CFSetRef device_set = IOHIDManagerCopyDevices(mgr);
    CFIndex num_devices = CFSetGetCount(device_set);
    printf("There are %ld devices attached via USB\n",(long) num_devices);
    return 0;
}
