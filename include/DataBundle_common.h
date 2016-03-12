#ifndef _DATA_BUNDLE_COMMON_H
#define _DATA_BUNDLE_COMMON_H

enum variant_t_type
{
    VARIANT_TYPE_BOOL,
    VARIANT_TYPE_CHAR,
    VARIANT_TYPE_SHORT,
    VARIANT_TYPE_INT,
    VARIANT_TYPE_LONG,
    VARIANT_TYPE_FLOAT,
    VARIANT_TYPE_DOUBLE,
    VARIANT_TYPE_STRING
};

typedef struct variant_t
{
    union
    {
        unsigned short b;
        char c;
        short int s;
        int i;
        long int l;
        float f;
        double d;
        const char *x;
    };
    enum variant_t_type type;
} variant_t;

#endif /* _DATA_BUNDLE_COMMON_H */
