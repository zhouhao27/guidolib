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

#include <iostream>

#include "ARCue.h"
#include "TagParameterStrings.h"
#include "TagParameterString.h"


ARCue::ARCue()
{
	setupTagParameters (gMaps->sARCueMap);
	rangesetting = ONLY;
}

const TagParameterString * ARCue::getName() const
{
	return getParameter<TagParameterString>(kNameStr, true);
}

