// Ecole sup�rieure SL229_MINF TP
// Manipulation Tp3_MenuGen
// Cr�� le 9 Mai 2006 CHR
// Version 2016  du 03.02.2016
// Modif 2015 : utilisation de stdint.h
// Modif 2016 : ajout Duty pour PWM
// Modif 2018 SCA : suppression PWM et duty
// Definition pour le menuGen

#ifndef DEFMENUGEN_H
#define DEFMENUGEN_H

#include <stdint.h>

#define MAGIC 0x123455AA

typedef enum  { SignalSinus, SignalTriangle, SignalDentDeScie, SignalCarre } E_FormesSignal;


typedef enum  { Select_Forme, Select_Freq, Select_Ampli, Select_Offset, Set_Forme, Set_Freq, Set_Ampli, Set_Offset } E_Switch;


// Structure des param�tres du g�n�rateur
typedef struct {
      E_FormesSignal Forme;
      int16_t Frequence;
      int16_t Amplitude;
      int16_t Offset;
      uint32_t Magic;
} S_ParamGen;

typedef struct {
      char C_Forme;
      char C_Freq;
      char C_Ampli;
      char C_Offset;
} S_Curseur;


extern S_ParamGen Test; 

#endif
