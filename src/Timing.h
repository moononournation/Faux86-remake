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

#include "Config.h"
#include "Types.h"

namespace Faux86
{
  class VM;

  class TimingScheduler
  {
  public:
    TimingScheduler(VM &inVM);

    void init();
    void tick(bool bSkipDraw = false);

    uint64_t getHostFreq();
    uint64_t getTicks();
    uint64_t getMS();
    uint64_t getElapsed(uint64_t prevTick);
    uint64_t getElapsedMS(uint64_t prevTick);

    uint64_t sampleticks;
    uint64_t tickgap;
    uint64_t i8253tickgap;

  private:
    uint64_t lasttick, curtick, lasti8253tick, scanlinetiming, lastscanlinetick, curscanline = 0;
    uint64_t lastsampletick, ssourceticks, lastssourcetick, adlibticks, lastadlibtick, lastblastertick = 0;
    uint64_t speakerticks, lastspeakertick = 0;
    uint64_t mouseticks, lastmousetick = 0;
    uint64_t drawticks, lastdrawtick = 0;
    uint64_t dramticks, lastdramtick = 0;
    uint64_t vgacursorticks, lastvgacursortick = 0;
    uint64_t vgahblanktiming, vgahblankendtiming = 0;
    // uint16_t pit0counter = 65535;

    VM &vm;
  };
}
