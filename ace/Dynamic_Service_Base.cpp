// $Id$

#ifndef ACE_DYNAMIC_SERVICE_BASE_C
#define ACE_DYNAMIC_SERVICE_BASE_C

#include "ace/Service_Config.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Service_Repository.h"
#include "ace/Dynamic_Service_Base.h"
#include "ace/Log_Msg.h"

ACE_RCSID(ace, Dynamic_Service_Base, "$Id$")

void
ACE_Dynamic_Service_Base::dump (void) const
{
  ACE_TRACE ("ACE_Dynamic_Service_Base::dump");

  ACE_DEBUG ((LM_DEBUG, ACE_BEGIN_DUMP, this));
  ACE_DEBUG ((LM_DEBUG, ACE_LIB_TEXT ("\n")));
  ACE_DEBUG ((LM_DEBUG, ACE_END_DUMP));
}

// Get the instance using <name>.

void *
ACE_Dynamic_Service_Base::instance (const ACE_TCHAR *name)
{
  ACE_TRACE ("ACE_Dynamic_Service_Base::instance");
  const ACE_Service_Type *svc_rec;

  if (ACE_Service_Repository::instance ()->find (name,
                                                 &svc_rec) == -1)
    return 0;

  const ACE_Service_Type_Impl *type = svc_rec->type ();

  if (type == 0)
    return 0;
  else
    {
      void *obj = type->object ();
      return obj;
    }
}

#endif /* ACE_DYNAMIC_SERVICE_BASE_C */
