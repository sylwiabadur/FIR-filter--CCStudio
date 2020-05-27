	.bss _buffer,243,0,0
	.bss _coeffs,243,0,0

	.text
	.global _asmfir

_asmfir:
	MOV #0, AC0

	MOV *(#AR0), BSA01
	MOV *(#T0), BK03
	MOV *(#T1), AR0
	BSET AR0LC

	AMOV XAR1, XAR2
	MOV *(#AR1), BSA23
	MOV *(#T0), BK03
	MOV #0, AR2
	BSET AR2LC

	MOV #1, AC1
	SUB AC1, T0

	RPT *(#T0)
		MAC *AR0-, *AR2+, AC0
	MOV AC0, T0
	RET
end
