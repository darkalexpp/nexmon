/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2016 Free Software Foundation, Inc.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
http://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

/* Generated by MPFR's tuneup.c, 2011-07-31, gcc 4.3.2 */
/* gcc14.fsffrance.org (Intel(R) Xeon(R) CPU X5450 @ 3.00GHz) with gmp 5.0.2
   configured with ABI=32 */


#define MPFR_MULHIGH_TAB  \
 -1,0,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,0,10,10,0, \
 11,11,0,13,13,0,0,17,17,16,19,19,19,18,18,22, \
 20,18,19,26,26,28,23,24,28,29,26,28,29,28,30,32, \
 29,30,38,30,34,32,33,37,34,36,37,38,38,38,38,38, \
 38,44,36,52,44,48,52,56,51,52,56,56,52,52,56,58, \
 52,60,60,56,60,55,52,68,60,68,68,68,68,72,72,67, \
 68,68,68,76,76,68,75,75,68,72,76,68,68,75,72,72, \
 78,73,74,72,76,74,76,72,76,74,76,72,76,76,75,76, \
 75,74,76,76,99,99,104,76,76,111,104,102,99,99,99,104, \
 93,105,99,104,99,104,99,99,99,96,102,99,104,104,104,108, \
 104,105,111,110,110,111,111,111,109,111,110,111,111,114,108,111, \
 111,111,105,105,111,108,111,110,111,110,111,111,110,111,110,134, \
 111,141,153,153,153,140,141,165,141,153,151,153,153,153,152,152, \
 153,165,153,152,153,153,153,163,165,164,165,153,153,164,163,164, \
 165,165,153,168,168,173,174,165,176,177,177,164,176,177,165,165, \
 165,172,164,165,165,165,168,177,175,176,177,176,165,175,176,176, \
 165,177,176,177,204,204,204,204,204,203,177,218,217,220,204,219, \
 220,217,220,220,220,218,219,220,220,220,220,217,217,219,220,220, \
 217,204,217,219,220,220,217,218,218,219,220,219,220,219,219,220, \
 220,220,220,220,219,220,220,220,220,251,220,219,220,220,220,236, \
 249,220,251,250,249,249,251,248,251,251,251,250,251,251,251,249, \
 248,248,240,250,250,250,249,251,246,251,250,251,251,251,250,250, \
 251,249,249,250,251,251,249,251,250,306,305,306,306,306,306,306, \
 306,306,306,251,306,306,305,305,306,306,305,305,306,306,306,305, \
 330,305,306,305,306,306,306,330,306,306,305,305,330,330,327,330, \
 330,330,306,329,330,330,330,330,330,329,330,306,330,330,329,329, \
 329,330,329,330,330,330,330,330,330,327,328,329,330,329,329,330, \
 330,329,330,330,328,330,330,330,330,330,354,330,329,330,330,354, \
 330,329,330,353,354,330,354,354,330,353,354,354,354,354,354,354, \
 354,354,353,354,352,354,354,354,330,354,354,353,354,354,354,378, \
 353,408,408,408,408,407,408,407,407,408,408,408,408,407,408,408, \
 407,407,407,440,407,408,408,407,439,408,408,408,407,408,440,440, \
 440,440,440,440,440,439,440,437,439,440,439,439,440,440,439,440, \
 439,439,440,439,440,440,440,439,438,439,440,440,439,440,438,439, \
 440,440,440,439,440,440,440,440,438,440,439,439,440,440,440,439, \
 440,440,440,440,440,440,439,440,440,471,472,471,439,440,439,472, \
 472,472,472,472,472,472,440,472,439,440,471,472,471,471,439,472, \
 496,496,496,472,440,471,472,480,495,496,496,495,472,534,536,534, \
 534,536,536,536,536,536,536,536,536,536,535,536,536,536,536,536, \
 534,535,536,536,536,535,534,534,535,536,536,534,535,536,536,535, \
 536,536,536,536,535,536,536,536,536,536,535,536,568,535,536,536, \
 536,535,536,568,536,536,568,536,568,568,568,536,568,536,536,566, \
 567,567,535,568,568,536,535,536,535,536,536,536,567,536,568,536, \
 568,567,568,568,567,600,597,568,567,567,568,600,568,568,568,598, \
 566,567,568,568,566,568,568,568,567,568,567,568,568,568,568,568, \
 600,567,568,600,568,600,568,568,568,568,568,600,599,566,568,600, \
 568,568,600,567,568,599,567,600,599,600,568,600,567,599,600,599, \
 568,597,600,598,600,599,599,599,600,600,598,600,598,600,597,600, \
 600,600,600,600,600,599,600,600,598,599,600,599,600,639,600,600, \
 600,600,568,639,600,568,567,568,568,568,600,640,600,599,600,599, \
 600,600,600,598,600,599,568,600,598,600,600,599,600,597,639,598, \
 600,600,600,600,599,600,600,600,600,600,600,687,736,598,599,600, \
 736,600,600,688,736,736,600,688,735,736,736,734,736,736,735,736, \
 640,734,735,736,734,733,736,736,731,735,736,736,736,736,736,736, \
 736,735,736,736,736,736,784,735,784,735,784,783,783,736,736,735, \
 784,784,784,736,783,784,784,784,784,783,783,784,784,784,784,784, \
 781,782,782,784,784,784,784,784,784,734,784,783,784,784,784,736, \
 808,783,784,784,784,783,784,783,784,783,784,783,784,832,832,829, \
 832,824,823,832,824,784,784,824,831,832,784,783,784,783,784,832, \
 784,784,784,783,784,784,781,784,784,784,784,783,824,832,831,784, \
 832,831,832,830,832,807,784,832,830,784,832,808,832,824,823,832, \
 824,808,831,824,824,824,832,823,832,824,832,831,832,832,829,830, \
 831,832,832,832,831,831,832,832,830,832,832,832,832,831,831,832, \
 879,832,832,880,832,831,832,831,832,832,832,832,832,832,832,831 \
  
#define MPFR_SQRHIGH_TAB  \
 -1,0,0,0,-1,-1,-1,-1,-1,-1,-1,8,8,8,9,9, \
 10,10,11,13,13,14,15,16,14,16,17,16,18,17,19,18, \
 20,18,19,22,21,22,23,22,23,22,25,24,25,24,25,26, \
 27,26,29,27,28,29,30,34,34,36,36,38,38,40,40,42, \
 34,44,42,46,38,42,44,38,38,44,40,42,42,50,44,46, \
 50,48,48,44,50,52,52,46,50,46,52,50,52,50,50,52, \
 52,54,52,52,54,58,58,54,57,58,58,58,56,58,58,58, \
 68,58,64,68,72,60,64,72,68,64,72,64,72,68,72,68, \
 76,76,72,76,80,76,76,76,84,80,76,88,84,84,84,84, \
 88,84,87,88,88,92,92,92,88,96,92,96,96,92,96,96, \
 100,100,100,100,96,84,92,92,88,96,92,88,99,92,96,91, \
 92,96,100,100,99,100,100,100,100,96,98,96,100,98,100,100, \
 100,100,100,117,100,123,123,135,122,123,124,129,126,122,135,123, \
 129,135,135,133,134,135,141,140,135,126,140,135,129,129,129,132, \
 146,134,129,147,150,135,152,140,135,140,141,141,147,141,147,147, \
 147,150,141,147,152,147,141,150,141,151,153,146,147,152,147,147, \
 147,152,147,153,151,153,147,147,153,150,147,152,153,150,150,152, \
 153,150,153,152,153,150,147,164,150,187,188,148,187,180,152,196, \
 187,196,180,186,187,188,196,187,196,188,196,180,195,196,188,188, \
 188,196,196,188,192,194,195,196,196,196,195,204,211,212,203,204, \
 204,196,196,203,204,220,212,203,196,204,195,204,196,187,216,188, \
 200,195,196,204,219,203,195,196,188,203,204,195,203,204,219,195, \
 196,211,212,220,196,203,196,212,204,204,220,196,203,220,220,211, \
 203,212,212,211,212,212,216,218,220,211,211,218,220,219,220,220, \
 220,220,220,220,220,220,219,220,282,282,219,276,276,282,282,275, \
 276,282,269,276,258,294,276,282,282,294,294,270,282,294,258,270, \
 258,270,294,270,258,270,282,276,306,282,282,282,282,282,276,270, \
 282,282,282,281,282,281,281,294,282,276,282,282,282,294,294,282, \
 306,306,294,282,294,282,294,294,305,288,306,294,294,294,306,294, \
 306,305,318,306,306,318,312,306,306,318,305,306,306,306,317,312, \
 311,318,311,312,324,318,317,330,330,318,318,330,323,330,329,330, \
 324,330,329,324,342,330,342,329,330,336,341,318,294,329,341,306, \
 300,305,300,299,300,305,306,306,324,305,318,318,312,317,330,306, \
 306,306,306,306,318,317,318,318,318,324,330,329,324,318,318,318, \
 323,324,306,323,324,324,329,328,328,330,330,330,318,318,318,317, \
 317,336,330,342,342,341,330,330,330,342,330,340,330,330,318,341, \
 342,426,426,341,342,425,426,426,426,342,426,425,426,425,425,426, \
 426,426,318,426,425,450,426,425,378,378,378,426,426,450,450,450, \
 402,330,449,450,449,450,450,449,450,450,402,450,450,450,450,450, \
 426,401,402,450,450,426,426,450,474,472,474,450,426,426,426,474, \
 474,474,473,425,426,450,450,426,424,425,426,426,474,449,450,450, \
 450,426,474,449,426,450,450,448,449,498,450,498,450,426,450,449, \
 448,450,450,448,449,449,474,448,449,450,450,473,474,474,473,449, \
 449,474,450,474,450,450,473,474,450,473,474,474,474,474,521,498, \
 474,474,474,474,474,474,498,498,474,474,474,473,473,474,474,498, \
 498,474,498,498,498,498,498,519,498,522,522,498,498,520,498,498, \
 498,498,498,522,522,498,521,521,520,521,522,522,474,522,521,546, \
 520,522,546,522,516,546,546,521,522,522,522,521,522,522,521,474, \
 545,545,546,546,474,522,522,522,522,474,498,546,522,546,546,544, \
 545,545,522,521,546,546,546,522,546,545,522,498,546,546,522,520, \
 522,522,522,521,521,545,546,522,521,522,600,568,522,522,521,522, \
 600,522,521,521,522,522,519,599,521,522,545,546,522,545,546,545, \
 522,599,522,521,546,545,546,546,600,598,600,546,546,545,546,600, \
 568,546,600,546,598,600,600,632,632,545,546,599,600,546,546,545, \
 546,632,632,600,632,631,632,631,600,600,632,632,598,600,632,599, \
 599,599,600,599,599,600,600,600,600,596,600,631,599,600,600,599, \
 600,600,600,600,600,600,664,631,632,600,663,664,696,664,600,664, \
 663,631,696,662,600,693,696,695,663,696,696,664,631,632,688,630, \
 632,632,696,631,695,632,632,695,696,695,695,696,696,696,632,695, \
 696,695,696,696,632,695,696,631,664,664,695,663,663,664,696,687, \
 662,664,664,663,664,663,694,695,695,727,728,728,693,728,693,695, \
 696,696,696,696,696,694,695,696,696,695,696,694,727,696,696,688, \
 695,696,696,695,696,695,695,696,696,727,696,696,695,696,695,696, \
 696,695,696,695,696,696,696,728,728,696,720,728,728,728,726,728 \
  
#define MPFR_DIVHIGH_TAB  \
 0,1,2,3,4,5,6,7,8,9,10,9,10,11,14,13, \
 14,11,16,17,13,14,15,16,16,14,16,16,16,19,20,18, \
 23,18,22,19,24,25,27,23,23,24,24,23,27,28,27,28, \
 28,33,29,30,32,29,37,32,35,33,33,39,33,33,35,38, \
 39,38,38,37,38,39,37,37,48,40,39,40,40,50,51,46, \
 47,48,48,46,50,50,50,59,52,50,51,48,56,56,54,50, \
 51,54,53,58,58,58,56,59,61,58,62,59,62,67,62,67, \
 60,64,71,68,64,64,62,68,67,72,66,72,76,72,74,72, \
 67,72,72,74,76,70,74,74,76,76,76,76,76,76,74,76, \
 76,76,80,87,78,76,88,80,79,88,88,96,94,96,88,103, \
 104,104,104,100,103,102,104,104,104,96,104,104,112,112,104,104, \
 95,104,104,103,104,104,104,112,104,104,104,103,112,104,104,112, \
 104,104,112,104,104,112,104,112,112,112,111,112,120,104,112,116, \
 112,120,112,110,120,112,120,112,120,118,116,126,119,120,128,120, \
 136,128,120,120,136,120,120,136,152,136,136,136,143,136,128,140, \
 128,152,148,152,136,144,152,152,144,152,144,152,152,152,152,152, \
 134,152,152,136,136,136,140,152,152,143,152,144,152,152,152,152, \
 152,152,144,152,152,152,144,152,152,152,152,152,152,152,152,152, \
 152,152,152,152,152,152,150,151,152,152,152,152,156,152,160,160, \
 168,156,176,159,160,160,176,160,176,174,176,176,208,176,176,174, \
 176,183,176,208,208,176,208,208,208,208,192,208,208,208,208,208, \
 208,208,208,200,208,208,208,208,208,208,208,208,208,208,208,208, \
 208,208,208,208,208,208,222,208,209,208,208,208,208,208,208,222, \
 208,208,208,208,208,208,208,208,208,208,208,208,208,207,208,208, \
 208,208,208,208,208,208,208,208,208,222,220,220,222,208,221,216, \
 208,220,208,208,208,209,208,208,220,208,208,208,208,208,222,221, \
 222,220,220,224,220,216,216,220,216,220,221,222,216,224,224,222, \
 222,221,221,222,222,224,222,222,222,222,228,240,232,224,225,225, \
 304,228,272,256,231,248,240,234,232,272,288,234,270,256,264,240, \
 240,272,256,272,270,271,272,240,303,270,304,304,272,303,304,304, \
 304,304,272,270,272,304,288,287,257,303,304,304,288,304,304,272, \
 304,304,304,272,304,305,304,303,304,304,303,302,303,304,272,303, \
 304,304,304,303,304,304,272,304,304,288,288,304,304,304,305,282, \
 304,304,303,304,304,304,304,304,303,304,304,304,302,304,304,305, \
 303,302,287,302,304,304,304,305,304,304,302,302,303,303,304,288, \
 303,304,304,304,304,302,303,304,304,288,304,303,304,304,304,303, \
 304,304,303,303,304,304,304,304,304,304,304,303,304,303,304,304, \
 304,303,304,303,304,304,320,303,304,304,304,304,304,304,305,306, \
 320,312,320,320,320,320,320,320,320,320,320,320,320,320,352,320, \
 352,320,336,320,352,320,319,320,336,336,352,348,348,344,348,348, \
 352,348,351,351,351,352,352,354,350,352,352,352,360,353,416,359, \
 352,360,416,352,352,370,416,352,353,416,352,416,416,416,352,416, \
 352,416,416,416,416,352,408,416,416,384,416,352,416,392,416,416, \
 416,401,408,416,416,416,416,416,416,416,416,407,416,408,416,416, \
 416,408,408,416,416,416,416,432,416,416,416,436,440,416,416,440, \
 440,416,416,416,432,416,440,416,440,438,440,416,440,416,440,438, \
 440,444,416,448,416,440,440,440,416,448,448,415,447,440,416,440, \
 416,416,408,408,416,416,416,448,416,416,416,416,416,416,416,416, \
 416,416,416,416,416,416,440,416,417,416,416,416,416,416,416,416, \
 416,416,416,440,416,416,440,416,416,448,416,416,416,416,416,416, \
 448,416,416,416,448,416,416,416,416,416,440,416,416,416,432,440, \
 416,416,416,416,416,432,416,432,432,440,440,416,416,416,440,440, \
 440,448,448,438,440,433,440,439,440,448,440,440,440,439,440,447, \
 444,439,440,440,440,440,448,448,448,440,440,448,444,448,443,440, \
 440,440,440,440,440,448,448,440,448,439,440,444,447,448,448,448, \
 448,448,448,448,448,448,448,447,448,448,448,448,448,448,512,608, \
 480,608,464,480,608,456,464,608,608,480,608,480,608,480,480,480, \
 608,480,512,480,608,513,512,608,512,512,608,512,608,496,480,496, \
 608,516,496,608,480,512,608,512,608,512,512,608,608,608,608,608, \
 608,576,608,607,608,608,512,608,607,609,607,608,608,609,608,608, \
 609,608,608,608,607,608,607,608,607,608,608,608,608,608,608,607, \
 607,608,608,608,608,608,607,607,608,607,608,608,608,607,608,608, \
 608,608,609,609,608,608,609,608,608,608,606,606,608,608,609,607, \
 606,607,608,608,610,608,608,609,608,608,608,608,608,608,607,608 \
  
#define MPFR_MUL_THRESHOLD 15 /* limbs */
#define MPFR_SQR_THRESHOLD 18 /* limbs */
#define MPFR_DIV_THRESHOLD 22 /* limbs */
#define MPFR_EXP_2_THRESHOLD 649 /* bits */
#define MPFR_EXP_THRESHOLD 10653 /* bits */
#define MPFR_SINCOS_THRESHOLD 36331 /* bits */
#define MPFR_AI_THRESHOLD1 -21595 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 2333
#define MPFR_AI_THRESHOLD3 33925
/* Tuneup completed successfully, took 1155 seconds */
