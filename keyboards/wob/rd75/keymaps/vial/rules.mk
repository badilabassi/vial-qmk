VIA_ENABLE = yes
VIAL_ENABLE = yes
ENCODER_MAP_ENABLE = yes
VIALRGB_ENABLE = yes

# The application region is only 81,408 bytes (see ld/FS026.ld). Without LTO
# the full Vial feature set does not fit.
LTO_ENABLE = yes

# Not enough emulated EEPROM for QMK Settings next to four layers.
QMK_SETTINGS = no
