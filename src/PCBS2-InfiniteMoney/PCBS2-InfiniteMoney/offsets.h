#pragma once
#include <vector>
#include "json.h"

uintptr_t gameAsm;
std::vector<OffsetRequest> functionOffsets;
uintptr_t CareerStatus_GetCash = 0xCAA2D0;
uintptr_t Job_GetCash = 0xDE98A0;
uintptr_t MultiJob_GetCash = 0xE05A40;
uintptr_t PCSaleInfo_GetCashForOverclock = 0x8F2F70;
