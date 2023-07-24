#include "flprogBoardInfo.h"

void setup()
{
    Serial.begin();
}

void loop()
{
    Serial.print(flprog::getBoardInfo());
    delay(2000);
}