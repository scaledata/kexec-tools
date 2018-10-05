#include "io.h"
void reset_vga(void)
{
	/* Hello */
	inb(0x3da);
	outb(0, 0x3c0);

	/* Sequencer registers */
	outw(0x0300, 0x3c4);
	outw(0x0001, 0x3c4);
	outw(0x0302, 0x3c4);
	outw(0x0003, 0x3c4);
	outw(0x0204, 0x3c4);

	/* Ensure CRTC regs 0-7 are unlocked by clearing bit 7 of CRTC[17] */
	outw(0x0e11, 0x3d4);
	/* CRTC registers */
	outw(0x5f00, 0x3d4);
	outw(0x4f01, 0x3d4);
	outw(0x5002, 0x3d4);
	outw(0x8203, 0x3d4);
	outw(0x5504, 0x3d4);
	outw(0x8105, 0x3d4);
	outw(0xbf06, 0x3d4);
	outw(0x1f07, 0x3d4);
	outw(0x0008, 0x3d4);
	outw(0x4f09, 0x3d4);
	outw(0x200a, 0x3d4);
	outw(0x0e0b, 0x3d4);
	outw(0x000c, 0x3d4);
	outw(0x000d, 0x3d4);
	outw(0x010e, 0x3d4);
	outw(0xe00f, 0x3d4);
	outw(0x9c10, 0x3d4);
	outw(0x8e11, 0x3d4);
	outw(0x8f12, 0x3d4);
	outw(0x2813, 0x3d4);
	outw(0x1f14, 0x3d4);
	outw(0x9615, 0x3d4);
	outw(0xb916, 0x3d4);
	outw(0xa317, 0x3d4);
	outw(0xff18, 0x3d4);

	/* Graphic registers */
	outw(0x0000, 0x3ce);
	outw(0x0001, 0x3ce);
	outw(0x0002, 0x3ce);
	outw(0x0003, 0x3ce);
	outw(0x0004, 0x3ce);
	outw(0x1005, 0x3ce);
	outw(0x0e06, 0x3ce);
	outw(0x0007, 0x3ce);
	outw(0xff08, 0x3ce);

	/* Attribute registers */
	inb(0x3da);
	outb(0x00, 0x3c0);
	outb(0x00, 0x3c0);

	inb(0x3da);
	outb(0x01, 0x3c0);
	outb(0x01, 0x3c0);

	inb(0x3da);
	outb(0x02, 0x3c0);
	outb(0x02, 0x3c0);

	inb(0x3da);
	outb(0x03, 0x3c0);
	outb(0x03, 0x3c0);

	inb(0x3da);
	outb(0x04, 0x3c0);
	outb(0x04, 0x3c0);

	inb(0x3da);
	outb(0x05, 0x3c0);
	outb(0x05, 0x3c0);

	inb(0x3da);
	outb(0x06, 0x3c0);
	outb(0x14, 0x3c0);

	inb(0x3da);
	outb(0x07, 0x3c0);
	outb(0x07, 0x3c0);

	inb(0x3da);
	outb(0x08, 0x3c0);
	outb(0x38, 0x3c0);

	inb(0x3da);
	outb(0x09, 0x3c0);
	outb(0x39, 0x3c0);

	inb(0x3da);
	outb(0x0a, 0x3c0);
	outb(0x3a, 0x3c0);

	inb(0x3da);
	outb(0x0b, 0x3c0);
	outb(0x3b, 0x3c0);

	inb(0x3da);
	outb(0x0c, 0x3c0);
	outb(0x3c, 0x3c0);

	inb(0x3da);
	outb(0x0d, 0x3c0);
	outb(0x3d, 0x3c0);

	inb(0x3da);
	outb(0x0e, 0x3c0);
	outb(0x3e, 0x3c0);

	inb(0x3da);
	outb(0x0f, 0x3c0);
	outb(0x3f, 0x3c0);

	inb(0x3da);
	outb(0x10, 0x3c0);
	outb(0x0c, 0x3c0);

	inb(0x3da);
	outb(0x11, 0x3c0);
	outb(0x00, 0x3c0);

	inb(0x3da);
	outb(0x12, 0x3c0);
	outb(0x0f, 0x3c0);

	inb(0x3da);
	outb(0x13, 0x3c0);
	outb(0x08, 0x3c0);

	inb(0x3da);
	outb(0x14, 0x3c0);
	outb(0x00, 0x3c0);

	/* Goodbye */
	inb(0x3da);
	outb(0x20, 0x3c0);
}
