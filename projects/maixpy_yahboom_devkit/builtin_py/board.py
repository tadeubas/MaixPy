try:
    import ujson as json
except ImportError:
    import json

#
# Yahboom K210 Developer Kit
# http://github.com/YahboomTechnology/K210-Developer-Kit
#

# rled0: 0
# dial-left: 1
# dial-press: 2
# dial-right: 3
# isp-rx: 4
# isp-tx: 5
# rgbled-r: 6
# rgbled-g: 7
# rgbled-b: 8
# i2c-scl/ft-scl: 9
# i2c-sda/ft-sda: 10
# mpu-int: 11
# ft-int: 12
# jumper-wifi-tx: 13
# jumper-wifi-rx: 14
# jumper-wifi-en: 15
# boot key0: 16
# gled1: 17
# mic-sck: 18
# mic-ws: 19
# mic-dat3: 20
# mic-dat2: 21
# mic-dat1: 22
# mic-dat0: 23
# mic-led-da: 24
# mic-led-ck: 25
# tf-miso: 26
# tf-clk: 27
# tf-mosi: 28
# tf-cso: 29
# spk-ws: 30
# spk-data: 31
# spk-bck: 32
# mico-ws: 33
# mico-data: 34
# mico-sck: 35
# lcd-cs: 36
# lcd-rst/ft-rst: 37
# lcd-rs: 38
# lcd-wr: 39
# dvp-sda: 40
# dvp-scl: 41
# dvp-rst: 42
# dvp-vsync: 43
# dvp-pwdn: 44
# dvp-hsync: 45
# dvp-xclk: 46
# dvp-pclk: 47

""" 
#config.json from MicroPython v2.0.6-dirty on 2023-03-17 CanMV_Yahboom
{
"type": "k210-dev-kit", 
"kpu_div": 1, 
"sdcard": {
  "cs": 29, 
  "mosi": 28, 
  "sclk": 27, 
  "miso": 26}, 
"board_info": {
  "BOOT_KEY": 16}, 
"freq_cpu": 416000000, 
"freq_pll1": 400000000, 
"lcd": {
  "offset_y2": 0, 
  "dir": 96, 
  "dcx": 38, 
  "invert": 1, 
  "offset_y1": 0, 
  "ss": 36, 
  "offset_x1": 0, 
  "offset_x2": 0, 
  "rst": 37, 
  "clk": 39, 
  "height": 240, 
  "width": 320}
}
"""

# json removed for simplicity
"""
    "sensor": {
        "pin_sda": 40,
        "cmos_href": 45,
        "cmos_pclk": 47,
        "cmos_xclk": 46,
        "cmos_pwdn": 44,
        "cmos_vsync": 43,
        "reg_width": 16,
        "i2c_num": 2,
        "pin_clk": 41,
        "cmos_rst": 42
    },
"""

# todo: serial console not fully functioning for debugging and/or repl
config = json.loads("""
{
    "type": "yahboom",
    "lcd": {
        "dcx": 38,
        "ss": 36,
        "rst": 37,
        "clk": 39,
        "height": 240,
        "width": 320,
        "invert": 1,
        "dir": 96,
        "lcd_type": 0
    },
    "sdcard": {
        "sclk": 27,
        "mosi": 28,
        "miso": 26,
        "cs": 29
    },
    "board_info": {
        "BOOT_KEY": 16,
        "CONNEXT_A": 4,
        "CONNEXT_B": 5,
        "I2C_SDA": 10,
        "I2C_SCL": 9,
        "SPI_SCLK": 27,
        "SPI_MOSI": 28,
        "SPI_MISO": 26,
        "SPI_CS": 29
    },
    "krux": {
        "pins": {
            "BUTTON_A": 2,
            "BUTTON_B": 3,
            "BUTTON_C": 1,
            "TOUCH_IRQ": 12,
            "I2C_SDA": 10,
            "I2C_SCL": 9
        },
        "display": {
            "touch": true,
            "font": [8, 16],
            "font_wide": [16, 16]
        }
    }
}
""")
