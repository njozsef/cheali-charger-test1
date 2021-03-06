/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <Arduino.h>
#include "AnalogInputs.h"

const AnalogInputs::DefaultValues AnalogInputs::inputsP_[AnalogInputs::PHYSICAL_INPUTS] PROGMEM = {
    {{0, 0},                        {52160, 24039}},    //Vout
    {{0, 0},                        {26613, 12518}},    //VreversePolarity
    {{713, 50},                        {10838, 1000}},    //Ismps
    {{2240, 50},                        {11200, 300}},    //Idischarge

    {{0, 0},                        {0, 0}},    //VoutMux
    {{0, 0},                        {0, 0}},    //Tintern
    {{0, 0},                        {48013, 14038}},    //Vin
    {{19650, 2980},                        {18700, 6000}},    //Textern

    {{0, 0},                        {48963, 3752}},    //Vb0_pin
    {{0, 0},                        {49536, 3815}},    //Vb1_pin
    {{0, 0},                      {50624, 7644}},  //Vb2_pin
    {{0, 0},                      {49727, 3821}},  //Vb3_pin

    {{0, 0},                      {54912, 4190}},  //Vb4_pin
    {{0, 0},                      {54445, 4193}},  //Vb5_pin
    {{0, 0},                      {55168, 4195}},  //Vb6_pin

#if MAX_BANANCE_CELLS > 6
    {{0, 0},                        {50752, ANALOG_VOLT(3.865)}},   //Vb7_pin
    {{0, 0},                        {51008, ANALOG_VOLT(3.885)}},   //Vb8_pin
#endif
    //1-1 correlation
<<<<<<< HEAD:src/hardware/50W-6A/defaultCalibration_b.cpp
    {{720, 50},                      {10840, 1000}},  //IsmpsValue
    {{250, 50},                      {1370, 300}},  //IdischargeValue
#ifdef ANALOG_INPUTS_V_UNKNOWN
    {{0, 0},                         {1, 1}},           //UNKNOWN0
    {{0, 0},                         {1, 1}},           //UNKNOWN1
#endif
=======
    {{710, 50},                      {11310, 1000}},  //IsmpsValue
    {{260, 50},                      {1490, 300}},  //IdischargeValue
>>>>>>> 8e4b3f57d668bf4596cc5b608bef463bef246448:src/hardware/Turnigy-Accucel-6-50W-5A/defaultCalibration.cpp
};


