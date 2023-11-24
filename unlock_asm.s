//Lock cups you are not supposed to be able to access
arepl_0203C0B0:
    push {lr}
    bl unlock_lockCups
    pop {lr}
    add sp, sp, #4
    bx lr

//Kart unlocks
arepl_020910B0:
    mov r0, #5
    bx lr

arepl_020910C4:
    mov r0, #5
    bx lr

arepl_02091144:
    mov r0, #5
    bx lr

arepl_02091158:
    mov r0, #5
    bx lr

//Character unlocks
arepl_02090BA4:
    mov r0, #5
    bx lr

arepl_02090BB8:
    mov r0, #5
    bx lr

arepl_02090C04:
    mov r0, #5
    bx lr

arepl_02090C18:
    mov r0, #5
    bx lr

arepl_02090C9C:
    mov r0, #5
    bx lr

arepl_02090CB0:
    mov r0, #5
    bx lr

//Cup unlocks (remove last 2 cups)
arepl_02090E54:
    ldr r0,=(0x02090F48)
	bx r0

//Cup unlocks (bit 16)
arepl_02090FA0:
    mov r0, #5
    bx lr

arepl_02090FB4:
    mov r0, #5
    bx lr

//True title screen
arepl_020909B8:
    cmp r8, #6
    bx lr

//True staff roll
arepl_02090A5C:
    cmp r10, #6
    bx lr

arepl_02090A78:
    cmp r6, #5
    bx lr

arepl_02090AAC:
    cmp r6, #5
    bx lr

arepl_02090AB4:
    cmp r6, #5
    bx lr

arepl_02090ABC:
    movne r6, #5
    bx lr