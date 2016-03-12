#ifndef _DATA_UTILS_DATABUNDLE_H_
#define _DATA_UTILS_DATABUNDLE_H_

/**
 * DataBundle.h
 * A general purpose map
 *
 * Author: Konrad Markus <konker@luxvelocitas.com>
 */
#include <map>
#include <string>
#include <DataBundle_common.h>

namespace datautils
{
    class DataBundle
    {
    private:
        std::map<std::string, variant_t> mMap;

    public:
        DataBundle();
        ~DataBundle();
        DataBundle(const DataBundle&);
        DataBundle& operator=(const DataBundle&);

        int size();
        bool isEmpty();
        void clear();
        bool containsKey(std::string);

        std::map<std::string, variant_t>::iterator begin();
        std::map<std::string, variant_t>::iterator end();
        std::string* getKeyArray();
        std::string getKeyAt(int);

        void remove(std::string);
        variant_t get(std::string);

        void putBool(std::string, bool);
        void putShort(std::string, short);
        void putInt(std::string, int);
        void putChar(std::string, char);
        void putLong(std::string, long);
        void putFloat(std::string, float);
        void putDouble(std::string, double);
        void putString(std::string, std::string);

        bool getBool(std::string);
        short getShort(std::string);
        int getInt(std::string);
        char getChar(std::string);
        long getLong(std::string);
        float getFloat(std::string);
        double getDouble(std::string);
        std::string getString(std::string);
    };
}
#endif /* _DATA_UTILS_DATABUNDLE_H_ */

