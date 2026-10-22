/*
 * ceddk.h: Windows CE device driver kit, physical memory mapping.
 * Link with -lceddk.
 */
#ifndef _W32API_CEDDK_H_
#define _W32API_CEDDK_H_

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;

PVOID WINAPI MmMapIoSpace (PHYSICAL_ADDRESS PhysicalAddress,
			   ULONG NumberOfBytes, BOOLEAN CacheEnable);
VOID WINAPI MmUnmapIoSpace (PVOID BaseAddress, ULONG NumberOfBytes);

#ifdef __cplusplus
}
#endif

#endif /* _W32API_CEDDK_H_ */
