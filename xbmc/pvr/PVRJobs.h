#pragma once
/*
 *      Copyright (C) 2012-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "utils/JobManager.h"

#include "pvr/PVRTypes.h"

namespace PVR
{
  class CPVRSetRecordingOnChannelJob : public CJob
  {
  public:
    CPVRSetRecordingOnChannelJob(const CPVRChannelPtr &channel, bool bOnOff) :
    m_channel(channel), m_bOnOff(bOnOff) {}
    virtual ~CPVRSetRecordingOnChannelJob() {}
    const char *GetType() const override { return "pvr-set-recording-on-channel"; }

    bool DoWork() override;
  private:
    CPVRChannelPtr m_channel;
    bool m_bOnOff;
  };

} // namespace PVR
