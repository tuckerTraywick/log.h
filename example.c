#include <stdio.h> // stdout, printf
#define LOG_IMPL
#include "log.h"

int main(void) {
    debugOut = stdout;
    infoOut = stdout;
    warningOut = stdout;
    errorOut = stderr;
    
    logInfo("some information");
    logfDebug("some debug info: %d, %d", 1, 2);
    logWarning("a warning");
    putsInfo("some unformated info\n");
    logError("an error");
    return 0;
}
