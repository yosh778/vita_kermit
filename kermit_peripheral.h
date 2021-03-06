#ifndef __KERMIT_PERIPHERAL_H__
#define __KERMIT_PERIPHERAL_H__


/**
 * Allows / Prevents the PsButton to minimize pspemu
 *
 * @param int activate 1 to allow, 0 to prevent
 * @return u32 0 on success, negative on error
 *
 */
u32 sceKermitPeripheralSetPsButtonState(int activate);



#endif

