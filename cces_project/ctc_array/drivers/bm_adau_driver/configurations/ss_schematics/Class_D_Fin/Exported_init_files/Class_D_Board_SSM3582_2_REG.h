/*
 * Description:    Class_D_Board:SSM3582_2 control register definitions.
 *
 * Copyright (c) 2017 Analog Devices, Inc. All rights reserved.
 */
#ifndef __CLASS_D_BOARD_SSM3582_2_REG_H__
#define __CLASS_D_BOARD_SSM3582_2_REG_H__


/* VENDOR_ID  - Registers (SSM3582_2) */
#define REG_VENDOR_ID_SSM3582_2_ADDR              0x0
#define REG_VENDOR_ID_SSM3582_2_BYTE              0
#define REG_VENDOR_ID_SSM3582_2_VALUE             0x41

/* DEVICE_ID1  - Registers (SSM3582_2) */
#define REG_DEVICE_ID1_SSM3582_2_ADDR             0x1
#define REG_DEVICE_ID1_SSM3582_2_BYTE             0
#define REG_DEVICE_ID1_SSM3582_2_VALUE            0x35

/* DEVICE_ID2  - Registers (SSM3582_2) */
#define REG_DEVICE_ID2_SSM3582_2_ADDR             0x2
#define REG_DEVICE_ID2_SSM3582_2_BYTE             0
#define REG_DEVICE_ID2_SSM3582_2_VALUE            0x82

/* REVISION  - Registers (SSM3582_2) */
#define REG_REVISION_SSM3582_2_ADDR               0x3
#define REG_REVISION_SSM3582_2_BYTE               0
#define REG_REVISION_SSM3582_2_VALUE              0x1

/* POWER_CTRL  - Registers (SSM3582_2) */
#define REG_POWER_CTRL_SSM3582_2_ADDR             0x4
#define REG_POWER_CTRL_SSM3582_2_BYTE             1
#define REG_POWER_CTRL_SSM3582_2_VALUE            0x80

/* AMP_DAC_CTRL  - Registers (SSM3582_2) */
#define REG_AMP_DAC_CTRL_SSM3582_2_ADDR           0x5
#define REG_AMP_DAC_CTRL_SSM3582_2_BYTE           1
#define REG_AMP_DAC_CTRL_SSM3582_2_VALUE          0x8A

/* DAC_CTRL  - Registers (SSM3582_2) */
#define REG_DAC_CTRL_SSM3582_2_ADDR               0x6
#define REG_DAC_CTRL_SSM3582_2_BYTE               1
#define REG_DAC_CTRL_SSM3582_2_VALUE              0x2

/* VOL_LEFT_CTRL  - Registers (SSM3582_2) */
#define REG_VOL_LEFT_CTRL_SSM3582_2_ADDR          0x7
#define REG_VOL_LEFT_CTRL_SSM3582_2_BYTE          1
#define REG_VOL_LEFT_CTRL_SSM3582_2_VALUE         0x40

/* VOL_RIGHT_CTRL  - Registers (SSM3582_2) */
#define REG_VOL_RIGHT_CTRL_SSM3582_2_ADDR         0x8
#define REG_VOL_RIGHT_CTRL_SSM3582_2_BYTE         1
#define REG_VOL_RIGHT_CTRL_SSM3582_2_VALUE        0x40

/* SAI_CTRL1  - Registers (SSM3582_2) */
#define REG_SAI_CTRL1_SSM3582_2_ADDR              0x9
#define REG_SAI_CTRL1_SSM3582_2_BYTE              1
#define REG_SAI_CTRL1_SSM3582_2_VALUE             0x10

/* SAI_CTRL2  - Registers (SSM3582_2) */
#define REG_SAI_CTRL2_SSM3582_2_ADDR              0xA
#define REG_SAI_CTRL2_SSM3582_2_BYTE              1
#define REG_SAI_CTRL2_SSM3582_2_VALUE             0x7

/* SLOT_LEFT_CTRL  - Registers (SSM3582_2) */
#define REG_SLOT_LEFT_CTRL_SSM3582_2_ADDR         0xB
#define REG_SLOT_LEFT_CTRL_SSM3582_2_BYTE         1
#define REG_SLOT_LEFT_CTRL_SSM3582_2_VALUE        0x0

/* SLOT_RIGHT_CTRL  - Registers (SSM3582_2) */
#define REG_SLOT_RIGHT_CTRL_SSM3582_2_ADDR        0xC
#define REG_SLOT_RIGHT_CTRL_SSM3582_2_BYTE        1
#define REG_SLOT_RIGHT_CTRL_SSM3582_2_VALUE       0x1

/* LIM_LEFT_CTRL1  - Registers (SSM3582_2) */
#define REG_LIM_LEFT_CTRL1_SSM3582_2_ADDR         0xE
#define REG_LIM_LEFT_CTRL1_SSM3582_2_BYTE         1
#define REG_LIM_LEFT_CTRL1_SSM3582_2_VALUE        0xA0

/* LIM_LEFT_CTRL2  - Registers (SSM3582_2) */
#define REG_LIM_LEFT_CTRL2_SSM3582_2_ADDR         0xF
#define REG_LIM_LEFT_CTRL2_SSM3582_2_BYTE         1
#define REG_LIM_LEFT_CTRL2_SSM3582_2_VALUE        0x51

/* LIM_LEFT_CTRL3  - Registers (SSM3582_2) */
#define REG_LIM_LEFT_CTRL3_SSM3582_2_ADDR         0x10
#define REG_LIM_LEFT_CTRL3_SSM3582_2_BYTE         1
#define REG_LIM_LEFT_CTRL3_SSM3582_2_VALUE        0x22

/* LIM_RIGHT_CTRL1  - Registers (SSM3582_2) */
#define REG_LIM_RIGHT_CTRL1_SSM3582_2_ADDR        0x11
#define REG_LIM_RIGHT_CTRL1_SSM3582_2_BYTE        1
#define REG_LIM_RIGHT_CTRL1_SSM3582_2_VALUE       0xA8

/* LIM_RIGHT_CTRL2  - Registers (SSM3582_2) */
#define REG_LIM_RIGHT_CTRL2_SSM3582_2_ADDR        0x12
#define REG_LIM_RIGHT_CTRL2_SSM3582_2_BYTE        1
#define REG_LIM_RIGHT_CTRL2_SSM3582_2_VALUE       0x51

/* LIM_RIGHT_CTRL3  - Registers (SSM3582_2) */
#define REG_LIM_RIGHT_CTRL3_SSM3582_2_ADDR        0x13
#define REG_LIM_RIGHT_CTRL3_SSM3582_2_BYTE        1
#define REG_LIM_RIGHT_CTRL3_SSM3582_2_VALUE       0x22

/* CLIP_LEFT_CTRL  - Registers (SSM3582_2) */
#define REG_CLIP_LEFT_CTRL_SSM3582_2_ADDR         0x14
#define REG_CLIP_LEFT_CTRL_SSM3582_2_BYTE         1
#define REG_CLIP_LEFT_CTRL_SSM3582_2_VALUE        0xFF

/* CLIP_RIGHT_CTRL  - Registers (SSM3582_2) */
#define REG_CLIP_RIGHT_CTRL_SSM3582_2_ADDR        0x15
#define REG_CLIP_RIGHT_CTRL_SSM3582_2_BYTE        1
#define REG_CLIP_RIGHT_CTRL_SSM3582_2_VALUE       0xFF

/* FAULT_CTRL1  - Registers (SSM3582_2) */
#define REG_FAULT_CTRL1_SSM3582_2_ADDR            0x16
#define REG_FAULT_CTRL1_SSM3582_2_BYTE            1
#define REG_FAULT_CTRL1_SSM3582_2_VALUE           0x0

/* FAULT_CTRL2  - Registers (SSM3582_2) */
#define REG_FAULT_CTRL2_SSM3582_2_ADDR            0x17
#define REG_FAULT_CTRL2_SSM3582_2_BYTE            1
#define REG_FAULT_CTRL2_SSM3582_2_VALUE           0x30

/* STATUS1  - Registers (SSM3582_2) */
#define REG_STATUS1_SSM3582_2_ADDR                0x18
#define REG_STATUS1_SSM3582_2_BYTE                0
#define REG_STATUS1_SSM3582_2_VALUE               0x0

/* STATUS2  - Registers (SSM3582_2) */
#define REG_STATUS2_SSM3582_2_ADDR                0x19
#define REG_STATUS2_SSM3582_2_BYTE                0
#define REG_STATUS2_SSM3582_2_VALUE               0x0

/* VBAT  - Registers (SSM3582_2) */
#define REG_VBAT_SSM3582_2_ADDR                   0x1A
#define REG_VBAT_SSM3582_2_BYTE                   0
#define REG_VBAT_SSM3582_2_VALUE                  0xA5

/* TEMP  - Registers (SSM3582_2) */
#define REG_TEMP_SSM3582_2_ADDR                   0x1B
#define REG_TEMP_SSM3582_2_BYTE                   0
#define REG_TEMP_SSM3582_2_VALUE                  0x51

/* SOFT_RESET  - Registers (SSM3582_2) */
#define REG_SOFT_RESET_SSM3582_2_ADDR             0x1C
#define REG_SOFT_RESET_SSM3582_2_BYTE             1
#define REG_SOFT_RESET_SSM3582_2_VALUE            0x0


/*
 *
 * Control register's field descriptions
 *
 */

/* VENDOR_ID (SSM3582_2) */
#define R0_VENDOR_ID_VENDOR_SSM3582_2             0x41   /* 01000001b	[7:0] */
#define R0_VENDOR_ID_VENDOR_SSM3582_2_MASK        0xFF
#define R0_VENDOR_ID_VENDOR_SSM3582_2_SHIFT       0

/* DEVICE_ID1 (SSM3582_2) */
#define R1_DEVICE_ID1_DEVICE1_SSM3582_2           0x35   /* 00110101b	[7:0] */
#define R1_DEVICE_ID1_DEVICE1_SSM3582_2_MASK      0xFF
#define R1_DEVICE_ID1_DEVICE1_SSM3582_2_SHIFT     0

/* DEVICE_ID2 (SSM3582_2) */
#define R2_DEVICE_ID2_DEVICE2_SSM3582_2           0x82   /* 10000010b	[7:0] */
#define R2_DEVICE_ID2_DEVICE2_SSM3582_2_MASK      0xFF
#define R2_DEVICE_ID2_DEVICE2_SSM3582_2_SHIFT     0

/* REVISION (SSM3582_2) */
#define R3_REVISION_REV_SSM3582_2                 0x01   /* 00000001b	[7:0] */
#define R3_REVISION_REV_SSM3582_2_MASK            0xFF
#define R3_REVISION_REV_SSM3582_2_SHIFT           0

/* POWER_CTRL (SSM3582_2) */
#define R4_POWER_CTRL_SPWDN_SSM3582_2             0x0    /* 0b	[0] */
#define R4_POWER_CTRL_L_PWDN_SSM3582_2            0x0    /* 0b	[2] */
#define R4_POWER_CTRL_R_PWDN_SSM3582_2            0x0    /* 0b	[3] */
#define R4_POWER_CTRL_MONO_SSM3582_2              0x0    /* 0b	[4] */
#define R4_POWER_CTRL_TEMP_PWDN_SSM3582_2         0x0    /* 0b	[5] */
#define R4_POWER_CTRL_APWDN_EN_SSM3582_2          0x1    /* 1b	[7] */
#define R4_POWER_CTRL_SPWDN_SSM3582_2_MASK        0x1
#define R4_POWER_CTRL_SPWDN_SSM3582_2_SHIFT       0
#define R4_POWER_CTRL_L_PWDN_SSM3582_2_MASK       0x4
#define R4_POWER_CTRL_L_PWDN_SSM3582_2_SHIFT      2
#define R4_POWER_CTRL_R_PWDN_SSM3582_2_MASK       0x8
#define R4_POWER_CTRL_R_PWDN_SSM3582_2_SHIFT      3
#define R4_POWER_CTRL_MONO_SSM3582_2_MASK         0x10
#define R4_POWER_CTRL_MONO_SSM3582_2_SHIFT        4
#define R4_POWER_CTRL_TEMP_PWDN_SSM3582_2_MASK    0x20
#define R4_POWER_CTRL_TEMP_PWDN_SSM3582_2_SHIFT   5
#define R4_POWER_CTRL_APWDN_EN_SSM3582_2_MASK     0x80
#define R4_POWER_CTRL_APWDN_EN_SSM3582_2_SHIFT    7

/* AMP_DAC_CTRL (SSM3582_2) */
#define R5_AMP_DAC_CTRL_ANA_GAIN_SSM3582_2        0x2    /* 10b	[1:0] */
#define R5_AMP_DAC_CTRL_EDGE_SSM3582_2            0x1    /* 1b	[3] */
#define R5_AMP_DAC_CTRL_DAC_POL_L_SSM3582_2       0x0    /* 0b	[4] */
#define R5_AMP_DAC_CTRL_DAC_POL_R_SSM3582_2       0x0    /* 0b	[5] */
#define R5_AMP_DAC_CTRL_DAC_LPM_SSM3582_2         0x1    /* 1b	[7] */
#define R5_AMP_DAC_CTRL_ANA_GAIN_SSM3582_2_MASK   0x3
#define R5_AMP_DAC_CTRL_ANA_GAIN_SSM3582_2_SHIFT  0
#define R5_AMP_DAC_CTRL_EDGE_SSM3582_2_MASK       0x8
#define R5_AMP_DAC_CTRL_EDGE_SSM3582_2_SHIFT      3
#define R5_AMP_DAC_CTRL_DAC_POL_L_SSM3582_2_MASK  0x10
#define R5_AMP_DAC_CTRL_DAC_POL_L_SSM3582_2_SHIFT 4
#define R5_AMP_DAC_CTRL_DAC_POL_R_SSM3582_2_MASK  0x20
#define R5_AMP_DAC_CTRL_DAC_POL_R_SSM3582_2_SHIFT 5
#define R5_AMP_DAC_CTRL_DAC_LPM_SSM3582_2_MASK    0x80
#define R5_AMP_DAC_CTRL_DAC_LPM_SSM3582_2_SHIFT   7

/* DAC_CTRL (SSM3582_2) */
#define R6_DAC_CTRL_DAC_FS_SSM3582_2              0x2    /* 010b	[2:0] */
#define R6_DAC_CTRL_DAC_HPF_SSM3582_2             0x0    /* 0b	[4] */
#define R6_DAC_CTRL_DAC_MUTE_L_SSM3582_2          0x0    /* 0b	[5] */
#define R6_DAC_CTRL_DAC_MUTE_R_SSM3582_2          0x0    /* 0b	[6] */
#define R6_DAC_CTRL_DAC_HV_SSM3582_2              0x0    /* 0b	[7] */
#define R6_DAC_CTRL_DAC_FS_SSM3582_2_MASK         0x7
#define R6_DAC_CTRL_DAC_FS_SSM3582_2_SHIFT        0
#define R6_DAC_CTRL_DAC_HPF_SSM3582_2_MASK        0x10
#define R6_DAC_CTRL_DAC_HPF_SSM3582_2_SHIFT       4
#define R6_DAC_CTRL_DAC_MUTE_L_SSM3582_2_MASK     0x20
#define R6_DAC_CTRL_DAC_MUTE_L_SSM3582_2_SHIFT    5
#define R6_DAC_CTRL_DAC_MUTE_R_SSM3582_2_MASK     0x40
#define R6_DAC_CTRL_DAC_MUTE_R_SSM3582_2_SHIFT    6
#define R6_DAC_CTRL_DAC_HV_SSM3582_2_MASK         0x80
#define R6_DAC_CTRL_DAC_HV_SSM3582_2_SHIFT        7

/* VOL_LEFT_CTRL (SSM3582_2) */
#define R7_VOL_LEFT_CTRL_VOL_L_SSM3582_2          0x40   /* 01000000b	[7:0] */
#define R7_VOL_LEFT_CTRL_VOL_L_SSM3582_2_MASK     0xFF
#define R7_VOL_LEFT_CTRL_VOL_L_SSM3582_2_SHIFT    0

/* VOL_RIGHT_CTRL (SSM3582_2) */
#define R8_VOL_RIGHT_CTRL_VOL_R_SSM3582_2         0x40   /* 01000000b	[7:0] */
#define R8_VOL_RIGHT_CTRL_VOL_R_SSM3582_2_MASK    0xFF
#define R8_VOL_RIGHT_CTRL_VOL_R_SSM3582_2_SHIFT   0

/* SAI_CTRL1 (SSM3582_2) */
#define R9_SAI_CTRL1_SAI_MODE_SSM3582_2           0x0    /* 0b	[0] */
#define R9_SAI_CTRL1_SDATA_FMT_SSM3582_2          0x0    /* 0b	[1] */
#define R9_SAI_CTRL1_FSYNC_MODE_SSM3582_2         0x0    /* 0b	[2] */
#define R9_SAI_CTRL1_TDM_BCLKS_SSM3582_2          0x2    /* 010b	[5:3] */
#define R9_SAI_CTRL1_BCLK_POL_SSM3582_2           0x0    /* 0b	[6] */
#define R9_SAI_CTRL1_SAI_MODE_SSM3582_2_MASK      0x1
#define R9_SAI_CTRL1_SAI_MODE_SSM3582_2_SHIFT     0
#define R9_SAI_CTRL1_SDATA_FMT_SSM3582_2_MASK     0x2
#define R9_SAI_CTRL1_SDATA_FMT_SSM3582_2_SHIFT    1
#define R9_SAI_CTRL1_FSYNC_MODE_SSM3582_2_MASK    0x4
#define R9_SAI_CTRL1_FSYNC_MODE_SSM3582_2_SHIFT   2
#define R9_SAI_CTRL1_TDM_BCLKS_SSM3582_2_MASK     0x38
#define R9_SAI_CTRL1_TDM_BCLKS_SSM3582_2_SHIFT    3
#define R9_SAI_CTRL1_BCLK_POL_SSM3582_2_MASK      0x40
#define R9_SAI_CTRL1_BCLK_POL_SSM3582_2_SHIFT     6

/* SAI_CTRL2 (SSM3582_2) */
#define R10_SAI_CTRL2_AUTO_SLOT_SSM3582_2         0x1    /* 1b	[0] */
#define R10_SAI_CTRL2_VOL_LINK_SSM3582_2          0x1    /* 1b	[1] */
#define R10_SAI_CTRL2_CLIP_LINK_SSM3582_2         0x1    /* 1b	[2] */
#define R10_SAI_CTRL2_VOL_ZC_ONLY_SSM3582_2       0x0    /* 0b	[3] */
#define R10_SAI_CTRL2_DATA_WIDTH_SSM3582_2        0x0    /* 0b	[4] */
#define R10_SAI_CTRL2_SDATA_EDGE_SSM3582_2        0x0    /* 0b	[7] */
#define R10_SAI_CTRL2_AUTO_SLOT_SSM3582_2_MASK    0x1
#define R10_SAI_CTRL2_AUTO_SLOT_SSM3582_2_SHIFT   0
#define R10_SAI_CTRL2_VOL_LINK_SSM3582_2_MASK     0x2
#define R10_SAI_CTRL2_VOL_LINK_SSM3582_2_SHIFT    1
#define R10_SAI_CTRL2_CLIP_LINK_SSM3582_2_MASK    0x4
#define R10_SAI_CTRL2_CLIP_LINK_SSM3582_2_SHIFT   2
#define R10_SAI_CTRL2_VOL_ZC_ONLY_SSM3582_2_MASK  0x8
#define R10_SAI_CTRL2_VOL_ZC_ONLY_SSM3582_2_SHIFT 3
#define R10_SAI_CTRL2_DATA_WIDTH_SSM3582_2_MASK   0x10
#define R10_SAI_CTRL2_DATA_WIDTH_SSM3582_2_SHIFT  4
#define R10_SAI_CTRL2_SDATA_EDGE_SSM3582_2_MASK   0x80
#define R10_SAI_CTRL2_SDATA_EDGE_SSM3582_2_SHIFT  7

/* SLOT_LEFT_CTRL (SSM3582_2) */
#define R11_SLOT_LEFT_CTRL_TDM_SLOT_L_SSM3582_2   0x0    /* 00000b	[4:0] */
#define R11_SLOT_LEFT_CTRL_TDM_SLOT_L_SSM3582_2_MASK 0x1F
#define R11_SLOT_LEFT_CTRL_TDM_SLOT_L_SSM3582_2_SHIFT 0

/* SLOT_RIGHT_CTRL (SSM3582_2) */
#define R12_SLOT_RIGHT_CTRL_TDM_SLOT_R_SSM3582_2  0x1    /* 00001b	[4:0] */
#define R12_SLOT_RIGHT_CTRL_TDM_SLOT_R_SSM3582_2_MASK 0x1F
#define R12_SLOT_RIGHT_CTRL_TDM_SLOT_R_SSM3582_2_SHIFT 0

/* LIM_LEFT_CTRL1 (SSM3582_2) */
#define R13_LIM_LEFT_CTRL1_LIM_EN_L_SSM3582_2     0x0    /* 00b	[1:0] */
#define R13_LIM_LEFT_CTRL1_VBAT_TRACK_L_SSM3582_2 0x0    /* 0b	[2] */
#define R13_LIM_LEFT_CTRL1_LIM_ATR_L_SSM3582_2    0x2    /* 10b	[5:4] */
#define R13_LIM_LEFT_CTRL1_LIM_RRT_L_SSM3582_2    0x2    /* 10b	[7:6] */
#define R13_LIM_LEFT_CTRL1_LIM_EN_L_SSM3582_2_MASK 0x3
#define R13_LIM_LEFT_CTRL1_LIM_EN_L_SSM3582_2_SHIFT 0
#define R13_LIM_LEFT_CTRL1_VBAT_TRACK_L_SSM3582_2_MASK 0x4
#define R13_LIM_LEFT_CTRL1_VBAT_TRACK_L_SSM3582_2_SHIFT 2
#define R13_LIM_LEFT_CTRL1_LIM_ATR_L_SSM3582_2_MASK 0x30
#define R13_LIM_LEFT_CTRL1_LIM_ATR_L_SSM3582_2_SHIFT 4
#define R13_LIM_LEFT_CTRL1_LIM_RRT_L_SSM3582_2_MASK 0xC0
#define R13_LIM_LEFT_CTRL1_LIM_RRT_L_SSM3582_2_SHIFT 6

/* LIM_LEFT_CTRL2 (SSM3582_2) */
#define R14_LIM_LEFT_CTRL2_SLOPE_L_SSM3582_2      0x1    /* 01b	[1:0] */
#define R14_LIM_LEFT_CTRL2_LIM_THRES_L_SSM3582_2  0xA    /* 01010b	[7:3] */
#define R14_LIM_LEFT_CTRL2_SLOPE_L_SSM3582_2_MASK 0x3
#define R14_LIM_LEFT_CTRL2_SLOPE_L_SSM3582_2_SHIFT 0
#define R14_LIM_LEFT_CTRL2_LIM_THRES_L_SSM3582_2_MASK 0xF8
#define R14_LIM_LEFT_CTRL2_LIM_THRES_L_SSM3582_2_SHIFT 3

/* LIM_LEFT_CTRL3 (SSM3582_2) */
#define R15_LIM_LEFT_CTRL3_VBAT_INF_L_SSM3582_2   0x22   /* 00100010b	[7:0] */
#define R15_LIM_LEFT_CTRL3_VBAT_INF_L_SSM3582_2_MASK 0xFF
#define R15_LIM_LEFT_CTRL3_VBAT_INF_L_SSM3582_2_SHIFT 0

/* LIM_RIGHT_CTRL1 (SSM3582_2) */
#define R16_LIM_RIGHT_CTRL1_LIM_EN_R_SSM3582_2    0x0    /* 00b	[1:0] */
#define R16_LIM_RIGHT_CTRL1_VBAT_TRACK_R_SSM3582_2 0x0   /* 0b	[2] */
#define R16_LIM_RIGHT_CTRL1_LIM_LINK_SSM3582_2    0x1    /* 1b	[3] */
#define R16_LIM_RIGHT_CTRL1_LIM_ATR_R_SSM3582_2   0x2    /* 10b	[5:4] */
#define R16_LIM_RIGHT_CTRL1_LIM_RRT_R_SSM3582_2   0x2    /* 10b	[7:6] */
#define R16_LIM_RIGHT_CTRL1_LIM_EN_R_SSM3582_2_MASK 0x3
#define R16_LIM_RIGHT_CTRL1_LIM_EN_R_SSM3582_2_SHIFT 0
#define R16_LIM_RIGHT_CTRL1_VBAT_TRACK_R_SSM3582_2_MASK 0x4
#define R16_LIM_RIGHT_CTRL1_VBAT_TRACK_R_SSM3582_2_SHIFT 2
#define R16_LIM_RIGHT_CTRL1_LIM_LINK_SSM3582_2_MASK 0x8
#define R16_LIM_RIGHT_CTRL1_LIM_LINK_SSM3582_2_SHIFT 3
#define R16_LIM_RIGHT_CTRL1_LIM_ATR_R_SSM3582_2_MASK 0x30
#define R16_LIM_RIGHT_CTRL1_LIM_ATR_R_SSM3582_2_SHIFT 4
#define R16_LIM_RIGHT_CTRL1_LIM_RRT_R_SSM3582_2_MASK 0xC0
#define R16_LIM_RIGHT_CTRL1_LIM_RRT_R_SSM3582_2_SHIFT 6

/* LIM_RIGHT_CTRL2 (SSM3582_2) */
#define R17_LIM_RIGHT_CTRL2_SLOPE_R_SSM3582_2     0x1    /* 01b	[1:0] */
#define R17_LIM_RIGHT_CTRL2_LIM_THRES_R_SSM3582_2 0xA    /* 01010b	[7:3] */
#define R17_LIM_RIGHT_CTRL2_SLOPE_R_SSM3582_2_MASK 0x3
#define R17_LIM_RIGHT_CTRL2_SLOPE_R_SSM3582_2_SHIFT 0
#define R17_LIM_RIGHT_CTRL2_LIM_THRES_R_SSM3582_2_MASK 0xF8
#define R17_LIM_RIGHT_CTRL2_LIM_THRES_R_SSM3582_2_SHIFT 3

/* LIM_RIGHT_CTRL3 (SSM3582_2) */
#define R18_LIM_RIGHT_CTRL3_VBAT_INF_R_SSM3582_2  0x22   /* 00100010b	[7:0] */
#define R18_LIM_RIGHT_CTRL3_VBAT_INF_R_SSM3582_2_MASK 0xFF
#define R18_LIM_RIGHT_CTRL3_VBAT_INF_R_SSM3582_2_SHIFT 0

/* CLIP_LEFT_CTRL (SSM3582_2) */
#define R19_CLIP_LEFT_CTRL_DAC_CLIP_L_SSM3582_2   0xFF   /* 11111111b	[7:0] */
#define R19_CLIP_LEFT_CTRL_DAC_CLIP_L_SSM3582_2_MASK 0xFF
#define R19_CLIP_LEFT_CTRL_DAC_CLIP_L_SSM3582_2_SHIFT 0

/* CLIP_RIGHT_CTRL (SSM3582_2) */
#define R20_CLIP_RIGHT_CTRL_DAC_CLIP_R_SSM3582_2  0xFF   /* 11111111b	[7:0] */
#define R20_CLIP_RIGHT_CTRL_DAC_CLIP_R_SSM3582_2_MASK 0xFF
#define R20_CLIP_RIGHT_CTRL_DAC_CLIP_R_SSM3582_2_SHIFT 0

/* FAULT_CTRL1 (SSM3582_2) */
#define R21_FAULT_CTRL1_OTW_GAIN_L_SSM3582_2      0x0    /* 00b	[1:0] */
#define R21_FAULT_CTRL1_OTW_GAIN_R_SSM3582_2      0x0    /* 00b	[5:4] */
#define R21_FAULT_CTRL1_OTW_GAIN_L_SSM3582_2_MASK 0x3
#define R21_FAULT_CTRL1_OTW_GAIN_L_SSM3582_2_SHIFT 0
#define R21_FAULT_CTRL1_OTW_GAIN_R_SSM3582_2_MASK 0x30
#define R21_FAULT_CTRL1_OTW_GAIN_R_SSM3582_2_SHIFT 4

/* FAULT_CTRL2 (SSM3582_2) */
#define R22_FAULT_CTRL2_ARCV_OC_SSM3582_2         0x0    /* 0b	[0] */
#define R22_FAULT_CTRL2_ARCV_OT_SSM3582_2         0x0    /* 0b	[1] */
#define R22_FAULT_CTRL2_ARCV_UV_SSM3582_2         0x0    /* 0b	[2] */
#define R22_FAULT_CTRL2_MAX_AR_SSM3582_2          0x3    /* 11b	[5:4] */
#define R22_FAULT_CTRL2_MRCV_SSM3582_2            0x0    /* 0b	[7] */
#define R22_FAULT_CTRL2_ARCV_OC_SSM3582_2_MASK    0x1
#define R22_FAULT_CTRL2_ARCV_OC_SSM3582_2_SHIFT   0
#define R22_FAULT_CTRL2_ARCV_OT_SSM3582_2_MASK    0x2
#define R22_FAULT_CTRL2_ARCV_OT_SSM3582_2_SHIFT   1
#define R22_FAULT_CTRL2_ARCV_UV_SSM3582_2_MASK    0x4
#define R22_FAULT_CTRL2_ARCV_UV_SSM3582_2_SHIFT   2
#define R22_FAULT_CTRL2_MAX_AR_SSM3582_2_MASK     0x30
#define R22_FAULT_CTRL2_MAX_AR_SSM3582_2_SHIFT    4
#define R22_FAULT_CTRL2_MRCV_SSM3582_2_MASK       0x80
#define R22_FAULT_CTRL2_MRCV_SSM3582_2_SHIFT      7

/* STATUS1 (SSM3582_2) */
#define R23_STATUS1_OTW_SSM3582_2                 0x0    /* 0b	[0] */
#define R23_STATUS1_OTF_SSM3582_2                 0x0    /* 0b	[1] */
#define R23_STATUS1_UVLO_VREG_SSM3582_2           0x0    /* 0b	[6] */
#define R23_STATUS1_UVLO_PVDD_SSM3582_2           0x0    /* 0b	[7] */
#define R23_STATUS1_OTW_SSM3582_2_MASK            0x1
#define R23_STATUS1_OTW_SSM3582_2_SHIFT           0
#define R23_STATUS1_OTF_SSM3582_2_MASK            0x2
#define R23_STATUS1_OTF_SSM3582_2_SHIFT           1
#define R23_STATUS1_UVLO_VREG_SSM3582_2_MASK      0x40
#define R23_STATUS1_UVLO_VREG_SSM3582_2_SHIFT     6
#define R23_STATUS1_UVLO_PVDD_SSM3582_2_MASK      0x80
#define R23_STATUS1_UVLO_PVDD_SSM3582_2_SHIFT     7

/* STATUS2 (SSM3582_2) */
#define R24_STATUS2_BAT_WARN_L_SSM3582_2          0x0    /* 0b	[0] */
#define R24_STATUS2_AMP_OC_L_SSM3582_2            0x0    /* 0b	[1] */
#define R24_STATUS2_CLIP_L_SSM3582_2              0x0    /* 0b	[2] */
#define R24_STATUS2_LIM_EG_L_SSM3582_2            0x0    /* 0b	[3] */
#define R24_STATUS2_BAT_WARN_R_SSM3582_2          0x0    /* 0b	[4] */
#define R24_STATUS2_AMP_OC_R_SSM3582_2            0x0    /* 0b	[5] */
#define R24_STATUS2_CLIP_R_SSM3582_2              0x0    /* 0b	[6] */
#define R24_STATUS2_LIM_EG_R_SSM3582_2            0x0    /* 0b	[7] */
#define R24_STATUS2_BAT_WARN_L_SSM3582_2_MASK     0x1
#define R24_STATUS2_BAT_WARN_L_SSM3582_2_SHIFT    0
#define R24_STATUS2_AMP_OC_L_SSM3582_2_MASK       0x2
#define R24_STATUS2_AMP_OC_L_SSM3582_2_SHIFT      1
#define R24_STATUS2_CLIP_L_SSM3582_2_MASK         0x4
#define R24_STATUS2_CLIP_L_SSM3582_2_SHIFT        2
#define R24_STATUS2_LIM_EG_L_SSM3582_2_MASK       0x8
#define R24_STATUS2_LIM_EG_L_SSM3582_2_SHIFT      3
#define R24_STATUS2_BAT_WARN_R_SSM3582_2_MASK     0x10
#define R24_STATUS2_BAT_WARN_R_SSM3582_2_SHIFT    4
#define R24_STATUS2_AMP_OC_R_SSM3582_2_MASK       0x20
#define R24_STATUS2_AMP_OC_R_SSM3582_2_SHIFT      5
#define R24_STATUS2_CLIP_R_SSM3582_2_MASK         0x40
#define R24_STATUS2_CLIP_R_SSM3582_2_SHIFT        6
#define R24_STATUS2_LIM_EG_R_SSM3582_2_MASK       0x80
#define R24_STATUS2_LIM_EG_R_SSM3582_2_SHIFT      7

/* VBAT (SSM3582_2) */
#define R25_VBAT_VBAT_SSM3582_2                   0xA5   /* 10100101b	[7:0] */
#define R25_VBAT_VBAT_SSM3582_2_MASK              0xFF
#define R25_VBAT_VBAT_SSM3582_2_SHIFT             0

/* TEMP (SSM3582_2) */
#define R26_TEMP_TEMP_SSM3582_2                   0x51   /* 01010001b	[7:0] */
#define R26_TEMP_TEMP_SSM3582_2_MASK              0xFF
#define R26_TEMP_TEMP_SSM3582_2_SHIFT             0

/* SOFT_RESET (SSM3582_2) */
#define R27_SOFT_RESET_S_RST_SSM3582_2            0x0    /* 0b	[0] */
#define R27_SOFT_RESET_S_RST_SSM3582_2_MASK       0x1
#define R27_SOFT_RESET_S_RST_SSM3582_2_SHIFT      0

#endif
