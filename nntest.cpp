#include "pxt.h"

namespace serial {
    //%
    void setReceiveBufferSize(int size) {
    	uBit.serial.send("size: ");
    	for (int i=0; i<size; i++) {
        	uBit.serial.send(".");
    	}
    	uBit.serial.send("\r\n");
    }

    //%
    void resetSerial() {
    	uBit.serial.send("resetSerial Version: ver0.1\r\n");
    }

    //%
    StringData *read(StringData *delimiters) {
        return delimiters;
    }
}
