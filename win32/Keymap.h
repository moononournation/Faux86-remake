
#ifndef _Keymap_H_
#define _Keymap_H_

uint16_t modifier2xtMapping[] = {
	0x1d,		// ModifierKeyLeftCtrl
	0x2a,		// ModifierKeyLeftShift
	0x38,		// ModifierKeyAlt
	0xe05b,		// ModifierKeyLeftWin
	0xe01d,		// ModifierKeyRightCtrl
	0x36,		// ModifierKeyRightShift
	0xe038,		// ModifierKeyAltGr
	0xe05c,		// ModifierKeyRightWin
	0x0,		// ModifierKeyUnknown
};

uint16_t usb2xtMapping[] = {
	0x0,		// USB 0	(null)
	0x0,		// USB 1	(null)
	0x0,		// USB 2	(null)
	0x0,		// USB 3	(null)
	0x1e,		// USB 4	KeyA
	0x30,		// USB 5	KeyB
	0x2e,		// USB 6	KeyC
	0x20,		// USB 7	KeyD
	0x12,		// USB 8	KeyE
	0x21,		// USB 9	KeyF
	0x22,		// USB a	KeyG
	0x23,		// USB b	KeyH
	0x17,		// USB c	KeyI
	0x24,		// USB d	KeyJ
	0x25,		// USB e	KeyK
	0x26,		// USB f	KeyL
	0x32,		// USB 10	KeyM
	0x31,		// USB 11	KeyN
	0x18,		// USB 12	KeyO
	0x19,		// USB 13	KeyP
	0x10,		// USB 14	KeyQ
	0x13,		// USB 15	KeyR
	0x1f,		// USB 16	KeyS
	0x14,		// USB 17	KeyT
	0x16,		// USB 18	KeyU
	0x2f,		// USB 19	KeyV
	0x11,		// USB 1a	KeyW
	0x2d,		// USB 1b	KeyX
	0x15,		// USB 1c	KeyY
	0x2c,		// USB 1d	KeyZ
	0x2,		// USB 1e	Digit1
	0x3,		// USB 1f	Digit2
	0x4,		// USB 20	Digit3
	0x5,		// USB 21	Digit4
	0x6,		// USB 22	Digit5
	0x7,		// USB 23	Digit6
	0x8,		// USB 24	Digit7
	0x9,		// USB 25	Digit8
	0xa,		// USB 26	Digit9
	0xb,		// USB 27	Digit0
	0x1c,		// USB 28	Enter
	0x1,		// USB 29	Escape
	0xe,		// USB 2a	Backspace
	0xf,		// USB 2b	Tab
	0x39,		// USB 2c	Space
	0xc,		// USB 2d	Minus
	0xd,		// USB 2e	Equal
	0x1a,		// USB 2f	BracketLeft
	0x1b,		// USB 30	BracketRight
	0x2b,		// USB 31	Backslash
	0x0,		// USB 32	(none)
	0x27,		// USB 33	Semicolon
	0x28,		// USB 34	Quote
	0x29,		// USB 35	Backquote
	0x33,		// USB 36	Comma
	0x34,		// USB 37	Period
	0x35,		// USB 38	Slash
	0x3a,		// USB 39	CapsLock
	0x3b,		// USB 3a	F1
	0x3c,		// USB 3b	F2
	0x3d,		// USB 3c	F3
	0x3e,		// USB 3d	F4
	0x3f,		// USB 3e	F5
	0x40,		// USB 3f	F6
	0x41,		// USB 40	F7
	0x42,		// USB 41	F8
	0x43,		// USB 42	F9
	0x44,		// USB 43	F10
	0x57,		// USB 44	F11
	0x58,		// USB 45	F12
	0xe037,		// USB 46	PrintScreen
	0x46,		// USB 47	ScrollLock
	0x0,		// USB 48	Pause
	0xe052,		// USB 49	Insert
	0xe047,		// USB 4a	Home
	0xe049,		// USB 4b	PageUp
	0xe053,		// USB 4c	Delete
	0xe04f,		// USB 4d	End
	0xe051,		// USB 4e	PageDown
	0xe04d,		// USB 4f	ArrowRight
	0xe04b,		// USB 50	ArrowLeft
	0xe050,		// USB 51	ArrowDown
	0xe048,		// USB 52	ArrowUp
	0x45,		// USB 53	NumLock
	0xe035,		// USB 54	NumpadDivide
	0x37,		// USB 55	NumpadMultiply
	0x4a,		// USB 56	NumpadSubtract
	0x4e,		// USB 57	NumpadAdd
	0xe01c,		// USB 58	NumpadEnter
	0x4f,		// USB 59	Numpad1
	0x50,		// USB 5a	Numpad2
	0x51,		// USB 5b	Numpad3
	0x4b,		// USB 5c	Numpad4
	0x4c,		// USB 5d	Numpad5
	0x4d,		// USB 5e	Numpad6
	0x47,		// USB 5f	Numpad7
	0x48,		// USB 60	Numpad8
	0x49,		// USB 61	Numpad9
	0x52,		// USB 62	Numpad0
	0x53,		// USB 63	NumpadDecimal
	0x56,		// USB 64	IntlBackslash
	0xe05d,		// USB 65	ContextMenu
	0x0,		// USB 66	Power
	0x0,		// USB 67	NumpadEqual
	0x5b,		// USB 68	F13
	0x5c,		// USB 69	F14
	0x5d,		// USB 6a	F15
	0x63,		// USB 6b	F16
	0x64,		// USB 6c	F17
	0x65,		// USB 6d	F18
	0x66,		// USB 6e	F19
	0x67,		// USB 6f	F20
	0x68,		// USB 70	F21
	0x69,		// USB 71	F22
	0x6a,		// USB 72	F23
	0x6b,		// USB 73	F24
	0x0,		// USB 74	Open
	0xe03b,		// USB 75	Help
	0x0,		// USB 76	(null)
	0x0,		// USB 77	Select
	0x0,		// USB 78	(none)
	0x0,		// USB 79	Again
	0xe008,		// USB 7a	Undo
	0xe017,		// USB 7b	Cut
	0xe018,		// USB 7c	Copy
	0xe00a,		// USB 7d	Paste
	0x0,		// USB 7e	Find
	0xe020,		// USB 7f	VolumeMute
	0xe030,		// USB 80	VolumeUp
	0xe02e,		// USB 81	VolumeDown
	0x0,		// USB 82	(none)
	0x0,		// USB 83	(none)
	0x0,		// USB 84	(none)
	0x0,		// USB 85	NumpadComma
	0x0,		// USB 86	(none)
	0x0,		// USB 87	IntlRo
	0x0,		// USB 88	KanaMode
	0x7d,		// USB 89	IntlYen
	0x0,		// USB 8a	Convert
	0x0,		// USB 8b	NonConvert
	0x0,		// USB 8c	(none)
	0x0,		// USB 8d	(none)
	0x0,		// USB 8e	(none)
	0x0,		// USB 8f	(none)
	0x0,		// USB 90	Lang1
	0x0,		// USB 91	Lang2
	0x0,		// USB 92	Lang3
	0x0,		// USB 93	Lang4
	0x0,		// USB 94	Lang5
	0x0,		// USB 95	(none)
	0x0,		// USB 96	(none)
	0x0,		// USB 97	(none)
	0x0,		// USB 98	(none)
	0x0,		// USB 99	(none)
	0x0,		// USB 9a	(none)
	0x0,		// USB 9b	Abort
	0x0,		// USB 9c	(none)
	0x0,		// USB 9d	(none)
	0x0,		// USB 9e	(none)
	0x0,		// USB 9f	(none)
	0x0,		// USB a0	(none)
	0x0,		// USB a1	(none)
	0x0,		// USB a2	(none)
	0x0,		// USB a3	Props
	0x0,		// USB a4	(none)
	0x0,		// USB a5	(none)
	0x0,		// USB a6	(none)
	0x0,		// USB a7	(none)
	0x0,		// USB a8	(none)
	0x0,		// USB a9	(none)
	0x0,		// USB aa	(none)
	0x0,		// USB ab	(none)
	0x0,		// USB ac	(none)
	0x0,		// USB ad	(none)
	0x0,		// USB ae	(none)
	0x0,		// USB af	(none)
	0x0,		// USB b0	(none)
	0x0,		// USB b1	(none)
	0x0,		// USB b2	(none)
	0x0,		// USB b3	(none)
	0x0,		// USB b4	(none)
	0x0,		// USB b5	(none)
	0x0,		// USB b6	NumpadParenLeft
	0x0,		// USB b7	NumpadParenRight
	0x0,		// USB b8	(none)
	0x0,		// USB b9	(none)
	0x0,		// USB ba	(none)
	0x0,		// USB bb	NumpadBackspace
	0x0,		// USB bc	(none)
	0x0,		// USB bd	(none)
	0x0,		// USB be	(none)
	0x0,		// USB bf	(none)
	0x0,		// USB c0	(none)
	0x0,		// USB c1	(none)
	0x0,		// USB c2	(none)
	0x0,		// USB c3	(none)
	0x0,		// USB c4	(none)
	0x0,		// USB c5	(none)
	0x0,		// USB c6	(none)
	0x0,		// USB c7	(none)
	0x0,		// USB c8	(none)
	0x0,		// USB c9	(none)
	0x0,		// USB ca	(none)
	0x0,		// USB cb	(none)
	0x0,		// USB cc	(none)
	0x0,		// USB cd	(none)
	0x0,		// USB ce	(none)
	0x0,		// USB cf	(none)
	0x0,		// USB d0	NumpadMemoryStore
	0x0,		// USB d1	NumpadMemoryRecall
	0x0,		// USB d2	NumpadMemoryClear
	0x0,		// USB d3	NumpadMemoryAdd
	0x0,		// USB d4	NumpadMemorySubtract
	0x0,		// USB d5	(none)
	0x0,		// USB d6	(none)
	0x0,		// USB d7	(null)
	0x0,		// USB d8	NumpadClear
	0x0,		// USB d9	NumpadClearEntry
	0x0,		// USB da	(none)
	0x0,		// USB db	(none)
	0x0,		// USB dc	(none)
	0x0,		// USB dd	(none)
	0x0,		// USB de	(none)
	0x0,		// USB df	(none)
	0x1d,		// USB e0	ControlLeft
	0x2a,		// USB e1	ShiftLeft
	0x38,		// USB e2	AltLeft
	0xe05b,		// USB e3	OSLeft
	0xe01d,		// USB e4	ControlRight
	0x36,		// USB e5	ShiftRight
	0xe038,		// USB e6	AltRight
	0xe05c,		// USB e7	OSRight
	0x0,		// USB e8	(none)
	0x0,		// USB e9	(none)
	0x0,		// USB ea	(none)
	0x0,		// USB eb	(none)
	0x0,		// USB ec	(none)
	0x0,		// USB ed	(none)
	0x0,		// USB ee	(none)
	0x0,		// USB ef	(none)
	0x0,		// USB f0	(none)
	0x0,		// USB f1	(none)
	0x0,		// USB f2	(none)
	0x0,		// USB f3	(none)
	0x0,		// USB f4	(none)
	0x0,		// USB f5	(none)
	0x0,		// USB f6	(none)
	0x0,		// USB f7	(none)
	0x0,		// USB f8	(none)
	0x0,		// USB f9	(none)
	0x0,		// USB fa	(none)
	0x0,		// USB fb	(none)
	0x0,		// USB fc	(none)
	0x0,		// USB fd	(none)
	0x0,		// USB fe	(none)
	0x0,		// USB ff	(none)
};

#endif
