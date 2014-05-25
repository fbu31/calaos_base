/******************************************************************************
 **  Copyright (c) 2007-2014, Calaos. All Rights Reserved.
 **
 **  This file is part of Calaos.
 **
 **  Calaos is free software; you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation; either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  Calaos is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with Foobar; if not, write to the Free Software
 **  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 **
 ******************************************************************************/

#ifndef WEBOUTPUTSWITCH_H
#define WEBOUTPUTSWITCH_H

#include <Calaos.h>
#include <OutputLight.h>

namespace Calaos
{

class WebOutputLight : public OutputLight
{

protected:
    virtual void readValue();
    virtual bool set_value_real(bool val);

public:
    WebOutputLight(Params &p);
    ~WebOutputLight();
};

}

#endif // WEBOUTPUTSWITCH_H