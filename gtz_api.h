/*
 * gtz_api.h
 *
 *  Created on: 2018年3月16日
 *      Author: ligen
 */

#ifndef SRC_SDK_SUPPORT_GTZ_API_H_
#define SRC_SDK_SUPPORT_GTZ_API_H_

#include <stdio.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"{
#endif

struct gtz_file;
typedef struct gtz_file * gtzFile;

int is_gtz_file(const char* filename);

struct gtz_file* gtz_open(const char* filename, const char* rbin_path ,int32_t concurrency);

ssize_t gtz_read(struct gtz_file* f_gtz, char* buf, size_t read_bytes);

void gtz_close(struct gtz_file* f_gtz);

#ifdef __cplusplus
}
#endif

#endif /* SRC_SDK_SUPPORT_GTZ_API_H_ */

