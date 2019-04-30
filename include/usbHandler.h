#ifndef OPENGMMK_USBHANDLER_H
#define OPENGMMK_USBHANDLER_H
#endif //OPENGMMK_USBHANDLER_H

class usbHandler{
    public:
        usbHandler();
        ~usbHandler();
        bool sendCommand(int);
    private:
        bool connect();
        bool initCommand();
        bool endCommand();
};