#include "flprogBoardInfo.h"

String flprogBoardInfo::getBoardInfo()
{
    String result = flprogBoardInfo::getUartBoardInfo();
    // return result + "\n" + VARIANT_H + "\n\n";
    return result + "\n";
}
