#include "MyARio.h"

bool MyRio::MyRio_init() {
    myARIO::status = NiFpga_Open();
    return myARIO::MyRio_error;
}

bool myARIO::MyRio_close() {
    myARIO::status = NiFpga_Close();
    return myARIO::MyRio_error
}

bool myARIO::MyRio_error() {
    return NiFpga_IsError(myARIO::status)
}