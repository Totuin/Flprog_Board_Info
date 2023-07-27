#include "flprogBoardInfo.h"

void setup()
{
    Serial.begin();
}

void loop()
{
    Serial.print(flprogBoardInfo::getBoardInfo());
    delay(2000);
}