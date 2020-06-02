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
    	uBit.serial.send("resetSerial 0.1\r\n");
    }

    //%
    StringData *read(StringData *delimiters) {
    	const char *jsonNN = PXT_STRING_DATA(json);
    	uBit.serial.send("read: ");
    	uBit.serial.send(jsonNN);
    	uBit.serial.send("\r\n");
    	ManagedString result = ManagedString("Ergebnis");
        return result.leakData();
    }
}
