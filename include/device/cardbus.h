/* (c) 2005 Linux Networx GPL see COPYING for details */
/*
	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	
	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

*/

#ifndef DEVICE_CARDBUS_H
#define DEVICE_CARDBUS_H

#include <device/device.h>

void cardbus_read_resources(struct device *dev);
unsigned int cardbus_scan_bus(struct bus *bus, 
	unsigned min_devfn, unsigned max_devfn, unsigned int max);
unsigned int cardbus_scan_bridge(struct device *dev, unsigned int max);
void cardbus_enable_resources(struct device *dev);

extern struct device_operations default_cardbus_ops_bus;

#endif /* DEVICE_CARDBUS_H */
