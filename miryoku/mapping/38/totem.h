// miryoku/mapping/38/totem.h

#if !defined (MIRYOKU_LAYOUTMAPPING_TOTEM)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_TOTEM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     K30, K31, K32,               K33, K34, K35 \
) \
     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
     K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
          K20  K21  K22  K23  K24       K25  K26  K27  K28  K29 \
                    K30  K31  K32       K33  K34  K35

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 31 32
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 33 34

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_TOTEM
