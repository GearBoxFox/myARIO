#include <MyRio.h>

namespace myARIO {
    bool MyRio_init();
    bool MyRio_close();
    bool MyRio_error();

    static NiFpga_Status status; // Global status for error checking
}