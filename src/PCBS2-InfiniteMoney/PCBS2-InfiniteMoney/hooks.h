#pragma once
#include "offsets.h"
#define MODNAME "[PCBS2-InfiniteMoney]"

int32_t(__fastcall* CareerStatus__GetCash_o)(DWORD*, DWORD*);

int32_t __stdcall CareerStatus__GetCash_hook(DWORD* __tis, DWORD* method)
{
	return 1000000;
}

inline void CreateAndLoadHooks()
{
	//Touches self
	MH_CreateHook(
		reinterpret_cast<LPVOID*>(gameAsm + getCashOffset),
		&CareerStatus__GetCash_hook,
		(LPVOID*)&CareerStatus__GetCash_o);
	// MH_EnableHook(reinterpret_cast<LPVOID*>(gameAsssembly + touchesSelfOfsset));

	MH_STATUS status = MH_EnableHook(MH_ALL_HOOKS);
	std::cout << MODNAME << " has loaded 1 hook with status: " << status << std::endl;
}
