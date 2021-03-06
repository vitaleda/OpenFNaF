// (c) 2020 MotoLegacy
// This code is licensed under MIT license (see LICENSE for details)

#include "defs.h"
#include <time.h>


u16_t Current_Tsecond;
u16_t Current_Second;
u32_t Delay_Time[5];

clock_t Start_Time;

void Time_Tick() {
    Current_Tsecond++;

    if (Current_Tsecond > 99) {
        Current_Second++;
        Current_Tsecond = 0;
    }
}

bool Time_FrameReady(u16_t id) {
    if (clock() > Delay_Time[id])
        return TRUE;
    
    return FALSE;
}

void Time_FrameDelay(unsigned short mseconds, u16_t id) {
    Delay_Time[id] = clock() + mseconds * 1000;
}