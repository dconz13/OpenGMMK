#include <stdio.h>
#include "usbHandler.h"

int main() {
    printf("testing\n");
    usbHandler* usb = new usbHandler();
    delete usb;
    return 0;
}