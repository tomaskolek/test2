/*
 * projekt.c
 *
 *  Created on: 1. 12. 2016
 *      Author: tomas
 */

#include "projekt.h"
#include "spi.h"
#include "ili9163.h"

void Delay(uint16_t n)
{
	uint32_t nl = n*2;
	while(nl--);
	return;
}

void initMenu(){
	lcdInitialise(LCD_ORIENTATION2);
	lcdClearDisplay(decodeRgbValue(255, 255, 255));
	lcdPutS("Info", 20, 17, 0x0000, 0xFFFF);
	lcdPutS("Revers", 20, 37, 0x0000, 0xFFFF);
	lcdPutS("Expo", 20, 57, 0x0000, 0xFFFF);
	lcdPutS("Mix", 20, 77, 0x0000, 0xFFFF);
	lcdPutS("EPA", 20, 97, 0x0000, 0xFFFF);
	lcdPlnyTrojuholnik(5, 12, 27, decodeRgbValue(0, 0, 0));
}

