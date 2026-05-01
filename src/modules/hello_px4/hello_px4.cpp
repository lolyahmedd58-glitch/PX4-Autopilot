#include <px4_platform_common/px4_config.h>
#include <px4_platform_common/tasks.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/module.h>
#include <unistd.h>

extern "C" __EXPORT int hello_px4_main(int argc, char *argv[]);

int hello_px4_main(int argc, char *argv[])
{
    PX4_INFO("Hello PX4 module started!");
    while (true) {
        PX4_INFO("Hello World");
        sleep(5);
    }
    return 0;
}
