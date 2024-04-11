/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define GASISR_Prologue 1
#define REG_CC 36
#define GASISR_Done 0
#define ZERO_REGNO_TINY 17
#define TMP_REGNO 0
#define TMP_REGNO_TINY 16
#define REG_W 24
#define REG_X 26
#define REG_Y 28
#define REG_Z 30
#define GASISR_Epilogue 2
#define LPM_REGNO 0
#define ZERO_REGNO 1
#define ACC_A 18
#define REG_SP 32
#define ACC_B 10

enum unspec {
  UNSPEC_STRLEN = 0,
  UNSPEC_CPYMEM = 1,
  UNSPEC_INDEX_JMP = 2,
  UNSPEC_FMUL = 3,
  UNSPEC_FMULS = 4,
  UNSPEC_FMULSU = 5,
  UNSPEC_COPYSIGN = 6,
  UNSPEC_INSERT_BITS = 7,
  UNSPEC_ROUND = 8
};
#define NUM_UNSPEC_VALUES 9
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_PROLOGUE_SAVES = 0,
  UNSPECV_EPILOGUE_RESTORES = 1,
  UNSPECV_WRITE_SP = 2,
  UNSPECV_GASISR = 3,
  UNSPECV_GOTO_RECEIVER = 4,
  UNSPECV_ENABLE_IRQS = 5,
  UNSPECV_MEMORY_BARRIER = 6,
  UNSPECV_NOP = 7,
  UNSPECV_SLEEP = 8,
  UNSPECV_WDR = 9,
  UNSPECV_DELAY_CYCLES = 10
};
#define NUM_UNSPECV_VALUES 11
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
