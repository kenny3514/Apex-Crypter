; o IDPE 3.1
; o MI, UM
; o Indy Clerk
;
IDP_INITIALIZE_ENGINE	equ 0
; typedef NTSTATUS (*PENTRY)(
;	);

IDP_ADD_REFERENCE		equ 1
; typedef NTSTATUS (*PENTRY)(
;    IN OUT PVOID *Reference
;	IN ULONG SpaceSize
;    );

; typedef LONG (*PVECTORED_EXCEPTION_HANDLER)(
;    IN OUT PEXCEPTION_POINTERS *ExceptionInformation
;    );

IDP_ADD_VEH			equ 2
; typedef PVOID (*PENTRY)(
;    IN ULONG First,
;    IN PVECTORED_EXCEPTION_HANDLER Handler
;    );

IDP_REMOVE_VEH			equ 3
; typedef ULONG (*PENTRY)(
;	IN PVOID Handle
;	);

IDP_QUERY_ENTRY		equ 4
;typedef NTSTATUS (*PENTRY)(
;	IN PVOID ImageBase OPTIONAL,
;	IN PVOID HashOrFunctionName,
;	IN PCOMPUTE_HASH_ROUTINE HashRoutine OPTIONAL,
;	IN ULONG PartialCrc,
;	OUT *PVOID Entry
;	);

;typedef ULONG (*PCOMPUTE_HASH_ROUTINE)(
;	IN ULONG UserParameter,
;	IN PVOID Buffer,
;	IN ULONG Length
;	);

IDP_QUERY_ENTRIES		equ 5
; typedef NTSTATUS (*PENTRY)(
;	IN PVOID ImageBase OPTIONAL,
;	IN ULONG PartialCrc,
;	IN PULONG Crc32List,
;	OUT *PVOID EntriesList
;	);

SEGMENT_ENTRY struct
SegmentBase	PVOID ?
SegmentLimit	PVOID ?
SegmentAddress	PVOID ?
Reference		PVOID ?
SEGMENT_ENTRY ends
PSEGMENT_ENTRY typedef ptr SEGMENT_ENTRY

IDP_SEGMENT_ENTRY_OFFSET	equ (PAGE_SIZE - 4)

THREAD_STATE struct
rEFlags	DWORD ?
Entry	PSEGMENT_ENTRY ?
THREAD_STATE ends
PTHREAD_STATE typedef ptr THREAD_STATE

IDP_THREAD_STATE_OFFSET	equ (PAGE_SIZE - 2*4)

IDP_BREAKPOINT		equ 80FE0001H
IDP_SINGLE_STEP	equ 80FE0002H

IDP:
; ~~~~~~~~~~~~~~~~~~ Autogenerated dump ~~~~~~~~~~~~~~~~~~~~~
DB 085H, 0C0H, 00FH, 084H, 032H, 006H, 000H, 000H, 048H, 00FH
DB 084H, 0DAH, 002H, 000H, 000H, 048H, 00FH, 084H, 05AH, 002H
DB 000H, 000H, 048H, 00FH, 084H, 071H, 002H, 000H, 000H, 048H
DB 00FH, 084H, 0C7H, 000H, 000H, 000H, 048H, 00FH, 084H, 0C6H
DB 001H, 000H, 000H, 0B8H, 00DH, 000H, 000H, 0C0H, 0C3H, 059H
DB 055H, 050H, 0E8H, 01FH, 000H, 000H, 000H, 050H, 064H, 0FFH
DB 035H, 000H, 000H, 000H, 000H, 064H, 089H, 025H, 000H, 000H
DB 000H, 000H, 0FFH, 0E1H, 059H, 064H, 08FH, 005H, 000H, 000H
DB 000H, 000H, 08DH, 064H, 024H, 00CH, 0FFH, 0E1H, 0E8H, 02EH
DB 000H, 000H, 000H, 08BH, 044H, 024H, 004H, 08BH, 04CH, 024H
DB 00CH, 08BH, 014H, 024H, 08BH, 099H, 0A4H, 000H, 000H, 000H
DB 08BH, 0B1H, 0A0H, 000H, 000H, 000H, 08BH, 0B9H, 09CH, 000H
DB 000H, 000H, 08BH, 064H, 024H, 008H, 08BH, 048H, 00CH, 08BH
DB 000H, 08BH, 06CH, 024H, 00CH, 0FFH, 064H, 024H, 008H, 058H
DB 0C3H, 055H, 08BH, 0ECH, 08BH, 055H, 008H, 0B8H, 07BH, 000H
DB 000H, 0C0H, 066H, 081H, 03AH, 04DH, 05AH, 075H, 02AH, 003H
DB 052H, 03CH, 081H, 03AH, 050H, 045H, 000H, 000H, 075H, 01FH
DB 066H, 081H, 07AH, 014H, 0E0H, 000H, 075H, 017H, 066H, 081H
DB 07AH, 004H, 04CH, 001H, 075H, 00FH, 066H, 0F7H, 042H, 016H
DB 000H, 001H, 074H, 007H, 08BH, 04DH, 00CH, 033H, 0C0H, 089H
DB 011H, 0C9H, 0C2H, 008H, 000H, 055H, 08BH, 0ECH, 053H, 08BH
DB 04DH, 008H, 08BH, 055H, 00CH, 033H, 0DBH, 08AH, 004H, 00BH
DB 038H, 004H, 013H, 075H, 005H, 043H, 084H, 0C0H, 075H, 0F3H
DB 05BH, 0C9H, 0C2H, 008H, 000H, 055H, 08BH, 0ECH, 083H, 0C4H
DB 0F4H, 053H, 056H, 057H, 0E8H, 0D9H, 000H, 000H, 000H, 0E8H
DB 033H, 0FFH, 0FFH, 0FFH, 064H, 0A1H, 030H, 000H, 000H, 000H
DB 08BH, 05DH, 008H, 08BH, 040H, 00CH, 085H, 0DBH, 08BH, 040H
DB 00CH, 075H, 005H, 08BH, 000H, 08BH, 058H, 018H, 08DH, 045H
DB 0F8H, 050H, 053H, 0E8H, 06DH, 0FFH, 0FFH, 0FFH, 085H, 0C0H
DB 08BH, 055H, 0F8H, 00FH, 085H, 0B8H, 000H, 000H, 000H, 08BH
DB 042H, 078H, 085H, 0C0H, 00FH, 084H, 0ADH, 000H, 000H, 000H
DB 003H, 0C3H, 089H, 045H, 0FCH, 08BH, 070H, 020H, 085H, 0F6H
DB 00FH, 084H, 0A4H, 000H, 000H, 000H, 08BH, 040H, 018H, 085H
DB 0C0H, 00FH, 084H, 099H, 000H, 000H, 000H, 089H, 045H, 0F4H
DB 003H, 0F3H, 033H, 0FFH, 0FCH, 08BH, 006H, 003H, 0C3H, 083H
DB 07DH, 010H, 000H, 074H, 024H, 057H, 08BH, 0F8H, 0B9H, 004H
DB 001H, 000H, 000H, 08BH, 0D7H, 033H, 0C0H, 0F2H, 0AEH, 0F7H
DB 0D1H, 05FH, 081H, 0C1H, 004H, 001H, 000H, 000H, 051H, 052H
DB 0FFH, 075H, 014H, 0FFH, 055H, 010H, 039H, 045H, 00CH, 0EBH
DB 009H, 050H, 0FFH, 075H, 00CH, 0E8H, 03DH, 0FFH, 0FFH, 0FFH
DB 075H, 030H, 08BH, 04DH, 0FCH, 08BH, 041H, 024H, 003H, 0C3H
DB 00FH, 0B7H, 03CH, 078H, 00BH, 0FFH, 074H, 009H, 03BH, 079H
DB 010H, 072H, 003H, 02BH, 079H, 010H, 047H, 08BH, 071H, 01CH
DB 003H, 0F3H, 08BH, 00CH, 0BEH, 085H, 0C9H, 08BH, 055H, 018H
DB 074H, 029H, 003H, 0CBH, 033H, 0C0H, 089H, 00AH, 0EBH, 015H
DB 083H, 0C6H, 004H, 047H, 0FFH, 04DH, 0F4H, 075H, 08EH, 0B8H
DB 07AH, 000H, 000H, 0C0H, 0EBH, 005H, 0E8H, 0B4H, 0FEH, 0FFH
DB 0FFH, 0E8H, 06EH, 0FEH, 0FFH, 0FFH, 05FH, 05EH, 05BH, 0C9H
DB 0C2H, 014H, 000H, 0B8H, 07BH, 000H, 000H, 0C0H, 0EBH, 0EDH
DB 0B8H, 0FFH, 000H, 000H, 0C0H, 0EBH, 0E6H, 055H, 08BH, 0ECH
DB 083H, 0C4H, 0ECH, 056H, 057H, 0E8H, 062H, 000H, 000H, 000H
DB 0E8H, 02EH, 0FEH, 0FFH, 0FFH, 08DH, 04DH, 0FCH, 033H, 0C0H
DB 051H, 08DH, 055H, 0ECH, 050H, 050H, 052H, 050H, 02DH, 0AEH
DB 08BH, 093H, 0BCH, 089H, 045H, 0ECH, 005H, 01DH, 0F9H, 003H
DB 032H, 089H, 045H, 0F0H, 035H, 01BH, 008H, 033H, 007H, 089H
DB 045H, 0F4H, 035H, 017H, 056H, 071H, 072H, 089H, 045H, 0F8H
DB 0E8H, 0B6H, 0FEH, 0FFH, 0FFH, 085H, 0C0H, 08BH, 075H, 010H
DB 075H, 029H, 08BH, 07DH, 014H, 0ADH, 057H, 0FFH, 075H, 00CH
DB 0FFH, 075H, 0FCH, 050H, 0FFH, 075H, 008H, 0E8H, 09BH, 0FEH
DB 0FFH, 0FFH, 085H, 0C0H, 075H, 011H, 0ADH, 083H, 0C7H, 004H
DB 085H, 0C0H, 075H, 0E4H, 033H, 0C0H, 0EBH, 005H, 0E8H, 026H
DB 0FEH, 0FFH, 0FFH, 0E8H, 0E0H, 0FDH, 0FFH, 0FFH, 05FH, 05EH
DB 0C9H, 0C2H, 010H, 000H, 033H, 0C0H, 064H, 08BH, 00DH, 030H
DB 000H, 000H, 000H, 0F0H, 00FH, 0B1H, 081H, 0FCH, 00FH, 000H
DB 000H, 075H, 008H, 0B8H, 001H, 000H, 000H, 0C0H, 0C2H, 008H
DB 000H, 0FFH, 060H, 028H, 033H, 0C0H, 064H, 08BH, 00DH, 030H
DB 000H, 000H, 000H, 0F0H, 00FH, 0B1H, 081H, 0FCH, 00FH, 000H
DB 000H, 075H, 008H, 0B8H, 001H, 000H, 000H, 0C0H, 0C2H, 008H
DB 000H, 0FFH, 060H, 02CH, 055H, 08BH, 0ECH, 08BH, 045H, 008H
DB 08BH, 055H, 00CH, 08BH, 0C8H, 081H, 0E2H, 000H, 000H, 00FH
DB 000H, 0C1H, 0E8H, 010H, 081H, 0E1H, 000H, 000H, 000H, 0FFH
DB 025H, 0FFH, 000H, 000H, 000H, 08DH, 094H, 002H, 000H, 0F2H
DB 0C0H, 000H, 00BH, 0D1H, 08BH, 045H, 00CH, 08BH, 04DH, 008H
DB 025H, 0FFH, 0FFH, 000H, 000H, 0C1H, 0E1H, 010H, 08DH, 00CH
DB 008H, 0C9H, 0C2H, 008H, 000H, 055H, 08BH, 0ECH, 083H, 0C4H
DB 0F4H, 053H, 056H, 057H, 033H, 0C0H, 064H, 08BH, 01DH, 030H
DB 000H, 000H, 000H, 0F0H, 00FH, 0B1H, 083H, 0FCH, 00FH, 000H
DB 000H, 08BH, 0D8H, 075H, 00AH, 0B8H, 001H, 000H, 000H, 0C0H
DB 0E9H, 0D0H, 000H, 000H, 000H, 08DH, 04BH, 034H, 089H, 05DH
DB 0F8H, 051H, 0FFH, 053H, 020H, 08DH, 073H, 050H, 08BH, 07DH
DB 008H, 08BH, 04BH, 04CH, 08BH, 03FH, 089H, 07DH, 0FCH, 081H
DB 0FFH, 000H, 000H, 001H, 000H, 00FH, 086H, 0B3H, 000H, 000H
DB 000H, 08BH, 0C7H, 08BH, 055H, 00CH, 081H, 0E7H, 0FFH, 00FH
DB 000H, 000H, 085H, 0D2H, 00FH, 084H, 0A0H, 000H, 000H, 000H
DB 003H, 0D7H, 089H, 075H, 0F4H, 0E3H, 037H, 081H, 0F9H, 080H
DB 000H, 000H, 000H, 072H, 01AH, 0B8H, 09AH, 000H, 000H, 0C0H
DB 0EBH, 07AH, 039H, 016H, 076H, 01FH, 081H, 0C7H, 000H, 010H
DB 000H, 000H, 04AH, 074H, 0ECH, 08BH, 075H, 0F4H, 08BH, 04BH
DB 04CH, 039H, 046H, 008H, 074H, 058H, 039H, 03EH, 074H, 0E8H
DB 073H, 0E2H, 039H, 07EH, 004H, 073H, 0E1H, 083H, 0C6H, 010H
DB 0E2H, 0EBH, 08BH, 045H, 0FCH, 0BAH, 0FFH, 0FFH, 0FEH, 07FH
DB 056H, 02BH, 0D0H, 02BH, 075H, 0F4H, 02BH, 0C7H, 0D1H, 0EEH
DB 025H, 000H, 0F0H, 0FFH, 0FFH, 0C1H, 0EAH, 00CH, 08DH, 076H
DB 00FH, 052H, 050H, 0E8H, 002H, 0FFH, 0FFH, 0FFH, 06AH, 000H
DB 06AH, 000H, 06AH, 000H, 052H, 051H, 056H, 0FFH, 053H, 00CH
DB 05EH, 085H, 0C0H, 08BH, 04DH, 008H, 075H, 01AH, 089H, 03EH
DB 089H, 04EH, 00CH, 089H, 039H, 0FFH, 075H, 0FCH, 0FFH, 043H
DB 04CH, 08FH, 046H, 008H, 08BH, 055H, 00CH, 033H, 0C0H, 003H
DB 0D7H, 089H, 056H, 004H, 08DH, 04BH, 034H, 050H, 051H, 0FFH
DB 053H, 024H, 058H, 05FH, 05EH, 05BH, 0C9H, 0C2H, 008H, 000H
DB 0B8H, 00DH, 000H, 000H, 0C0H, 0EBH, 0E9H, 055H, 08BH, 0ECH
DB 083H, 0C4H, 0F0H, 053H, 056H, 057H, 08BH, 075H, 008H, 033H
DB 0DBH, 0C7H, 045H, 0FCH, 011H, 000H, 000H, 000H, 0C7H, 045H
DB 0F0H, 0F0H, 0F2H, 066H, 067H, 0C7H, 045H, 0F4H, 0F3H, 02EH
DB 03EH, 036H, 0C7H, 045H, 0F8H, 026H, 064H, 065H, 000H, 08DH
DB 055H, 0F0H, 0FFH, 04DH, 0FCH, 074H, 02BH, 0ACH, 08BH, 0FAH
DB 0B9H, 00BH, 000H, 000H, 000H, 0F2H, 0AEH, 075H, 00AH, 083H
DB 0F9H, 006H, 073H, 0EAH, 00FH, 0B6H, 0D8H, 0EBH, 0E5H, 08BH
DB 0D0H, 02CH, 0A4H, 074H, 004H, 0FEH, 0C8H, 075H, 00BH, 08BH
DB 0C2H, 08BH, 0CBH, 05FH, 05EH, 05BH, 0C9H, 0C2H, 004H, 000H
DB 033H, 0C0H, 0EBH, 0F3H, 0E8H, 036H, 0FCH, 0FFH, 0FFH, 055H
DB 08BH, 0ECH, 083H, 0C4H, 0FCH, 053H, 056H, 057H, 08BH, 055H
DB 008H, 033H, 0C0H, 08BH, 032H, 08BH, 07AH, 004H, 083H, 07EH
DB 004H, 000H, 064H, 08BH, 01DH, 030H, 000H, 000H, 000H, 075H
DB 05EH, 0F0H, 00FH, 0B1H, 083H, 0FCH, 00FH, 000H, 000H, 074H
DB 054H, 08BH, 0D8H, 08DH, 04BH, 034H, 051H, 0FFH, 053H, 020H
DB 081H, 03EH, 005H, 000H, 000H, 0C0H, 00FH, 085H, 0E1H, 000H
DB 000H, 000H, 083H, 07EH, 014H, 000H, 08BH, 046H, 018H, 00FH
DB 095H, 0C1H, 083H, 07EH, 010H, 002H, 00FH, 0B6H, 0C9H, 00FH
DB 085H, 093H, 000H, 000H, 000H, 089H, 04DH, 0FCH, 03DH, 000H
DB 000H, 001H, 000H, 00FH, 083H, 085H, 000H, 000H, 000H, 08BH
DB 04BH, 04CH, 08DH, 073H, 050H, 08BH, 0D1H, 0E3H, 07BH, 039H
DB 006H, 077H, 005H, 039H, 046H, 004H, 077H, 00BH, 083H, 0C6H
DB 010H, 0E2H, 0F2H, 0EBH, 06BH, 033H, 0C0H, 0EBH, 072H, 02BH
DB 0D1H, 0FFH, 0B7H, 0C0H, 000H, 000H, 000H, 081H, 08FH, 0C0H
DB 000H, 000H, 000H, 000H, 001H, 000H, 000H, 064H, 08FH, 005H
DB 0F8H, 00FH, 000H, 000H, 064H, 089H, 035H, 0FCH, 00FH, 000H
DB 000H, 08DH, 034H, 0D5H, 00FH, 000H, 000H, 000H, 0FFH, 0B7H
DB 0B8H, 000H, 000H, 000H, 0E8H, 0E6H, 0FEH, 0FFH, 0FFH, 085H
DB 0C0H, 075H, 01AH, 089H, 0B7H, 090H, 000H, 000H, 000H, 089H
DB 0B7H, 08CH, 000H, 000H, 000H, 089H, 0B7H, 094H, 000H, 000H
DB 000H, 089H, 0B7H, 098H, 000H, 000H, 000H, 0EBH, 00CH, 083H
DB 07DH, 0FCH, 000H, 074H, 023H, 089H, 0B7H, 094H, 000H, 000H
DB 000H, 08BH, 045H, 008H, 08BH, 000H, 0C7H, 000H, 001H, 000H
DB 0FEH, 080H, 033H, 0C0H, 08DH, 04BH, 034H, 050H, 051H, 0FFH
DB 053H, 024H, 058H, 05FH, 05EH, 05BH, 0C9H, 0C2H, 004H, 000H
DB 085H, 0C9H, 089H, 0B7H, 098H, 000H, 000H, 000H, 074H, 0D9H
DB 080H, 0F9H, 026H, 075H, 008H, 089H, 0B7H, 094H, 000H, 000H
DB 000H, 0EBH, 0CCH, 089H, 0B7H, 090H, 000H, 000H, 000H, 089H
DB 0B7H, 08CH, 000H, 000H, 000H, 0EBH, 0BEH, 081H, 03EH, 004H
DB 000H, 000H, 080H, 00FH, 085H, 096H, 000H, 000H, 000H, 08BH
DB 003H, 08BH, 04EH, 00CH, 085H, 0C0H, 08DH, 053H, 004H, 074H
DB 029H, 083H, 0F8H, 001H, 074H, 006H, 03BH, 0C1H, 075H, 020H
DB 0EBH, 00DH, 03BH, 0CAH, 072H, 007H, 083H, 0C2H, 008H, 03BH
DB 0CAH, 072H, 09BH, 089H, 00BH, 081H, 0A7H, 0C0H, 000H, 000H
DB 000H, 0FFH, 0FEH, 0FFH, 0FFH, 0B8H, 0FFH, 0FFH, 0FFH, 0FFH
DB 0EBH, 08AH, 064H, 0A1H, 0F8H, 00FH, 000H, 000H, 085H, 0C0H
DB 00FH, 084H, 07AH, 0FFH, 0FFH, 0FFH, 064H, 0C7H, 005H, 0F8H
DB 00FH, 000H, 000H, 000H, 000H, 000H, 000H, 0C7H, 006H, 002H
DB 000H, 0FEH, 080H, 025H, 000H, 001H, 000H, 000H, 0C7H, 087H
DB 08CH, 000H, 000H, 000H, 000H, 000H, 000H, 000H, 081H, 0A7H
DB 0C0H, 000H, 000H, 000H, 0FFH, 0FEH, 0FFH, 0FFH, 0C7H, 087H
DB 090H, 000H, 000H, 000H, 03BH, 000H, 000H, 000H, 0C7H, 087H
DB 094H, 000H, 000H, 000H, 023H, 000H, 000H, 000H, 0C7H, 087H
DB 098H, 000H, 000H, 000H, 023H, 000H, 000H, 000H, 009H, 087H
DB 0C0H, 000H, 000H, 000H, 0E9H, 027H, 0FFH, 0FFH, 0FFH, 081H
DB 03EH, 096H, 000H, 000H, 0C0H, 00FH, 085H, 01BH, 0FFH, 0FFH
DB 0FFH, 08DH, 043H, 00AH, 039H, 046H, 00CH, 00FH, 085H, 00FH
DB 0FFH, 0FFH, 0FFH, 0FFH, 087H, 0B8H, 000H, 000H, 000H, 0E9H
DB 06BH, 0FFH, 0FFH, 0FFH, 055H, 08BH, 0ECH, 083H, 0C4H, 0A8H
DB 053H, 056H, 057H, 0E8H, 0EEH, 000H, 000H, 000H, 0E8H, 0E4H
DB 0F9H, 0FFH, 0FFH, 033H, 0C0H, 064H, 08BH, 01DH, 030H, 000H
DB 000H, 000H, 0F0H, 00FH, 0B1H, 083H, 0FCH, 00FH, 000H, 000H
DB 08DH, 04DH, 0BCH, 074H, 00AH, 0B8H, 001H, 000H, 000H, 0C0H
DB 0E9H, 0CEH, 000H, 000H, 000H, 051H, 033H, 0C0H, 08DH, 07DH
DB 0BCH, 02DH, 0A5H, 0E0H, 068H, 0D6H, 057H, 0FCH, 0ABH, 035H
DB 02FH, 0BAH, 0B7H, 0F1H, 0ABH, 005H, 060H, 080H, 059H, 021H
DB 0ABH, 02DH, 030H, 02CH, 003H, 06CH, 0ABH, 035H, 0F8H, 018H
DB 055H, 0EDH, 0ABH, 005H, 008H, 06FH, 0DBH, 0F8H, 0ABH, 02DH
DB 013H, 031H, 007H, 0B9H, 0ABH, 035H, 059H, 01DH, 053H, 025H
DB 0ABH, 005H, 02EH, 0FFH, 02CH, 044H, 0ABH, 033H, 0C0H, 0ABH
DB 050H, 050H, 0E8H, 03CH, 0FBH, 0FFH, 0FFH, 085H, 0C0H, 0C7H
DB 045H, 0A8H, 050H, 002H, 000H, 000H, 075H, 07BH, 089H, 045H
DB 0ACH, 08DH, 04DH, 0ACH, 08DH, 055H, 0A8H, 06AH, 040H, 068H
DB 000H, 010H, 000H, 000H, 052H, 06AH, 000H, 051H, 06AH, 0FFH
DB 0FFH, 055H, 0C0H, 085H, 0C0H, 08DH, 055H, 0E4H, 075H, 05BH
DB 052H, 0FFH, 055H, 0C8H, 085H, 0C0H, 075H, 06AH, 0E8H, 063H
DB 0FDH, 0FFH, 0FFH, 050H, 06AH, 001H, 0FFH, 055H, 0D8H, 085H
DB 0C0H, 0FCH, 074H, 04DH, 0B9H, 010H, 000H, 000H, 000H, 089H
DB 045H, 0E0H, 08BH, 07DH, 0ACH, 08DH, 075H, 0B0H, 033H, 0C0H
DB 08BH, 0D7H, 089H, 045H, 0B0H, 0C7H, 045H, 0B4H, 068H, 000H
DB 001H, 000H, 0C7H, 045H, 0B8H, 000H, 09DH, 0F4H, 0C3H, 0F3H
DB 0A5H, 0F0H, 00FH, 0B1H, 093H, 0FCH, 00FH, 000H, 000H, 075H
DB 01EH, 033H, 0C0H, 08DH, 04AH, 004H, 0C7H, 002H, 001H, 000H
DB 000H, 000H, 0FFH, 0D1H, 0EBH, 005H, 0E8H, 050H, 0F9H, 0FFH
DB 0FFH, 0E8H, 00AH, 0F9H, 0FFH, 0FFH, 05FH, 05EH, 05BH, 0C9H
DB 0C3H, 08DH, 045H, 0E4H, 068H, 001H, 000H, 000H, 0C0H, 050H
DB 0FFH, 055H, 0CCH, 058H, 050H, 08DH, 04DH, 0A8H, 068H, 000H
DB 080H, 000H, 000H, 08DH, 055H, 0ACH, 051H, 052H, 06AH, 0FFH
DB 0FFH, 055H, 0C4H, 058H, 0EBH, 0D3H
; ~~~~~~~~~~~~~~~~~~~~~~~~~ 0x772 ~~~~~~~~~~~~~~~~~~~~~~~~~~~