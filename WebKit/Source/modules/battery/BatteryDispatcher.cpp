// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "modules/battery/BatteryDispatcher.h"

#include "modules/battery/BatteryStatus.h"
#include "platform/NotImplemented.h"
#include "public/platform/Platform.h"

namespace blink {

BatteryDispatcher& BatteryDispatcher::instance()
{
    DEFINE_STATIC_LOCAL(BatteryDispatcher, batteryDispatcher, ());
    return batteryDispatcher;
}

BatteryDispatcher::BatteryDispatcher()
{
}

BatteryDispatcher::~BatteryDispatcher()
{
}

void BatteryDispatcher::updateBatteryStatus(const WebBatteryStatus& batteryStatus)
{
    m_batteryStatus = BatteryStatus::create(batteryStatus.charging, batteryStatus.chargingTime, batteryStatus.dischargingTime, batteryStatus.level);
    notifyControllers();
}

BatteryStatus* BatteryDispatcher::latestData()
{
    return m_batteryStatus.get();
}

void BatteryDispatcher::startListening()
{
    Platform::current()->startListening(WebPlatformEventBattery, this);
}

void BatteryDispatcher::stopListening()
{
    Platform::current()->stopListening(WebPlatformEventBattery);
    m_batteryStatus.clear();
}

} // namespace blink
