// $Id$

#ifndef CIAO_GENERIC_CONTEXT_IMPL_T_C
#define CIAO_GENERIC_CONTEXT_IMPL_T_C

namespace CIAO
{
  template <typename BASE_CTX,
            typename COMP>
  Generic_Context_Impl<BASE_CTX, COMP>::Generic_Context_Impl (
      Components::CCMHome_ptr the_home,
      ::CIAO::Generic_Container_ptr c,
      PortableServer::Servant sv,
      const char* id)
    : Context_Impl_Base_T < ::CIAO::Generic_Container> (the_home, c, id),
      servant_ (sv)
  {
  }

  template <typename BASE_CTX,
            typename COMP>
  Generic_Context_Impl<BASE_CTX, COMP>::~Generic_Context_Impl (void)
  {
  }

  template <typename BASE_CTX,
            typename COMP>
  ::Components::ContainerPortableInterceptor::ClientContainerInterceptorRegistration_ptr
  Generic_Context_Impl<BASE_CTX, COMP>::get_client_interceptor_registration (void)
  {
    return this->container_->get_client_interceptor_registration ();
  }

  template <typename BASE_CTX,
            typename COMP>
  ::Components::ContainerPortableInterceptor::ServantContainerInterceptorRegistration_ptr
  Generic_Context_Impl<BASE_CTX, COMP>::get_servant_interceptor_registration (void)
  {
    return this->container_->get_servant_interceptor_registration ();
  }

  template <typename BASE_CTX,
            typename COMP>
  ::Components::ContainerPortableInterceptor::ServerContainerInterceptorRegistration_ptr
  Generic_Context_Impl<BASE_CTX, COMP>::get_server_interceptor_registration (void)
  {
    return this->container_->get_server_interceptor_registration ();
  }

  template <typename BASE_CTX,
            typename COMP>
  ::Components::ContainerPortableInterceptor::StubContainerInterceptorRegistration_ptr
  Generic_Context_Impl<BASE_CTX, COMP>::get_stub_interceptor_registration (void)
  {
    return this->container_->get_stub_interceptor_registration ();
  }

  template <typename BASE_CTX,
            typename COMP>
  ::Components::Cookie *
  Generic_Context_Impl<BASE_CTX, COMP>::install_service_reference (
        const char * service_id,
        ::CORBA::Object_ptr objref)
  {
    return this->container_->install_service_reference (service_id,
                                                        objref);
  }

  template <typename BASE_CTX,
            typename COMP>
  ::CORBA::Object_ptr
  Generic_Context_Impl<BASE_CTX, COMP>::uninstall_service_reference (
    ::Components::Cookie * ck)
  {
    return this->container_->uninstall_service_reference (ck);
  }
}

#endif /* CIAO_GENERIC_CONTEXT_IMPL_T_C */
