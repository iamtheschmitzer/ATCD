// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html


// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_CORBA_POLICY___CI_)
#define _CORBA_POLICY___CI_

ACE_INLINE
CORBA::Policy::Policy (
    TAO_Stub *objref,
    CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant
  )
  : ACE_NESTED_CLASS (CORBA, Object) (objref, _tao_collocated, servant)
{
  this->CORBA_Policy_setup_collocation (_tao_collocated);
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_CORBA_POLICYMANAGER___CI_)
#define _CORBA_POLICYMANAGER___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/interface_ci.cpp:68

#if !defined (_CORBA_POLICYCURRENT___CI_)
#define _CORBA_POLICYCURRENT___CI_

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/cdr_op_ci.cpp:71

ACE_INLINE
CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::PolicyError &_tao_aggregate
  )
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      if (
        (strm << _tao_aggregate.reason)
       )
        {
          return 1;
        }
      else
        {
          return 0;
        }
    }
  else
    {
      return 0;
    }
}

ACE_INLINE
CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::PolicyError &_tao_aggregate
  )
{
  // Demarshal the members.
  if (
    (strm >> _tao_aggregate.reason)
  )
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_ci.cpp:84

#if !defined _TAO_CDR_OP_CORBA_InvalidPolicies__tao_seq_UShort_I_
#define _TAO_CDR_OP_CORBA_InvalidPolicies__tao_seq_UShort_I_

CORBA::Boolean TAO_Export operator<< (
    TAO_OutputCDR &,
    const CORBA::InvalidPolicies::_tao_seq_UShort &
  );

CORBA::Boolean TAO_Export operator>> (
    TAO_InputCDR &,
    CORBA::InvalidPolicies::_tao_seq_UShort &
  );

#endif /* _TAO_CDR_OP_CORBA_InvalidPolicies__tao_seq_UShort_I_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/cdr_op_ci.cpp:71

ACE_INLINE
CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::InvalidPolicies &_tao_aggregate
  )
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      if (
        (strm << _tao_aggregate.indices)
       )
        {
          return 1;
        }
      else
        {
          return 0;
        }
    }
  else
    {
      return 0;
    }
}

ACE_INLINE
CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::InvalidPolicies &_tao_aggregate
  )
{
  // Demarshal the members.
  if (
    (strm >> _tao_aggregate.indices)
  )
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_interface/cdr_op_ci.cpp:72

TAO_Export CORBA::Boolean operator<< (
    TAO_OutputCDR &,
    const CORBA::Policy_ptr
  );

TAO_Export CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CORBA::Policy_ptr &
  );

