#ifndef GRFinishBar_H
#define GRFinishBar_H

/*
  GUIDO Library
  Copyright (C) 2002  Holger Hoos, Juergen Kilian, Kai Renz
  Copyright (C) 2002-2017 Grame

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Grame Research Laboratory, 11, cours de Verdun Gensoul 69002 Lyon - France
  research@grame.fr

*/

#include "GRBar.h"

class GRStaff;
class ARFinishBar;

/** \brief not yet documented
*/
class GRFinishBar: public GRBar
{
public:

	GRFinishBar( const ARFinishBar *p_arbar,GRStaff * inStaff, const TYPE_TIMEPOSITION & p_timeposition, float proportionnalRender);
	GRFinishBar( const ARFinishBar *p_arbar,GRSystem *p_grsystem,GRStaff * inStaff, const TYPE_TIMEPOSITION &p_timeposition, float proportionnalRender);

    virtual ~GRFinishBar() {}

    const ARFinishBar * getARFinishBar() const;

    virtual const NVPoint & getReferencePosition() const	{ return refpos; }
    virtual void  DrawWithLines( VGDevice & hdc ) const;
    virtual void  updateBoundingBox();
    virtual const GRFinishBar*  isFinishBar() const { return this; };

protected:
    float	fBaseThickness;
    static	NVPoint refpos;
    float   fStaffThickness;
    float   fSize;
};

#endif 
