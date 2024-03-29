/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef MSM_CSID_3_5_HWREG_H
#define MSM_CSID_3_5_HWREG_H

#include <sensor/csid/msm_csid.h>

uint8_t legacy_m_csid_lane_assign_v3_5[PHY_LANE_MAX] = {0, 4, 1, 2, 3};

struct csid_reg_parms_t legacy_m_csid_v3_5 = {
	/* MIPI	CSID registers */
	0x0,
	0x4,
	0x8,
	0x10,
	0x14,
	0x18,
	0x1C,
	0x20,
	0x24,
	0x64,
	0x68,
	0x6C,
	0x70,
	0x74,
	0x78,
	0x7C,
	0x80,
	0x88,
	0x8C,
	0x90,
	0x94,
	0x98,
	0x9C,
	0xA0,
	0xA8,
	0xAC,
	0xB4,
	0xB8,
	0xBC,
	11,
	0x7FFF,
	0x4,
	17,
	0x30050000,
	0xC,
	0x84,
	0xA4,
	0x7f010800,
	20,
	17,
	16,
};
#endif
