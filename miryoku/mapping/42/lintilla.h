// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_LINTILLA)

#define XXX &none
#define LT5 &mkp MB4 // mouse key 4, aka "back"
#define LM5 &kp LSHIFT
#define LB5 &kp LSHIFT
#define RT5 &mkp MB5 // mouse key 5, aka "forward"
#define RM5 &kp RSHIFT
#define RB5 &kp RSHIFT

#define MIRYOKU_LAYOUTMAPPING_LINTILLA(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
)\
     LT5                                                    RT5 \
LM5  K00  K01  K02  K03  K04                 K05  K06  K07  K08  K09  RM5 \
LB5  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  RB5 \
     K20  K21  K22  K23  K24                 K25  K26  K27  K28  K29 \
               K32  K33  K34                 K35  K36  K37
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 33 34
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 35 36


#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_LINTILLA
