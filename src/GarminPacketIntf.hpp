// -*- mode: c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2; coding: utf-8-unix -*-
// ***** BEGIN LICENSE BLOCK *****
////////////////////////////////////////////////////////////////////
// Copyright (c) 2011-2014 RALOVICH, Kristóf                      //
//                                                                //
// This program is free software; you can redistribute it and/or  //
// modify it under the terms of the GNU General Public License    //
// version 2 as published by the Free Software Foundation.        //
//                                                                //
////////////////////////////////////////////////////////////////////
// ***** END LICENSE BLOCK *****
#pragma once

#include "antdefs.hpp"
#include <vector>

namespace antpm {

// create packets to send to device (to ask for tracks, etc.)

// interpret incoming messages from stream of bytes

// tasks:
// - interpter usbmon logs
// - download runs

struct GarminPacket
{
  uint8_t  mPacketType;
  uint8_t  mReserved123[3];
  uint16_t mPacketId;
  uint8_t  mReserved67[2];
  uint32_t mDataSize;
  uint8_t  mData[1];
};

struct GarminPacketIntf
{
  bool interpret(std::vector<uint8_t> data);
};

}

