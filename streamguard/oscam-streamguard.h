// 创建文件：src/streamguard/oscam-streamguard.h
#ifndef OSCAM_STREAMGUARD_H
#define OSCAM_STREAMGUARD_H

#ifdef STREAMGUARD_ENABLED
void generate_initial_key(uint8_t *key_out);
#endif

#endif
