/*
  Faux86: A portable, open-source 8086 PC emulator.
  Copyright (C)2018 James Howard
  Based on Fake86
  Copyright (C)2010-2013 Mike Chambers

  Contributions and Updates (c)2023 Curtis aka ArnoldUK

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#pragma once

// #include <stdint.h>

#include "Types.h"
#include "Audio.h"

#define PC_SPEAKER_GATE_DIRECT 0
#define PC_SPEAKER_GATE_TIMER2 1
#define PC_SPEAKER_USE_DIRECT 0
#define PC_SPEAKER_USE_TIMER2 1

#define PC_SPEAKER_MOVEMENT 800

namespace Faux86
{
  class VM;

  class PCSpeaker : public SoundCardInterface
  {
  public:
    PCSpeaker(VM &inVM);

    int16_t generateSample() override;

    void tick();
    void setGateState(uint8_t gate, uint8_t value);
    void selectGate(uint8_t value);
    int16_t getSample();
    void init();

    bool enabled = false;

  private:
    VM &vm;

    uint64_t speakerfullstep = 0;
    uint64_t speakerhalfstep = 0;
    uint64_t speakercurstep = 0;
    int16_t speakerpos = 0;

    uint8_t speakergateselect = 0;
    uint8_t speakergate[2] = {0};
    int16_t speakeramplitude = 0;
  };
}
