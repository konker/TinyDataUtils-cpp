#ifndef _DATAUTILS_DATABUNDLE_EXTERN_H
#define _DATAUTILS_DATABUNDLE_EXTERN_H

/**
 * DataBundle_extern.h
 *
 * Author: Konrad Markus <konker@luxvelocitas.com>
 */


#ifdef __cplusplus
extern "C" {
#endif

#define datautils_bool_t unsigned short
#define datautils_bool_true 1
#define datutils_bool_false 0

typedef struct DataBundle DataBundle;

#include <DataBundle_common.h>

const DataBundle* DataBundle_create();
void DataBundle_destroy(const DataBundle*);

int DataBundle_size(const DataBundle*);
datautils_bool_t DataBundle_isEmpty(const DataBundle*);
void DataBundle_clear(const DataBundle*);
datautils_bool_t DataBundle_containsKey(const DataBundle*, const char*);

char const* DataBundle_getKeyAt(const DataBundle*, int);

void DataBundle_remove(const DataBundle*, const char*);
variant_t DataBundle_get(const DataBundle*, const char*);

void DataBundle_putBool(const DataBundle*, const char*, datautils_bool_t);
void DataBundle_putChar(const DataBundle*, const char*, char);
void DataBundle_putShort(const DataBundle*, const char*, short);
void DataBundle_putInt(const DataBundle*, const char*, int);
void DataBundle_putLong(const DataBundle*, const char*, long);
void DataBundle_putFloat(const DataBundle*, const char*, float);
void DataBundle_putDouble(const DataBundle*, const char*, double);
void DataBundle_putString(const DataBundle*, const char*, const char*);

datautils_bool_t DataBundle_getBool(const DataBundle*, const char*);
char DataBundle_getChar(const DataBundle*, const char*);
short DataBundle_getShort(const DataBundle*, const char*);
int DataBundle_getInt(const DataBundle*, const char*);
long DataBundle_getLong(const DataBundle*, const char*);
float DataBundle_getFloat(const DataBundle*, const char*);
double DataBundle_getDouble(const DataBundle*, const char*);
const char* DataBundle_getString(const DataBundle*, const char*);

#ifdef __cplusplus
}
#endif

#endif  /* _DATAUTILS_DATABUNDLE_EXTERN_H */

