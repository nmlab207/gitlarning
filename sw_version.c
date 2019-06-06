#include "sw_version.h"

const uint8_t sw_version[10] __attribute__ ((at(0x20000))) = \
					AUTO_GENERATE_SOFTWARE_VERSION(1, 0);	

void get_software_version(uint8_t *sw_version_buff, uint8_t *sw_version_len) {
	*sw_version_len = sizeof(sw_version);
		
	memcpy(sw_version_buff, sw_version, sizeof(sw_version));	
}

void get_build_time(uint8_t *build_time) {
	memcpy(build_time, &sw_version[2], (sizeof(sw_version)-2));	
}

void x(void) {
	
	
}

void y(void) {
	
	
}

void z(void) {
	
	
}