// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO IDL
//
// = FILENAME
//    be_param_holder.cpp
//
// = DESCRIPTION
//    Place holder referenced by AST_Field (or subclass) 
//    representing a corresponding template parameter in IDL.
//
// = AUTHOR
//    Jeff Parsons
//
// ============================================================================

#include "be_param_holder.h"

be_param_holder::be_param_holder (Identifier *parameter_name)
  : COMMON_Base (false,
                 false),
    AST_Decl (AST_Decl::NT_param_holder,
              0),
    AST_Param_Holder (parameter_name),
    be_decl (AST_Decl::NT_param_holder,
              0)
{
}

be_param_holder::~be_param_holder (void)
{
}

int
be_param_holder::accept (be_visitor *)
{
  // This node isn't part of the AST, but managed by
  // its reference holder.
  return 0;
}

void
be_param_holder::destroy (void)
{
  this->AST_Param_Holder::destroy ();
  this->be_decl::destroy ();
}

IMPL_NARROW_FROM_DECL (be_param_holder)

