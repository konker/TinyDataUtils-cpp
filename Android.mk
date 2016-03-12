#
# Author Konrad Markus <konker@luxvelocitas.com>
#

LOCAL_PATH := $(call my-dir)

#------------------------------------------------------------------------
# DataUtils module  {{{
#
include $(CLEAR_VARS)

CPP_FILE_LIST := $(wildcard $(LOCAL_PATH)/src/*.cpp)

LOCAL_MODULE := DataUtils
LOCAL_CFLAGS := -Werror -ggdb
LOCAL_CXXFLAGS := -ggdb
LOCAL_SRC_FILES += $(CPP_FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_C_INCLUDES += $(LOCAL_PATH)/include
LOCAL_EXPORT_C_INCLUDES += $(LOCAL_PATH)/include

include $(BUILD_STATIC_LIBRARY)
# }}}
