/*
   DataBundle_extern.cpp
*/
#include <DataBundle_extern.h>
#include <DataBundle.h>

#ifdef __cplusplus
extern "C" {
#endif

const DataBundle* DataBundle_create()
{
    return (const DataBundle*)(new datautils::DataBundle());
}

void DataBundle_destroy(const DataBundle* thiz)
{
    delete (datautils::DataBundle*)thiz;
}

int DataBundle_size(const DataBundle *thiz)
{
    return ((datautils::DataBundle*)thiz)->size();
}

datautils_bool_t DataBundle_isEmpty(const DataBundle *thiz)
{
    return ((datautils::DataBundle*)thiz)->isEmpty();
}

void DataBundle_clear(const DataBundle *thiz)
{
    ((datautils::DataBundle*)thiz)->clear();
}

datautils_bool_t DataBundle_containsKey(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->containsKey(key);
}

char const* DataBundle_getKeyAt(const DataBundle* thiz, int index)
{
    return ((datautils::DataBundle*)thiz)->getKeyAt(index).c_str();
}

void DataBundle_remove(const DataBundle *thiz, const char *key)
{
    ((datautils::DataBundle*)thiz)->remove(key);
}

variant_t DataBundle_get(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->get(key);
}

void DataBundle_putBool(const DataBundle *thiz, const char *key, datautils_bool_t value)
{
    ((datautils::DataBundle*)thiz)->putBool(key, value);
}

void DataBundle_putChar(const DataBundle *thiz, const char *key, char value)
{
    ((datautils::DataBundle*)thiz)->putChar(key, value);
}

void DataBundle_putShort(const DataBundle *thiz, const char *key, short value)
{
    ((datautils::DataBundle*)thiz)->putShort(key, value);
}

void DataBundle_putInt(const DataBundle *thiz, const char *key, int value)
{
    ((datautils::DataBundle*)thiz)->putInt(key, value);
}

void DataBundle_putLong(const DataBundle *thiz, const char *key, long value)
{
    ((datautils::DataBundle*)thiz)->putLong(key, value);
}

void DataBundle_putFloat(const DataBundle *thiz, const char *key, float value)
{
    ((datautils::DataBundle*)thiz)->putFloat(key, value);
}

void DataBundle_putDouble(const DataBundle *thiz, const char *key, double value)
{
    ((datautils::DataBundle*)thiz)->putDouble(key, value);
}

void DataBundle_putString(const DataBundle *thiz, const char *key, const char* value)
{
    ((datautils::DataBundle*)thiz)->putString(std::string(key), std::string(value));
}

datautils_bool_t DataBundle_getBool(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getBool(key);
}

char DataBundle_getChar(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getChar(key);
}

short DataBundle_getShort(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getShort(key);
}

int DataBundle_getInt(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getInt(key);
}

long DataBundle_getLong(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getLong(key);
}

float DataBundle_getFloat(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getFloat(key);
}

double DataBundle_getDouble(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getDouble(key);
}

const char* DataBundle_getString(const DataBundle *thiz, const char *key)
{
    return ((datautils::DataBundle*)thiz)->getString(key).c_str();
}

#ifdef __cplusplus
}
#endif

