#include "commands.h"
#include "usbHandler.h"

usbHandler::usbHandler(){
    // init the usb handler object.
}

usbHandler::~usbHandler(){
    // delete the usb handler object here.
}

bool usbHandler::sendCommand(int command){
    //create a new usb object.
    connect();
    initCommand();
    // send the int command
    endCommand();
    // delete usb object.
}

bool usbHandler::connect(){
    // create the new command.
}

bool usbHandler::initCommand(){
    // send the init command.
}

bool usbHandler::endCommand(){
    // send the end command.
}
