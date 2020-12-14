#https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads
set -e

mkdir -p build
cd build

arm-none-eabi-g++ -Os -Werror -fno-common -mcpu=cortex-m3 -mthumb -msoft-float -fno-exceptions -fno-rtti -fno-threadsafe-statics -Wno-psabi -DLA104 -DARDUINO=1000 -MD -D _ARM -D STM32F10X_HD -D STM32F10X_HD -c \
  ../source/main.cpp \
  ../source/platform.cpp \
  ../source/Adafruit_SSD1306.cpp -I../../../os_library/include/
arm-none-eabi-gcc -fPIC -mcpu=cortex-m3 -mthumb -o output.elf -nostartfiles -T ../source/app.lds \
  ./main.o \
  ./Adafruit_SSD1306.o ./platform.o -lbios_la104 -L../../../os_library/build

arm-none-eabi-objdump -d -S output.elf > output.asm
arm-none-eabi-readelf -all output.elf > output.txt

find . -type f -name '*.o' -delete
find . -type f -name '*.d' -delete

../../../../tools/elfstrip/elfstrip output.elf 102oled.elf
