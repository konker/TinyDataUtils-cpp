/**
 * DataBundle.cpp
 * A general purpose map
 *
 * Author: Konrad Markus <konker@luxvelocitas.com>
 */
#include <stdlib.h>
#include <string.h>
#include <vector>

#include <DataBundle.h>

using namespace datautils;

DataBundle::DataBundle()
{ /*[NOOP]*/ }

DataBundle::~DataBundle()
{ /*[NOOP]*/ }

DataBundle::DataBundle(const DataBundle& rhs)
{
    mMap = rhs.mMap;
}

DataBundle& DataBundle::operator=(const DataBundle& rhs)
{
    mMap = rhs.mMap;
}

int DataBundle::size()
{
    return mMap.size();
}

bool DataBundle::isEmpty()
{
    return mMap.empty();
}

void DataBundle::clear()
{
    mMap.clear();
}

bool DataBundle::containsKey(std::string key)
{
    return (mMap.count(key) > 0);
}

std::map<std::string, variant_t>::iterator DataBundle::begin()
{
    return mMap.begin();
}

std::map<std::string, variant_t>::iterator DataBundle::end()
{
    return mMap.end();
}

std::string* DataBundle::getKeyArray()
{
    std::vector<std::string> *ret = new std::vector<std::string>();
    for(std::map<std::string,variant_t>::iterator it=mMap.begin(); it!=mMap.end(); ++it) {
        ret->push_back(it->first);
    }

    //[XXX: this returns a string* because vectors
    // are guaranteed to store vaues contiguously]
    return &(*ret)[0];
}

std::string DataBundle::getKeyAt(int index)
{
    int j = 0;
    for(std::map<std::string,variant_t>::iterator it=mMap.begin(); it!=mMap.end(); ++it) {
        if (j == index) {
            return it->first;
        }
    }
    return "";
}

void DataBundle::remove(std::string key)
{
    mMap.erase(key);
}

variant_t DataBundle::get(std::string key)
{
    return mMap[key];
}

void DataBundle::putBool(std::string key, bool value)
{
    variant_t _val;
    _val.b = value;
    _val.type = VARIANT_TYPE_BOOL;
    mMap[key] = _val;
}

void DataBundle::putChar(std::string key, char value)
{
    variant_t _val;
    _val.c = value;
    _val.type = VARIANT_TYPE_CHAR;
    mMap[key] = _val;
}

void DataBundle::putShort(std::string key, short value)
{
    variant_t _val;
    _val.s = value;
    _val.type = VARIANT_TYPE_SHORT;
    mMap[key] = _val;
}

void DataBundle::putInt(std::string key, int value)
{
    variant_t _val;
    _val.i = value;
    _val.type = VARIANT_TYPE_INT;
    mMap[key] = _val;
}

void DataBundle::putLong(std::string key, long value)
{
    variant_t _val;
    _val.l = value;
    _val.type = VARIANT_TYPE_LONG;
    mMap[key] = _val;
}

void DataBundle::putFloat(std::string key, float value)
{
    variant_t _val;
    _val.f = value;
    _val.type = VARIANT_TYPE_FLOAT;
    mMap[key] = _val;
}

void DataBundle::putDouble(std::string key, double value)
{
    variant_t _val;
    _val.d = value;
    _val.type = VARIANT_TYPE_DOUBLE;
    mMap[key] = _val;
}

void DataBundle::putString(std::string key, std::string value)
{
    // First clear any existing string key
    if (containsKey(key)) {
        variant_t _oldval = get(key);
        free((void*)_oldval.x);
    }

    variant_t _val;
    _val.x = strdup(value.c_str());
    _val.type = VARIANT_TYPE_STRING;
    mMap[key] = _val;
}

bool DataBundle::getBool(std::string key)
{
    return mMap[key].b;
}

char DataBundle::getChar(std::string key)
{
    return mMap[key].c;
}

short DataBundle::getShort(std::string key)
{
    return mMap[key].s;
}

int DataBundle::getInt(std::string key)
{
    return mMap[key].i;
}

long DataBundle::getLong(std::string key)
{
    return mMap[key].l;
}

float DataBundle::getFloat(std::string key)
{
    return mMap[key].f;
}

double DataBundle::getDouble(std::string key)
{
    return mMap[key].d;
}

std::string DataBundle::getString(std::string key)
{
    return mMap[key].x;
}

