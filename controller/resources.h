// Copyright 2009 Emilie Gillet.
//
// Author: Emilie Gillet (emilie.o.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef CONTROLLER_RESOURCES_H_
#define CONTROLLER_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"

namespace ambika {

typedef uint16_t ResourceId;

extern const prog_char* const string_table[];

extern const prog_uint16_t* const lookup_table_table[];

extern const prog_uint8_t* const character_table[];

extern const prog_uint8_t* const waveform_table[];

extern const prog_uint16_t lut_res_lfo_increments[] PROGMEM;
extern const prog_uint16_t lut_res_scale_just[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pythagorean[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_eb[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_e[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_ea[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gunakri[] PROGMEM;
extern const prog_uint16_t lut_res_scale_marwa[] PROGMEM;
extern const prog_uint16_t lut_res_scale_shree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_purvi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bilawal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_yaman[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhimpalasree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_darbari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rageshree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_khamaj[] PROGMEM;
extern const prog_uint16_t lut_res_scale_mimal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_parameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pa__kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_natbhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_m_kauns[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bairagi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_b_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_chandradeep[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kaushik_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_jogeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_groove_swing[] PROGMEM;
extern const prog_uint16_t lut_res_groove_shuffle[] PROGMEM;
extern const prog_uint16_t lut_res_groove_push[] PROGMEM;
extern const prog_uint16_t lut_res_groove_lag[] PROGMEM;
extern const prog_uint16_t lut_res_groove_human[] PROGMEM;
extern const prog_uint16_t lut_res_groove_monkey[] PROGMEM;
extern const prog_uint8_t chr_res_special_characters[] PROGMEM;
extern const prog_uint8_t wav_res_lfo_waveforms[] PROGMEM;
#define STR_RES_WAVEFORM 0  // waveform
#define STR_RES_PARAMETER 1  // parameter
#define STR_RES_RANGE 2  // range
#define STR_RES_TUNE 3  // tune
#define STR_RES_OSC_MIX 4  // osc mix
#define STR_RES_SUB_OSC_ 5  // sub osc.
#define STR_RES_CROSSMOD_ 6  // crossmod.
#define STR_RES_OPERATOR 7  // operator
#define STR_RES_AMOUNT 8  // amount
#define STR_RES_RESONANCE 9  // resonance
#define STR_RES_MODE 10  // mode
#define STR_RES_ENV2TVCF 11  // env2~vcf
#define STR_RES_LFO2TVCF 12  // lfo2~vcf
#define STR_RES_VELOTVCF 13  // velo~vcf
#define STR_RES_KEYBTVCF 14  // keyb~vcf
#define STR_RES_ATTACK 15  // attack
#define STR_RES_DECAY 16  // decay
#define STR_RES_SUSTAIN 17  // sustain
#define STR_RES_RELEASE 18  // release
#define STR_RES_TRIGGER 19  // trigger
#define STR_RES_RATE 20  // rate
#define STR_RES_LFO_EG 21  // lfo/eg
#define STR_RES_VOICE_LFO 22  // voice lfo
#define STR_RES_SOURCE 23  // source
#define STR_RES_DESTINATION 24  // destination
#define STR_RES_IN1 25  // in1
#define STR_RES_IN2 26  // in2
#define STR_RES_MODULATION 27  // modulation
#define STR_RES_MODUL_ 28  // modul.
#define STR_RES__MODULATION 29  // modulation
#define STR_RES_MODIFIER 30  // modifier
#define STR_RES_MODIF_ 31  // modif.
#define STR_RES_VOLUME 32  // volume
#define STR_RES_OCTAVE 33  // octave
#define STR_RES_SPREAD 34  // spread
#define STR_RES_LEGATO 35  // legato
#define STR_RES_PORTAMENTO 36  // portamento
#define STR_RES_ARP_SEQ 37  // arp/seq
#define STR_RES_RAGA 38  // raga
#define STR_RES_DIRECTION 39  // direction
#define STR_RES_PATTERN 40  // pattern
#define STR_RES_CHANNEL 41  // channel
#define STR_RES_PART 42  // part
#define STR_RES_BPM 43  // bpm
#define STR_RES_LTCH 44  // ltch
#define STR_RES_LATCH 45  // latch
#define STR_RES_LOW 46  // low
#define STR_RES_HIGH 47  // high
#define STR_RES_GRID 48  // grid
#define STR_RES_SEQ1_LEN 49  // seq1 len
#define STR_RES_SEQ2_LEN 50  // seq2 len
#define STR_RES_PATT_LEN 51  // patt len
#define STR_RES_LEN1 52  // len1
#define STR_RES_LEN2 53  // len2
#define STR_RES_LENP 54  // lenp
#define STR_RES_GROOVE 55  // groove
#define STR_RES_MIDI 56  // midi
#define STR_RES_SNAP 57  // snap
#define STR_RES_HELP 58  // help
#define STR_RES_AUTO_BACKUP 59  // auto backup
#define STR_RES_LEDS 60  // leds
#define STR_RES_CARD_LEDS 61  // card leds
#define STR_RES_SWAP_COLORS 62  // swap colors
#define STR_RES_INPT_FILTER 63  // inpt filter
#define STR_RES_OUTP_MODE 64  // outp mode
#define STR_RES_EXT 65  // ext
#define STR_RES_CC_MAP 66  // cc map
#define STR_RES_LAUNCHKEY_SEQ 67  // launchkey seq
#define STR_RES_LSEQ 68  // lseq
#define STR_RES_OMNI 69  // omni
#define STR_RES_AMNT 70  // amnt
#define STR_RES_SRCE 71  // srce
#define STR_RES_OCT 72  // oct
#define STR_RES_SPRD 73  // sprd
#define STR_RES_A_SQ 74  // a/sq
#define STR_RES_OCTV 75  // octv
#define STR_RES_OFF 76  // off
#define STR_RES_ON 77  // on
#define STR_RES_NONE 78  // none
#define STR_RES_SAW 79  // saw
#define STR_RES_SQUARE 80  // square
#define STR_RES_TRIANGLE 81  // triangle
#define STR_RES_SINE 82  // sine
#define STR_RES_ZSAW 83  // zsaw
#define STR_RES_LPZSAW 84  // lpzsaw
#define STR_RES_PKZSAW 85  // pkzsaw
#define STR_RES_BPZSAW 86  // bpzsaw
#define STR_RES_HPZSAW 87  // hpzsaw
#define STR_RES_LPZPULSE 88  // lpzpulse
#define STR_RES_PKZPULSE 89  // pkzpulse
#define STR_RES_BPZPULSE 90  // bpzpulse
#define STR_RES_HPZPULSE 91  // hpzpulse
#define STR_RES_ZTRIANGLE 92  // ztriangle
#define STR_RES_PAD 93  // pad
#define STR_RES_FM 94  // fm
#define STR_RES_8BITS 95  // 8bits
#define STR_RES_PWM 96  // pwm
#define STR_RES_NOISE 97  // noise
#define STR_RES_VOWEL 98  // vowel
#define STR_RES_MALE 99  // male
#define STR_RES_FEMALE 100  // female
#define STR_RES_CHOIR 101  // choir
#define STR_RES_TAMPURA 102  // tampura
#define STR_RES_BOWED 103  // bowed
#define STR_RES_CELLO 104  // cello
#define STR_RES_VIBES 105  // vibes
#define STR_RES_SLAP 106  // slap
#define STR_RES_EPIANO 107  // epiano
#define STR_RES_ORGAN 108  // organ
#define STR_RES_WAVES 109  // waves
#define STR_RES_DIGITAL 110  // digital
#define STR_RES_DRONE_1 111  // drone 1
#define STR_RES_DRONE_2 112  // drone 2
#define STR_RES_METALLIC 113  // metallic
#define STR_RES_BELL 114  // bell
#define STR_RES_WAVQUENCE 115  // wavquence
#define STR_RES_OLDSAW 116  // oldsaw
#define STR_RES_QPWM 117  // qpwm
#define STR_RES_FMFB 118  // fmfb
#define STR_RES_CSAW 119  // csaw
#define STR_RES_TRI 120  // tri
#define STR_RES_SQR 121  // sqr
#define STR_RES_S_H 122  // s&h
#define STR_RES_RAMP 123  // ramp
#define STR_RES__SINE 124  // sine
#define STR_RES_HRM2 125  // hrm2
#define STR_RES_HRM3 126  // hrm3
#define STR_RES_HRM5 127  // hrm5
#define STR_RES_GRG1 128  // grg1
#define STR_RES_GRG2 129  // grg2
#define STR_RES_BAT1 130  // bat1
#define STR_RES_BAT2 131  // bat2
#define STR_RES_SPK1 132  // spk1
#define STR_RES_SPK2 133  // spk2
#define STR_RES_LSAW 134  // lsaw
#define STR_RES_LSQR 135  // lsqr
#define STR_RES_RSAW 136  // rsaw
#define STR_RES_RSQR 137  // rsqr
#define STR_RES_STP1 138  // stp1
#define STR_RES_STP2 139  // stp2
#define STR_RES___OFF 140  // off
#define STR_RES_SYNC 141  // sync
#define STR_RES_RINGMOD 142  // ringmod
#define STR_RES_XOR 143  // xor
#define STR_RES_FOLD 144  // fold
#define STR_RES_BITS 145  // bits
#define STR_RES_SQU1 146  // squ1
#define STR_RES_TRI1 147  // tri1
#define STR_RES_PUL1 148  // pul1
#define STR_RES_SQU2 149  // squ2
#define STR_RES_TRI2 150  // tri2
#define STR_RES_PUL2 151  // pul2
#define STR_RES_CLICK 152  // click
#define STR_RES_GLITCH 153  // glitch
#define STR_RES_BLOW 154  // blow
#define STR_RES_METAL 155  // metal
#define STR_RES_POP 156  // pop
#define STR_RES_ENV1 157  // env1
#define STR_RES_ENV2 158  // env2
#define STR_RES_ENV3 159  // env3
#define STR_RES_LFO1 160  // lfo1
#define STR_RES_LFO2 161  // lfo2
#define STR_RES_LFO3 162  // lfo3
#define STR_RES_LFO4 163  // lfo4
#define STR_RES_MOD1 164  // mod1
#define STR_RES_MOD2 165  // mod2
#define STR_RES_MOD3 166  // mod3
#define STR_RES_MOD4 167  // mod4
#define STR_RES_SEQ1 168  // seq1
#define STR_RES_SEQ2 169  // seq2
#define STR_RES_ARP 170  // arp
#define STR_RES_VELO 171  // velo
#define STR_RES_AFTR 172  // aftr
#define STR_RES_BEND 173  // bend
#define STR_RES_MWHL 174  // mwhl
#define STR_RES_WHL2 175  // whl2
#define STR_RES_PDAL 176  // pdal
#define STR_RES_NOTE 177  // note
#define STR_RES_GATE 178  // gate
#define STR_RES_NOIS 179  // nois
#define STR_RES_RAND 180  // rand
#define STR_RES_E256 181  // =256
#define STR_RES_E128 182  // =128
#define STR_RES_E64 183  // =64
#define STR_RES_E32 184  // =32
#define STR_RES_E16 185  // =16
#define STR_RES_E8 186  // =8
#define STR_RES_E4 187  // =4
#define STR_RES_PRM1 188  // prm1
#define STR_RES_PRM2 189  // prm2
#define STR_RES_OSC1 190  // osc1
#define STR_RES_OSC2 191  // osc2
#define STR_RES_31S2 192  // 1+2
#define STR_RES_VIBR 193  // vibr
#define STR_RES_MIX 194  // mix
#define STR_RES_XMOD 195  // xmod
#define STR_RES__NOIS 196  // nois
#define STR_RES_SUB 197  // sub
#define STR_RES_FUZZ 198  // fuzz
#define STR_RES_CRSH 199  // crsh
#define STR_RES_FREQ 200  // freq
#define STR_RES_RESO 201  // reso
#define STR_RES_ATTK 202  // attk
#define STR_RES_DECA 203  // deca
#define STR_RES_RELE 204  // rele
#define STR_RES__LFO4 205  // lfo4
#define STR_RES_VCA 206  // vca
#define STR_RES_DRM1 207  // drm1
#define STR_RES_DRM2 208  // drm2
#define STR_RES_ENV_1 209  // env 1
#define STR_RES_ENV_2 210  // env 2
#define STR_RES_ENV_3 211  // env 3
#define STR_RES_LFO_1 212  // lfo 1
#define STR_RES_LFO_2 213  // lfo 2
#define STR_RES_LFO_3 214  // lfo 3
#define STR_RES_LFO_4 215  // lfo 4
#define STR_RES_MOD__1 216  // mod. 1
#define STR_RES_MOD__2 217  // mod. 2
#define STR_RES_MOD__3 218  // mod. 3
#define STR_RES_MOD__4 219  // mod. 4
#define STR_RES_SEQ__1 220  // seq. 1
#define STR_RES_SEQ__2 221  // seq. 2
#define STR_RES__ARP 222  // arp
#define STR_RES__VELO 223  // velo
#define STR_RES_AFTTCH 224  // afttch
#define STR_RES_BENDER 225  // bender
#define STR_RES_MWHEEL 226  // mwheel
#define STR_RES_WHEEL2 227  // wheel2
#define STR_RES_PEDAL 228  // pedal
#define STR_RES__NOTE 229  // note
#define STR_RES__GATE 230  // gate
#define STR_RES__NOISE 231  // noise
#define STR_RES_RANDOM 232  // random
#define STR_RES_E_256 233  // = 256
#define STR_RES_E_32 234  // = 32
#define STR_RES_E_16 235  // = 16
#define STR_RES_E_8 236  // = 8
#define STR_RES_E_4 237  // = 4
#define STR_RES_PARAM_1 238  // param 1
#define STR_RES_PARAM_2 239  // param 2
#define STR_RES_OSC_1 240  // osc 1
#define STR_RES_OSC_2 241  // osc 2
#define STR_RES_OSC_1S2 242  // osc 1+2
#define STR_RES_VIBRATO 243  // vibrato
#define STR_RES__MIX 244  // mix
#define STR_RES__XMOD 245  // xmod
#define STR_RES___NOISE 246  // noise
#define STR_RES_SUBOSC 247  // subosc
#define STR_RES__FUZZ 248  // fuzz
#define STR_RES_CRUSH 249  // crush
#define STR_RES_FREQUENCY 250  // frequency
#define STR_RES__RESO 251  // reso
#define STR_RES__ATTACK 252  // attack
#define STR_RES__DECAY 253  // decay
#define STR_RES__RELEASE 254  // release
#define STR_RES__LFO_4 255  // lfo 4
#define STR_RES__VCA 256  // vca
#define STR_RES_DRUM_1 257  // drum 1
#define STR_RES_DRUM_2 258  // drum 2
#define STR_RES_LP 259  // lp
#define STR_RES_BP 260  // bp
#define STR_RES_HP 261  // hp
#define STR_RES_NT 262  // nt
#define STR_RES_FREE 263  // free
#define STR_RES_ENVTLFO 264  // env~lfo
#define STR_RES_LFOTENV 265  // lfo~env
#define STR_RES_STEP_SEQ 266  // step seq
#define STR_RES_ARPEGGIO 267  // arpeggio
#define STR_RES__PATTERN 268  // pattern
#define STR_RES__LATCH 269  // latch
#define STR_RES_CHORD_SEQ 270  // chord seq
#define STR_RES__OFF 271  // off
#define STR_RES_ADD 272  // add
#define STR_RES_PROD 273  // prod
#define STR_RES_ATTN 274  // attn
#define STR_RES_MAX 275  // max
#define STR_RES_MIN 276  // min
#define STR_RES__XOR 277  // xor
#define STR_RES_GE 278  // >=
#define STR_RES_LE 279  // <=
#define STR_RES_QTZ 280  // qtz
#define STR_RES_LAG 281  // lag
#define STR_RES_MONO 282  // mono
#define STR_RES_POLY 283  // poly
#define STR_RES_SOLO 284  // solo
#define STR_RES_2X_UNISON 285  // 2x unison
#define STR_RES_CYCLIC 286  // cyclic
#define STR_RES_CHAIN 287  // chain
#define STR_RES_UP 288  // up
#define STR_RES_DOWN 289  // down
#define STR_RES_UP_DOWN 290  // up&down
#define STR_RES_PLAYED 291  // played
#define STR_RES__RANDOM 292  // random
#define STR_RES_CHORD 293  // chord
#define STR_RES_2_1 294  // 2/1
#define STR_RES_1_1 295  // 1/1
#define STR_RES_3_4 296  // 3/4
#define STR_RES_2_3 297  // 2/3
#define STR_RES_1_2 298  // 1/2
#define STR_RES_3_8 299  // 3/8
#define STR_RES_1_3 300  // 1/3
#define STR_RES_1_4 301  // 1/4
#define STR_RES_1_6 302  // 1/6
#define STR_RES_1_8 303  // 1/8
#define STR_RES_1_12 304  // 1/12
#define STR_RES_1_16 305  // 1/16
#define STR_RES_1_24 306  // 1/24
#define STR_RES_1_32 307  // 1/32
#define STR_RES_1_48 308  // 1/48
#define STR_RES_1_96 309  // 1/96
#define STR_RES_THRU 310  // thru
#define STR_RES_SEQUENCER 311  // sequencer
#define STR_RES_CONTROLLR 312  // controllr
#define STR_RES__CHAIN 313  // chain
#define STR_RES_FULL 314  // full
#define STR_RES_AMBIKA 315  // ambika
#define STR_RES_SHRUTHIXT 316  // shruthiXT
#define STR_RES_LAUNCHKEY 317  // launchkey
#define STR_RES_LKEY 318  // lkey
#define STR_RES_____ 319  // ....
#define STR_RES____S 320  // ...s
#define STR_RES___P_ 321  // ..p.
#define STR_RES___PS 322  // ..ps
#define STR_RES__N__ 323  // .n..
#define STR_RES__N_S 324  // .n.s
#define STR_RES__NP_ 325  // .np.
#define STR_RES__NPS 326  // .nps
#define STR_RES_C___ 327  // c...
#define STR_RES_C__S 328  // c..s
#define STR_RES_C_P_ 329  // c.p.
#define STR_RES_C_PS 330  // c.ps
#define STR_RES_CN__ 331  // cn..
#define STR_RES_CN_S 332  // cn.s
#define STR_RES_CNP_ 333  // cnp.
#define STR_RES_CNPS 334  // cnps
#define STR_RES_SWING 335  // swing
#define STR_RES_SHUFFLE 336  // shuffle
#define STR_RES_PUSH 337  // push
#define STR_RES__LAG 338  // lag
#define STR_RES_HUMAN 339  // human
#define STR_RES_MONKEY 340  // monkey
#define STR_RES_OSCILLATOR_1 341  // oscillator 1
#define STR_RES_OSCILLATOR_2 342  // oscillator 2
#define STR_RES_MIXER 343  // mixer
#define STR_RES_LFO 344  // lfo
#define STR_RES_FILTER_1 345  // filter 1
#define STR_RES_FILTER_2 346  // filter 2
#define STR_RES_ENVELOPE 347  // envelope
#define STR_RES_ARPEGGIATOR 348  // arpeggiator
#define STR_RES_MULTI 349  // multi
#define STR_RES_CLOCK 350  // clock
#define STR_RES_PERFORMANCE 351  // performance
#define STR_RES_SYSTEM 352  // system
#define STR_RES_PT_X_PATCH 353  // pt X patch
#define STR_RES_PT_X_SEQUENCE 354  // pt X sequence
#define STR_RES_PT_X_PROGRAM 355  // pt X program
#define STR_RES_RANDOMIZE 356  // randomize
#define STR_RES_INIT 357  // init
#define STR_RES_PATCH 358  // PATCH
#define STR_RES_SEQUENCE 359  // SEQUENCE
#define STR_RES_PROGRAM 360  // PROGRAM
#define STR_RES__MULTI 361  // MULTI
#define STR_RES____ 362  // ___
#define STR_RES_EQUAL 363  // equal
#define STR_RES_JUST 364  // just
#define STR_RES_PYTHAGOREAN 365  // pythagorean
#define STR_RES_1_4_EB 366  // 1/4 eb
#define STR_RES_1_4_E 367  // 1/4 e
#define STR_RES_1_4_EA 368  // 1/4 ea
#define STR_RES_BHAIRAV 369  // bhairav
#define STR_RES_GUNAKRI 370  // gunakri
#define STR_RES_MARWA 371  // marwa
#define STR_RES_SHREE 372  // shree
#define STR_RES_PURVI 373  // purvi
#define STR_RES_BILAWAL 374  // bilawal
#define STR_RES_YAMAN 375  // yaman
#define STR_RES_KAFI 376  // kafi
#define STR_RES_BHIMPALASREE 377  // bhimpalasree
#define STR_RES_DARBARI 378  // darbari
#define STR_RES_BAGESHREE 379  // bageshree
#define STR_RES_RAGESHREE 380  // rageshree
#define STR_RES_KHAMAJ 381  // khamaj
#define STR_RES_MIMAL 382  // mi'mal
#define STR_RES_PARAMESHWARI 383  // parameshwari
#define STR_RES_RANGESHWARI 384  // rangeshwari
#define STR_RES_GANGESHWARI 385  // gangeshwari
#define STR_RES_KAMESHWARI 386  // kameshwari
#define STR_RES_PA__KAFI 387  // pa. kafi
#define STR_RES_NATBHAIRAV 388  // natbhairav
#define STR_RES_M_KAUNS 389  // m.kauns
#define STR_RES_BAIRAGI 390  // bairagi
#define STR_RES_B_TODI 391  // b.todi
#define STR_RES_CHANDRADEEP 392  // chandradeep
#define STR_RES_KAUSHIK_TODI 393  // kaushik todi
#define STR_RES_JOGESHWARI 394  // jogeshwari
#define STR_RES_RASIA 395  // rasia
#define LUT_RES_LFO_INCREMENTS 0
#define LUT_RES_LFO_INCREMENTS_SIZE 128
#define LUT_RES_SCALE_JUST 1
#define LUT_RES_SCALE_JUST_SIZE 12
#define LUT_RES_SCALE_PYTHAGOREAN 2
#define LUT_RES_SCALE_PYTHAGOREAN_SIZE 12
#define LUT_RES_SCALE_1_4_EB 3
#define LUT_RES_SCALE_1_4_EB_SIZE 12
#define LUT_RES_SCALE_1_4_E 4
#define LUT_RES_SCALE_1_4_E_SIZE 12
#define LUT_RES_SCALE_1_4_EA 5
#define LUT_RES_SCALE_1_4_EA_SIZE 12
#define LUT_RES_SCALE_BHAIRAV 6
#define LUT_RES_SCALE_BHAIRAV_SIZE 12
#define LUT_RES_SCALE_GUNAKRI 7
#define LUT_RES_SCALE_GUNAKRI_SIZE 12
#define LUT_RES_SCALE_MARWA 8
#define LUT_RES_SCALE_MARWA_SIZE 12
#define LUT_RES_SCALE_SHREE 9
#define LUT_RES_SCALE_SHREE_SIZE 12
#define LUT_RES_SCALE_PURVI 10
#define LUT_RES_SCALE_PURVI_SIZE 12
#define LUT_RES_SCALE_BILAWAL 11
#define LUT_RES_SCALE_BILAWAL_SIZE 12
#define LUT_RES_SCALE_YAMAN 12
#define LUT_RES_SCALE_YAMAN_SIZE 12
#define LUT_RES_SCALE_KAFI 13
#define LUT_RES_SCALE_KAFI_SIZE 12
#define LUT_RES_SCALE_BHIMPALASREE 14
#define LUT_RES_SCALE_BHIMPALASREE_SIZE 12
#define LUT_RES_SCALE_DARBARI 15
#define LUT_RES_SCALE_DARBARI_SIZE 12
#define LUT_RES_SCALE_BAGESHREE 16
#define LUT_RES_SCALE_BAGESHREE_SIZE 12
#define LUT_RES_SCALE_RAGESHREE 17
#define LUT_RES_SCALE_RAGESHREE_SIZE 12
#define LUT_RES_SCALE_KHAMAJ 18
#define LUT_RES_SCALE_KHAMAJ_SIZE 12
#define LUT_RES_SCALE_MIMAL 19
#define LUT_RES_SCALE_MIMAL_SIZE 12
#define LUT_RES_SCALE_PARAMESHWARI 20
#define LUT_RES_SCALE_PARAMESHWARI_SIZE 12
#define LUT_RES_SCALE_RANGESHWARI 21
#define LUT_RES_SCALE_RANGESHWARI_SIZE 12
#define LUT_RES_SCALE_GANGESHWARI 22
#define LUT_RES_SCALE_GANGESHWARI_SIZE 12
#define LUT_RES_SCALE_KAMESHWARI 23
#define LUT_RES_SCALE_KAMESHWARI_SIZE 12
#define LUT_RES_SCALE_PA__KAFI 24
#define LUT_RES_SCALE_PA__KAFI_SIZE 12
#define LUT_RES_SCALE_NATBHAIRAV 25
#define LUT_RES_SCALE_NATBHAIRAV_SIZE 12
#define LUT_RES_SCALE_M_KAUNS 26
#define LUT_RES_SCALE_M_KAUNS_SIZE 12
#define LUT_RES_SCALE_BAIRAGI 27
#define LUT_RES_SCALE_BAIRAGI_SIZE 12
#define LUT_RES_SCALE_B_TODI 28
#define LUT_RES_SCALE_B_TODI_SIZE 12
#define LUT_RES_SCALE_CHANDRADEEP 29
#define LUT_RES_SCALE_CHANDRADEEP_SIZE 12
#define LUT_RES_SCALE_KAUSHIK_TODI 30
#define LUT_RES_SCALE_KAUSHIK_TODI_SIZE 12
#define LUT_RES_SCALE_JOGESHWARI 31
#define LUT_RES_SCALE_JOGESHWARI_SIZE 12
#define LUT_RES_SCALE_RASIA 32
#define LUT_RES_SCALE_RASIA_SIZE 12
#define LUT_RES_ARPEGGIATOR_PATTERNS 33
#define LUT_RES_ARPEGGIATOR_PATTERNS_SIZE 30
#define LUT_RES_GROOVE_SWING 34
#define LUT_RES_GROOVE_SWING_SIZE 16
#define LUT_RES_GROOVE_SHUFFLE 35
#define LUT_RES_GROOVE_SHUFFLE_SIZE 16
#define LUT_RES_GROOVE_PUSH 36
#define LUT_RES_GROOVE_PUSH_SIZE 16
#define LUT_RES_GROOVE_LAG 37
#define LUT_RES_GROOVE_LAG_SIZE 16
#define LUT_RES_GROOVE_HUMAN 38
#define LUT_RES_GROOVE_HUMAN_SIZE 16
#define LUT_RES_GROOVE_MONKEY 39
#define LUT_RES_GROOVE_MONKEY_SIZE 16
#define CHR_RES_SPECIAL_CHARACTERS 0
#define CHR_RES_SPECIAL_CHARACTERS_SIZE 56
#define WAV_RES_LFO_WAVEFORMS 0
#define WAV_RES_LFO_WAVEFORMS_SIZE 2064
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace ambika

#endif  // CONTROLLER_RESOURCES_H_
