INSTALL_TARGET_PROCESSES = SpringBoard

include ~/theos/makefiles/common.mk

TWEAK_NAME = SSPD

SSPD_FILES = Tweak.x
SSPD_CFLAGS = -fobjc-arc

THEOS_DEVICE_IP=192.168.1.15
THEOS_DEVICE_PORT=22

include $(THEOS_MAKE_PATH)/tweak.mk
