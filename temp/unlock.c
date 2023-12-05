#include <nds.h>
#include "mkds.h"

#define UNLOCK_BIT_CUP_LEAF 8
#define UNLOCK_BIT_CUP_LIGHTNING 12

#define UNLOCK_BIT_CHARACTER_NOKONOKO 20
#define UNLOCK_BIT_CHARACTER_DAISY 21
#define UNLOCK_BIT_CHARACTER_WALUIGI 22
#define UNLOCK_BIT_CHARACTER_KINGTERESA 23

#define RACE_GP_MODE_50CC 0
#define RACE_GP_MODE_100CC 1
#define RACE_GP_MODE_150CC 2
#define RACE_GP_MODE_MIRROR 3
#define RACE_GP_MODE_MAX 4

#define RACE_CUP_SPECIAL 3
#define RACE_CUP_REVERSE_1 4
#define RACE_CUP_REVERSE_2 5

typedef struct
{
    u8 signature[12];
    u16 nickname[10];
    u8 unlockBits[4];
} nksy_t;

typedef struct
{
    nksy_t* nksy;
} save_data_t;

void savd_resetUnlockBit(int bit)
{
    save_data_t* saveData = *((save_data_t**)0x0217AA08);
    saveData->nksy->unlockBits[bit >> 3] &= ~(1 << (bit & 7));
}

//Lock Leaf and Lightning Cups for all GP Modes
void unlock_lockCups()
{
    int i;
    for (i = 0; i < RACE_GP_MODE_MAX; i++)
    {
        savd_resetUnlockBit(i + UNLOCK_BIT_CUP_LEAF);
        savd_resetUnlockBit(i + UNLOCK_BIT_CUP_LIGHTNING);
    }
}