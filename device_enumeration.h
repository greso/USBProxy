/*
 * Copyright 2013 Dominic Spill
 * Copyright 2013 Adam Stasiak
 *
 * This file is part of USB-MitM.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */
#ifndef _MITM_Device_Enumeration_
#define _MITM_Device_Enumeration_

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <sys/poll.h>
#include <libusb-1.0/libusb.h>

#include <linux/types.h>
#include <linux/usb/gadgetfs.h>
#include <stdio.h>
#include <memory.h>
#include <asm/byteorder.h>
#include <stdlib.h>

int open_single_nonhub_device(libusb_device_handle** devh);
void print_device_info(libusb_device_handle* devh);
libusb_device_handle* get_device_handle(__u16 vendorID,__u16 productID);

#endif