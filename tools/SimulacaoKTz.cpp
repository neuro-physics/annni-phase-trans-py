#define PY_MAJOR_VERSION 3
#undef ENABLE_PYTHON_MODULE
#include <pythonic/core.hpp>
#include <pythonic/python/core.hpp>
#include <pythonic/types/bool.hpp>
#include <pythonic/types/int.hpp>
#ifdef _OPENMP
#include <omp.h>
#endif
#include <pythonic\include\types\float.hpp>
#include <pythonic\include\types\int.hpp>
#include <pythonic\include\types\bool.hpp>
#include <pythonic\include\types\str.hpp>
#include <pythonic\include\types\ndarray.hpp>
#include <pythonic\types\str.hpp>
#include <pythonic\types\bool.hpp>
#include <pythonic\types\int.hpp>
#include <pythonic\types\float.hpp>
#include <pythonic\types\ndarray.hpp>
#include <pythonic/include/__dispatch__/copy.hpp>
#include <pythonic/include/builtins/abs.hpp>
#include <pythonic/include/builtins/assert.hpp>
#include <pythonic/include/builtins/float_.hpp>
#include <pythonic/include/builtins/getattr.hpp>
#include <pythonic/include/builtins/int_.hpp>
#include <pythonic/include/builtins/len.hpp>
#include <pythonic/include/builtins/list.hpp>
#include <pythonic/include/builtins/map.hpp>
#include <pythonic/include/builtins/max.hpp>
#include <pythonic/include/builtins/range.hpp>
#include <pythonic/include/builtins/str.hpp>
#include <pythonic/include/builtins/str/__mod__.hpp>
#include <pythonic/include/builtins/str/lower.hpp>
#include <pythonic/include/builtins/tuple.hpp>
#include <pythonic/include/functools/partial.hpp>
#include <pythonic/include/numpy/abs.hpp>
#include <pythonic/include/numpy/array.hpp>
#include <pythonic/include/numpy/asarray.hpp>
#include <pythonic/include/numpy/correlate.hpp>
#include <pythonic/include/numpy/dot.hpp>
#include <pythonic/include/numpy/exp.hpp>
#include <pythonic/include/numpy/mean.hpp>
#include <pythonic/include/numpy/nan.hpp>
#include <pythonic/include/numpy/nanargmax.hpp>
#include <pythonic/include/numpy/ndarray/flatten.hpp>
#include <pythonic/include/numpy/sqrt.hpp>
#include <pythonic/include/numpy/square.hpp>
#include <pythonic/include/numpy/var.hpp>
#include <pythonic/include/numpy/zeros.hpp>
#include <pythonic/include/operator_/add.hpp>
#include <pythonic/include/operator_/contains.hpp>
#include <pythonic/include/operator_/div.hpp>
#include <pythonic/include/operator_/eq.hpp>
#include <pythonic/include/operator_/gt.hpp>
#include <pythonic/include/operator_/iadd.hpp>
#include <pythonic/include/operator_/mul.hpp>
#include <pythonic/include/operator_/sub.hpp>
#include <pythonic/include/random/sample.hpp>
#include <pythonic/include/types/slice.hpp>
#include <pythonic/include/types/str.hpp>
#include <pythonic/__dispatch__/copy.hpp>
#include <pythonic/builtins/abs.hpp>
#include <pythonic/builtins/assert.hpp>
#include <pythonic/builtins/float_.hpp>
#include <pythonic/builtins/getattr.hpp>
#include <pythonic/builtins/int_.hpp>
#include <pythonic/builtins/len.hpp>
#include <pythonic/builtins/list.hpp>
#include <pythonic/builtins/map.hpp>
#include <pythonic/builtins/max.hpp>
#include <pythonic/builtins/range.hpp>
#include <pythonic/builtins/str.hpp>
#include <pythonic/builtins/str/__mod__.hpp>
#include <pythonic/builtins/str/lower.hpp>
#include <pythonic/builtins/tuple.hpp>
#include <pythonic/functools/partial.hpp>
#include <pythonic/numpy/abs.hpp>
#include <pythonic/numpy/array.hpp>
#include <pythonic/numpy/asarray.hpp>
#include <pythonic/numpy/correlate.hpp>
#include <pythonic/numpy/dot.hpp>
#include <pythonic/numpy/exp.hpp>
#include <pythonic/numpy/mean.hpp>
#include <pythonic/numpy/nan.hpp>
#include <pythonic/numpy/nanargmax.hpp>
#include <pythonic/numpy/ndarray/flatten.hpp>
#include <pythonic/numpy/sqrt.hpp>
#include <pythonic/numpy/square.hpp>
#include <pythonic/numpy/var.hpp>
#include <pythonic/numpy/zeros.hpp>
#include <pythonic/operator_/add.hpp>
#include <pythonic/operator_/contains.hpp>
#include <pythonic/operator_/div.hpp>
#include <pythonic/operator_/eq.hpp>
#include <pythonic/operator_/gt.hpp>
#include <pythonic/operator_/iadd.hpp>
#include <pythonic/operator_/mul.hpp>
#include <pythonic/operator_/sub.hpp>
#include <pythonic/random/sample.hpp>
#include <pythonic/types/slice.hpp>
#include <pythonic/types/str.hpp>
namespace 
{
  namespace __pythran_SimulacaoKTz
  {
    struct bootstrap_variance_lambda2
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type3;
        typedef __type3 __type4;
        typedef decltype(std::declval<__type2>()[std::declval<__type4>()]) __type5;
        typedef typename pythonic::returnable<__type5>::type __type6;
        typedef __type6 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 >
      inline
      typename type<argument_type0, argument_type1>::result_type operator()(argument_type0 x, argument_type1 i) const
      ;
    }  ;
    struct RodaSimulacaoMapa_lambda0
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::len{})>::type>::type __type1;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type2;
        typedef __type2 __type3;
        typedef decltype(std::declval<__type1>()(std::declval<__type3>())) __type4;
        typedef decltype(std::declval<__type0>()(std::declval<__type4>())) __type5;
        typedef typename pythonic::returnable<__type5>::type __type6;
        typedef __type6 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 >
      inline
      typename type<argument_type0, argument_type1>::result_type operator()(argument_type0 x0, argument_type1 _) const
      ;
    }  ;
    struct cosh
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 >
      struct type
      {
        typedef double __type0;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type1;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::exp{})>::type>::type __type2;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
        typedef __type3 __type4;
        typedef decltype(std::declval<__type2>()(std::declval<__type4>())) __type5;
        typedef typename pythonic::assignable<__type5>::type __type6;
        typedef __type6 __type7;
        typedef decltype(std::declval<__type1>()(std::declval<__type7>())) __type8;
        typedef decltype(pythonic::operator_::add(std::declval<__type0>(), std::declval<__type8>())) __type9;
        typedef decltype(pythonic::operator_::mul(std::declval<__type0>(), std::declval<__type7>())) __type11;
        typedef decltype(pythonic::operator_::div(std::declval<__type9>(), std::declval<__type11>())) __type12;
        typedef typename pythonic::returnable<__type12>::type __type13;
        typedef __type13 result_type;
      }  
      ;
      template <typename argument_type0 >
      inline
      typename type<argument_type0>::result_type operator()(argument_type0 x) const
      ;
    }  ;
    struct KTCTanh_FuncMapa
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type2>::type>::type __type3;
        typedef __type3 __type4;
        typedef std::integral_constant<long,1> __type6;
        typedef indexable_container<__type6, typename std::remove_reference<__type3>::type> __type7;
        typedef long __type8;
        typedef indexable<__type8> __type9;
        typedef std::integral_constant<long,2> __type10;
        typedef double __type11;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type12;
        typedef __type12 __type13;
        typedef decltype(pythonic::operator_::sub(std::declval<__type11>(), std::declval<__type13>())) __type14;
        typedef typename __combined<__type0,__type7,__type9>::type __type15;
        typedef __type15 __type16;
        typedef decltype(pythonic::types::as_const(std::declval<__type16>())) __type17;
        typedef typename std::tuple_element<2,typename std::remove_reference<__type17>::type>::type __type18;
        typedef decltype(pythonic::operator_::mul(std::declval<__type14>(), std::declval<__type18>())) __type19;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type20;
        typedef __type20 __type21;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type17>::type>::type __type24;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type25;
        typedef __type25 __type26;
        typedef decltype(pythonic::operator_::sub(std::declval<__type24>(), std::declval<__type26>())) __type27;
        typedef decltype(pythonic::operator_::mul(std::declval<__type21>(), std::declval<__type27>())) __type28;
        typedef decltype(pythonic::operator_::sub(std::declval<__type19>(), std::declval<__type28>())) __type29;
        typedef indexable_container<__type10, typename std::remove_reference<__type29>::type> __type30;
        typedef std::integral_constant<long,0> __type31;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::exp{})>::type>::type __type32;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type36;
        typedef __type36 __type37;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type2>::type>::type __type40;
        typedef decltype(pythonic::operator_::mul(std::declval<__type37>(), std::declval<__type40>())) __type41;
        typedef decltype(pythonic::operator_::sub(std::declval<__type3>(), std::declval<__type41>())) __type42;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type43;
        typedef __type43 __type44;
        typedef decltype(pythonic::operator_::add(std::declval<__type42>(), std::declval<__type44>())) __type45;
        typedef typename std::tuple_element<2,typename std::remove_reference<__type2>::type>::type __type48;
        typedef decltype(pythonic::operator_::div(std::declval<__type45>(), std::declval<__type48>())) __type49;
        typedef typename pythonic::assignable<__type49>::type __type50;
        typedef __type50 __type51;
        typedef decltype(pythonic::operator_::mul(std::declval<__type11>(), std::declval<__type51>())) __type52;
        typedef decltype(std::declval<__type32>()(std::declval<__type52>())) __type53;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type53>())) __type54;
        typedef decltype(pythonic::operator_::div(std::declval<__type11>(), std::declval<__type54>())) __type55;
        typedef decltype(pythonic::operator_::sub(std::declval<__type55>(), std::declval<__type11>())) __type56;
        typedef indexable_container<__type31, typename std::remove_reference<__type56>::type> __type57;
        typedef typename __combined<__type0,__type7,__type9,__type30,__type57>::type __type58;
        typedef __type58 __type59;
        typedef typename pythonic::returnable<__type59>::type __type60;
        typedef __type4 __ptype0;
        typedef __type4 __ptype1;
        typedef __type60 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
      ;
    }  ;
    struct KTzTanh_FuncMapa
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type2>::type>::type __type3;
        typedef __type3 __type4;
        typedef std::integral_constant<long,1> __type6;
        typedef indexable_container<__type6, typename std::remove_reference<__type3>::type> __type7;
        typedef long __type8;
        typedef indexable<__type8> __type9;
        typedef std::integral_constant<long,2> __type10;
        typedef double __type11;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type12;
        typedef __type12 __type13;
        typedef decltype(pythonic::operator_::sub(std::declval<__type11>(), std::declval<__type13>())) __type14;
        typedef typename __combined<__type0,__type7,__type9>::type __type15;
        typedef __type15 __type16;
        typedef decltype(pythonic::types::as_const(std::declval<__type16>())) __type17;
        typedef typename std::tuple_element<2,typename std::remove_reference<__type17>::type>::type __type18;
        typedef decltype(pythonic::operator_::mul(std::declval<__type14>(), std::declval<__type18>())) __type19;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type20;
        typedef __type20 __type21;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type17>::type>::type __type24;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type25;
        typedef __type25 __type26;
        typedef decltype(pythonic::operator_::sub(std::declval<__type24>(), std::declval<__type26>())) __type27;
        typedef decltype(pythonic::operator_::mul(std::declval<__type21>(), std::declval<__type27>())) __type28;
        typedef decltype(pythonic::operator_::sub(std::declval<__type19>(), std::declval<__type28>())) __type29;
        typedef indexable_container<__type10, typename std::remove_reference<__type29>::type> __type30;
        typedef std::integral_constant<long,0> __type31;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::exp{})>::type>::type __type32;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type36;
        typedef __type36 __type37;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type2>::type>::type __type40;
        typedef decltype(pythonic::operator_::mul(std::declval<__type37>(), std::declval<__type40>())) __type41;
        typedef decltype(pythonic::operator_::sub(std::declval<__type3>(), std::declval<__type41>())) __type42;
        typedef typename std::tuple_element<2,typename std::remove_reference<__type2>::type>::type __type45;
        typedef decltype(pythonic::operator_::add(std::declval<__type42>(), std::declval<__type45>())) __type46;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type47;
        typedef __type47 __type48;
        typedef decltype(pythonic::operator_::add(std::declval<__type46>(), std::declval<__type48>())) __type49;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type50;
        typedef __type50 __type51;
        typedef decltype(pythonic::operator_::div(std::declval<__type49>(), std::declval<__type51>())) __type52;
        typedef typename pythonic::assignable<__type52>::type __type53;
        typedef __type53 __type54;
        typedef decltype(pythonic::operator_::mul(std::declval<__type11>(), std::declval<__type54>())) __type55;
        typedef decltype(std::declval<__type32>()(std::declval<__type55>())) __type56;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type56>())) __type57;
        typedef decltype(pythonic::operator_::div(std::declval<__type11>(), std::declval<__type57>())) __type58;
        typedef decltype(pythonic::operator_::sub(std::declval<__type58>(), std::declval<__type11>())) __type59;
        typedef indexable_container<__type31, typename std::remove_reference<__type59>::type> __type60;
        typedef typename __combined<__type0,__type7,__type9,__type30,__type60>::type __type61;
        typedef __type61 __type62;
        typedef typename pythonic::returnable<__type62>::type __type63;
        typedef __type4 __ptype15;
        typedef __type4 __ptype16;
        typedef __type63 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
      ;
    }  ;
    struct KTTanh_FuncMapa
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type2>::type>::type __type3;
        typedef __type3 __type4;
        typedef std::integral_constant<long,1> __type6;
        typedef indexable_container<__type6, typename std::remove_reference<__type3>::type> __type7;
        typedef long __type8;
        typedef indexable<__type8> __type9;
        typedef std::integral_constant<long,0> __type10;
        typedef double __type11;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::exp{})>::type>::type __type12;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type16;
        typedef __type16 __type17;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type2>::type>::type __type20;
        typedef decltype(pythonic::operator_::mul(std::declval<__type17>(), std::declval<__type20>())) __type21;
        typedef decltype(pythonic::operator_::sub(std::declval<__type3>(), std::declval<__type21>())) __type22;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type23;
        typedef __type23 __type24;
        typedef decltype(pythonic::operator_::add(std::declval<__type22>(), std::declval<__type24>())) __type25;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type26;
        typedef __type26 __type27;
        typedef decltype(pythonic::operator_::div(std::declval<__type25>(), std::declval<__type27>())) __type28;
        typedef typename pythonic::assignable<__type28>::type __type29;
        typedef __type29 __type30;
        typedef decltype(pythonic::operator_::mul(std::declval<__type11>(), std::declval<__type30>())) __type31;
        typedef decltype(std::declval<__type12>()(std::declval<__type31>())) __type32;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type32>())) __type33;
        typedef decltype(pythonic::operator_::div(std::declval<__type11>(), std::declval<__type33>())) __type34;
        typedef decltype(pythonic::operator_::sub(std::declval<__type34>(), std::declval<__type11>())) __type35;
        typedef indexable_container<__type10, typename std::remove_reference<__type35>::type> __type36;
        typedef typename __combined<__type0,__type7,__type9,__type36>::type __type37;
        typedef __type37 __type38;
        typedef typename pythonic::returnable<__type38>::type __type39;
        typedef __type4 __ptype30;
        typedef __type4 __ptype31;
        typedef __type39 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
      ;
    }  ;
    struct KTzLog_FuncMapa
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type2>::type>::type __type3;
        typedef __type3 __type4;
        typedef std::integral_constant<long,1> __type6;
        typedef indexable_container<__type6, typename std::remove_reference<__type3>::type> __type7;
        typedef long __type8;
        typedef indexable<__type8> __type9;
        typedef std::integral_constant<long,2> __type10;
        typedef double __type11;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type12;
        typedef __type12 __type13;
        typedef decltype(pythonic::operator_::sub(std::declval<__type11>(), std::declval<__type13>())) __type14;
        typedef typename __combined<__type0,__type7,__type9>::type __type15;
        typedef __type15 __type16;
        typedef decltype(pythonic::types::as_const(std::declval<__type16>())) __type17;
        typedef typename std::tuple_element<2,typename std::remove_reference<__type17>::type>::type __type18;
        typedef decltype(pythonic::operator_::mul(std::declval<__type14>(), std::declval<__type18>())) __type19;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type20;
        typedef __type20 __type21;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type17>::type>::type __type24;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type25;
        typedef __type25 __type26;
        typedef decltype(pythonic::operator_::sub(std::declval<__type24>(), std::declval<__type26>())) __type27;
        typedef decltype(pythonic::operator_::mul(std::declval<__type21>(), std::declval<__type27>())) __type28;
        typedef decltype(pythonic::operator_::sub(std::declval<__type19>(), std::declval<__type28>())) __type29;
        typedef indexable_container<__type10, typename std::remove_reference<__type29>::type> __type30;
        typedef std::integral_constant<long,0> __type31;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type35;
        typedef __type35 __type36;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type2>::type>::type __type39;
        typedef decltype(pythonic::operator_::mul(std::declval<__type36>(), std::declval<__type39>())) __type40;
        typedef decltype(pythonic::operator_::sub(std::declval<__type3>(), std::declval<__type40>())) __type41;
        typedef typename std::tuple_element<2,typename std::remove_reference<__type2>::type>::type __type44;
        typedef decltype(pythonic::operator_::add(std::declval<__type41>(), std::declval<__type44>())) __type45;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type46;
        typedef __type46 __type47;
        typedef decltype(pythonic::operator_::add(std::declval<__type45>(), std::declval<__type47>())) __type48;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type49;
        typedef __type49 __type50;
        typedef decltype(pythonic::operator_::div(std::declval<__type48>(), std::declval<__type50>())) __type51;
        typedef typename pythonic::assignable<__type51>::type __type52;
        typedef __type52 __type53;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::abs{})>::type>::type __type54;
        typedef decltype(std::declval<__type54>()(std::declval<__type53>())) __type56;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type56>())) __type57;
        typedef decltype(pythonic::operator_::div(std::declval<__type53>(), std::declval<__type57>())) __type58;
        typedef indexable_container<__type31, typename std::remove_reference<__type58>::type> __type59;
        typedef typename __combined<__type0,__type7,__type9,__type30,__type59>::type __type60;
        typedef __type60 __type61;
        typedef typename pythonic::returnable<__type61>::type __type62;
        typedef __type4 __ptype40;
        typedef __type4 __ptype41;
        typedef __type62 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
      ;
    }  ;
    struct KTLog_FuncMapa
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::tuple_element<0,typename std::remove_reference<__type2>::type>::type __type3;
        typedef __type3 __type4;
        typedef std::integral_constant<long,1> __type6;
        typedef indexable_container<__type6, typename std::remove_reference<__type3>::type> __type7;
        typedef long __type8;
        typedef indexable<__type8> __type9;
        typedef std::integral_constant<long,0> __type10;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type14;
        typedef __type14 __type15;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type2>::type>::type __type18;
        typedef decltype(pythonic::operator_::mul(std::declval<__type15>(), std::declval<__type18>())) __type19;
        typedef decltype(pythonic::operator_::sub(std::declval<__type3>(), std::declval<__type19>())) __type20;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type21;
        typedef __type21 __type22;
        typedef decltype(pythonic::operator_::add(std::declval<__type20>(), std::declval<__type22>())) __type23;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type24;
        typedef __type24 __type25;
        typedef decltype(pythonic::operator_::div(std::declval<__type23>(), std::declval<__type25>())) __type26;
        typedef typename pythonic::assignable<__type26>::type __type27;
        typedef __type27 __type28;
        typedef double __type29;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::abs{})>::type>::type __type30;
        typedef decltype(std::declval<__type30>()(std::declval<__type28>())) __type32;
        typedef decltype(pythonic::operator_::add(std::declval<__type29>(), std::declval<__type32>())) __type33;
        typedef decltype(pythonic::operator_::div(std::declval<__type28>(), std::declval<__type33>())) __type34;
        typedef indexable_container<__type10, typename std::remove_reference<__type34>::type> __type35;
        typedef typename __combined<__type0,__type7,__type9,__type35>::type __type36;
        typedef __type36 __type37;
        typedef typename pythonic::returnable<__type37>::type __type38;
        typedef __type4 __ptype55;
        typedef __type4 __ptype56;
        typedef __type38 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
      ;
    }  ;
    struct calc_AutoCorr_normalized_lag
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::mean{})>::type>::type __type0;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type1;
        typedef long __type2;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
        typedef __type3 __type4;
        typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type4>())) __type5;
        typedef decltype(pythonic::operator_::mul(std::declval<__type2>(), std::declval<__type5>())) __type6;
        typedef decltype(std::declval<__type1>()(std::declval<__type6>())) __type7;
        typedef typename pythonic::assignable<__type7>::type __type8;
        typedef typename __combined<__type8,__type4>::type __type10;
        typedef __type10 __type11;
        typedef decltype(pythonic::types::as_const(std::declval<__type11>())) __type12;
        typedef pythonic::types::fast_contiguous_slice __type13;
        typedef decltype(std::declval<__type12>()[std::declval<__type13>()]) __type14;
        typedef decltype(std::declval<__type0>()(std::declval<__type4>())) __type16;
        typedef typename pythonic::assignable<__type16>::type __type17;
        typedef __type17 __type18;
        typedef decltype(pythonic::operator_::sub(std::declval<__type14>(), std::declval<__type18>())) __type19;
        typedef pythonic::types::contiguous_slice __type22;
        typedef decltype(std::declval<__type12>()[std::declval<__type22>()]) __type23;
        typedef decltype(pythonic::operator_::sub(std::declval<__type23>(), std::declval<__type18>())) __type25;
        typedef decltype(pythonic::operator_::mul(std::declval<__type19>(), std::declval<__type25>())) __type26;
        typedef decltype(std::declval<__type0>()(std::declval<__type26>())) __type27;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type28;
        typedef decltype(std::declval<__type28>()(std::declval<__type4>())) __type30;
        typedef decltype(pythonic::operator_::div(std::declval<__type27>(), std::declval<__type30>())) __type31;
        typedef typename pythonic::returnable<__type31>::type __type32;
        typedef __type32 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 >
      inline
      typename type<argument_type0, argument_type1>::result_type operator()(argument_type0 x, argument_type1 tau) const
      ;
    }  ;
    struct calc_AutoCorr_normalized
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
        typedef __type1 __type2;
        typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type2>())) __type3;
        typedef decltype(std::declval<__type0>()(std::declval<__type3>())) __type4;
        typedef typename pythonic::assignable<__type4>::type __type5;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type6;
        typedef __type5 __type7;
        typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type7>())) __type8;
        typedef decltype(std::declval<__type6>()(std::declval<__type8>())) __type9;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type9>::type::iterator>::value_type>::type __type10;
        typedef __type10 __type11;
        typedef indexable<__type11> __type12;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::mean{})>::type>::type __type13;
        typedef long __type16;
        typedef decltype(pythonic::operator_::mul(std::declval<__type16>(), std::declval<__type8>())) __type19;
        typedef decltype(pythonic::operator_::add(std::declval<__type3>(), std::declval<__type19>())) __type20;
        typedef decltype(std::declval<__type0>()(std::declval<__type20>())) __type21;
        typedef typename pythonic::assignable<__type21>::type __type22;
        typedef typename __combined<__type22,__type2>::type __type24;
        typedef __type24 __type25;
        typedef decltype(pythonic::types::as_const(std::declval<__type25>())) __type26;
        typedef pythonic::types::fast_contiguous_slice __type27;
        typedef decltype(std::declval<__type26>()[std::declval<__type27>()]) __type28;
        typedef decltype(std::declval<__type13>()(std::declval<__type2>())) __type30;
        typedef typename pythonic::assignable<__type30>::type __type31;
        typedef __type31 __type32;
        typedef decltype(pythonic::operator_::sub(std::declval<__type28>(), std::declval<__type32>())) __type33;
        typedef decltype(pythonic::operator_::mul(std::declval<__type33>(), std::declval<__type33>())) __type39;
        typedef decltype(std::declval<__type13>()(std::declval<__type39>())) __type40;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type41;
        typedef decltype(std::declval<__type41>()(std::declval<__type2>())) __type43;
        typedef typename pythonic::assignable<__type43>::type __type44;
        typedef __type44 __type45;
        typedef decltype(pythonic::operator_::div(std::declval<__type40>(), std::declval<__type45>())) __type46;
        typedef container<typename std::remove_reference<__type46>::type> __type47;
        typedef typename __combined<__type5,__type12,__type47>::type __type48;
        typedef __type48 __type49;
        typedef typename pythonic::returnable<__type49>::type __type50;
        typedef __type50 result_type;
      }  
      ;
      template <typename argument_type0 >
      inline
      typename type<argument_type0>::result_type operator()(argument_type0 x) const
      ;
    }  ;
    struct calc_AutoCorr_not_normalized_lag
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::dot{})>::type>::type __type0;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type1;
        typedef long __type2;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type3;
        typedef __type3 __type4;
        typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type4>())) __type5;
        typedef decltype(pythonic::operator_::mul(std::declval<__type2>(), std::declval<__type5>())) __type6;
        typedef decltype(std::declval<__type1>()(std::declval<__type6>())) __type7;
        typedef typename pythonic::assignable<__type7>::type __type8;
        typedef typename __combined<__type8,__type4>::type __type10;
        typedef __type10 __type11;
        typedef decltype(pythonic::types::as_const(std::declval<__type11>())) __type12;
        typedef pythonic::types::fast_contiguous_slice __type13;
        typedef decltype(std::declval<__type12>()[std::declval<__type13>()]) __type14;
        typedef pythonic::types::contiguous_slice __type17;
        typedef decltype(std::declval<__type12>()[std::declval<__type17>()]) __type18;
        typedef decltype(std::declval<__type0>()(std::declval<__type14>(), std::declval<__type18>())) __type19;
        typedef typename pythonic::returnable<__type19>::type __type20;
        typedef __type20 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 >
      inline
      typename type<argument_type0, argument_type1>::result_type operator()(argument_type0 x, argument_type1 tau) const
      ;
    }  ;
    struct calc_AutoCorr_not_normalized
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::correlate{})>::type>::type __type0;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
        typedef __type1 __type2;
        typedef pythonic::types::str __type4;
        typedef decltype(std::declval<__type0>()(std::declval<__type2>(), std::declval<__type2>(), std::declval<__type4>())) __type5;
        typedef typename pythonic::assignable<__type5>::type __type6;
        typedef __type6 __type7;
        typedef pythonic::types::contiguous_slice __type8;
        typedef decltype(std::declval<__type7>()[std::declval<__type8>()]) __type9;
        typedef typename pythonic::returnable<__type9>::type __type10;
        typedef __type10 result_type;
      }  
      ;
      template <typename argument_type0 >
      inline
      typename type<argument_type0>::result_type operator()(argument_type0 x) const
      ;
    }  ;
    struct sech
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 >
      struct type
      {
        typedef double __type0;
        typedef cosh __type1;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type2;
        typedef __type2 __type3;
        typedef decltype(std::declval<__type1>()(std::declval<__type3>())) __type4;
        typedef decltype(pythonic::operator_::div(std::declval<__type0>(), std::declval<__type4>())) __type5;
        typedef typename pythonic::returnable<__type5>::type __type6;
        typedef __type6 result_type;
      }  
      ;
      template <typename argument_type0 >
      inline
      typename type<argument_type0>::result_type operator()(argument_type0 x) const
      ;
    }  ;
    struct KT_susceptibilidade
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
      struct type
      {
        typedef double __type0;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
        typedef __type1 __type2;
        typedef decltype(pythonic::operator_::mul(std::declval<__type0>(), std::declval<__type2>())) __type3;
        typedef decltype(pythonic::operator_::add(std::declval<__type0>(), std::declval<__type3>())) __type4;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type5;
        typedef __type5 __type6;
        typedef cosh __type7;
        typedef long __type8;
        typedef decltype(pythonic::operator_::sub(std::declval<__type8>(), std::declval<__type2>())) __type10;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type11;
        typedef __type11 __type12;
        typedef decltype(pythonic::operator_::mul(std::declval<__type10>(), std::declval<__type12>())) __type13;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type14;
        typedef __type14 __type15;
        typedef decltype(pythonic::operator_::add(std::declval<__type13>(), std::declval<__type15>())) __type16;
        typedef decltype(pythonic::operator_::mul(std::declval<__type0>(), std::declval<__type16>())) __type17;
        typedef decltype(pythonic::operator_::div(std::declval<__type17>(), std::declval<__type6>())) __type19;
        typedef decltype(std::declval<__type7>()(std::declval<__type19>())) __type20;
        typedef decltype(pythonic::operator_::add(std::declval<__type0>(), std::declval<__type20>())) __type21;
        typedef decltype(pythonic::operator_::mul(std::declval<__type6>(), std::declval<__type21>())) __type22;
        typedef decltype(pythonic::operator_::add(std::declval<__type4>(), std::declval<__type22>())) __type23;
        typedef decltype(pythonic::operator_::div(std::declval<__type0>(), std::declval<__type23>())) __type24;
        typedef typename pythonic::returnable<__type24>::type __type25;
        typedef __type25 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type operator()(argument_type0 K, argument_type1 T, argument_type2 H, argument_type3 m_medio) const
      ;
    }  ;
    struct bootstrap_variance
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      struct type
      {
        typedef double __type0;
        typedef typename pythonic::assignable<__type0>::type __type1;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type2;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::list{})>::type>::type __type3;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::map{})>::type>::type __type4;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type5;
        typedef bootstrap_variance_lambda2 __type6;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type7;
        typedef __type7 __type8;
        typedef decltype(std::declval<__type5>()(std::declval<__type6>(), std::declval<__type8>())) __type9;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::random::functor::sample{})>::type>::type __type10;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type11;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::len{})>::type>::type __type12;
        typedef decltype(std::declval<__type12>()(std::declval<__type8>())) __type14;
        typedef decltype(std::declval<__type11>()(std::declval<__type14>())) __type15;
        typedef typename pythonic::assignable<__type15>::type __type16;
        typedef __type16 __type17;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type18;
        typedef __type18 __type19;
        typedef decltype(std::declval<__type10>()(std::declval<__type17>(), std::declval<__type19>())) __type20;
        typedef typename pythonic::assignable<__type20>::type __type21;
        typedef __type21 __type22;
        typedef decltype(std::declval<__type4>()(std::declval<__type9>(), std::declval<__type22>())) __type23;
        typedef decltype(std::declval<__type3>()(std::declval<__type23>())) __type24;
        typedef decltype(std::declval<__type2>()(std::declval<__type24>())) __type25;
        typedef typename pythonic::assignable<__type25>::type __type26;
        typedef __type26 __type27;
        typedef typename __combined<__type1,__type27>::type __type28;
        typedef __type28 __type29;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::float_{})>::type>::type __type30;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type31;
        typedef __type31 __type32;
        typedef decltype(std::declval<__type30>()(std::declval<__type32>())) __type33;
        typedef decltype(pythonic::operator_::div(std::declval<__type29>(), std::declval<__type33>())) __type34;
        typedef typename pythonic::assignable<__type34>::type __type35;
        typedef __type35 __type36;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::sqrt{})>::type>::type __type37;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type38;
        typedef decltype(std::declval<__type38>()(std::declval<__type27>())) __type40;
        typedef typename __combined<__type1,__type40>::type __type41;
        typedef __type41 __type42;
        typedef decltype(pythonic::operator_::div(std::declval<__type42>(), std::declval<__type33>())) __type45;
        typedef decltype(std::declval<__type38>()(std::declval<__type36>())) __type47;
        typedef decltype(pythonic::operator_::sub(std::declval<__type45>(), std::declval<__type47>())) __type48;
        typedef decltype(std::declval<__type37>()(std::declval<__type48>())) __type49;
        typedef decltype(pythonic::types::make_tuple(std::declval<__type36>(), std::declval<__type49>())) __type50;
        typedef typename pythonic::returnable<__type50>::type __type51;
        typedef __type51 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      inline
      typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0 x, argument_type1 n_samples, argument_type2 n_repeats) const
      ;
    }  ;
    struct calc_AutoCorr
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type0;
        typedef __type0 __type1;
        typedef __type1 __type2;
        typedef calc_AutoCorr_normalized __type3;
        typedef decltype(std::declval<__type3>()(std::declval<__type1>())) __type5;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::correlate{})>::type>::type __type6;
        typedef typename pythonic::assignable<__type1>::type __type7;
        typedef __type7 __type8;
        typedef pythonic::types::str __type9;
        typedef decltype(std::declval<__type6>()(std::declval<__type8>(), std::declval<__type8>(), std::declval<__type9>())) __type10;
        typedef typename pythonic::assignable<__type10>::type __type11;
        typedef __type11 __type12;
        typedef pythonic::types::contiguous_slice __type13;
        typedef decltype(std::declval<__type12>()[std::declval<__type13>()]) __type14;
        typedef typename __combined<__type5,__type14>::type __type15;
        typedef typename pythonic::returnable<__type15>::type __type16;
        typedef __type2 __ptype65;
        typedef __type16 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 >
      inline
      typename type<argument_type0, argument_type1>::result_type operator()(argument_type0 x, argument_type1 normalize) const
      ;
    }  ;
    struct calc_AutoCorr_lag
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      struct type
      {
        typedef calc_AutoCorr_normalized_lag __type0;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
        typedef __type1 __type2;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type3;
        typedef __type3 __type4;
        typedef decltype(std::declval<__type0>()(std::declval<__type2>(), std::declval<__type4>())) __type5;
        typedef calc_AutoCorr_not_normalized_lag __type6;
        typedef decltype(std::declval<__type6>()(std::declval<__type2>(), std::declval<__type4>())) __type9;
        typedef typename __combined<__type5,__type9>::type __type10;
        typedef typename pythonic::returnable<__type10>::type __type11;
        typedef __type11 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
      inline
      typename type<argument_type0, argument_type1, argument_type2>::result_type operator()(argument_type0 x, argument_type1 tau, argument_type2 normalize) const
      ;
    }  ;
    struct RodaSimulacaoMapa
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type0;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::list{})>::type>::type __type1;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::map{})>::type>::type __type2;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type3;
        typedef RodaSimulacaoMapa_lambda0 __type4;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type5;
        typedef __type5 __type6;
        typedef decltype(std::declval<__type3>()(std::declval<__type4>(), std::declval<__type6>())) __type7;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type8;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type9;
        typedef __type9 __type10;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type11;
        typedef __type11 __type12;
        typedef decltype(pythonic::operator_::sub(std::declval<__type10>(), std::declval<__type12>())) __type13;
        typedef long __type14;
        typedef decltype(pythonic::operator_::add(std::declval<__type13>(), std::declval<__type14>())) __type15;
        typedef decltype(std::declval<__type8>()(std::declval<__type15>())) __type16;
        typedef decltype(std::declval<__type2>()(std::declval<__type7>(), std::declval<__type16>())) __type17;
        typedef decltype(std::declval<__type1>()(std::declval<__type17>())) __type18;
        typedef typename pythonic::assignable<__type18>::type __type19;
        typedef indexable<__type14> __type20;
        typedef decltype(std::declval<__type8>()(std::declval<__type14>(), std::declval<__type15>())) __type25;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type25>::type::iterator>::value_type>::type __type26;
        typedef __type26 __type27;
        typedef indexable<__type27> __type28;
        typedef std::integral_constant<long,0> __type29;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__dispatch__::functor::copy{})>::type>::type __type30;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::flatten{})>::type>::type __type31;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::asarray{})>::type>::type __type32;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::float_{})>::type>::type __type34;
        typedef decltype(std::declval<__type32>()(std::declval<__type6>(), std::declval<__type34>())) __type35;
        typedef decltype(std::declval<__type31>()(std::declval<__type35>())) __type36;
        typedef typename pythonic::assignable<__type36>::type __type37;
        typedef std::integral_constant<long,1> __type38;
        typedef __type37 __type39;
        typedef decltype(std::declval<__type8>()(std::declval<__type12>())) __type41;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type41>::type::iterator>::value_type>::type __type42;
        typedef __type42 __type43;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type44;
        typedef __type44 __type45;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type46;
        typedef __type46 __type47;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type48;
        typedef __type48 __type49;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type50;
        typedef __type50 __type51;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type52;
        typedef __type52 __type53;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type54;
        typedef __type54 __type55;
        typedef typename KTzLog_FuncMapa::type<__type39, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype40 __type56;
        typedef indexable_container<__type38, typename std::remove_reference<__type56>::type> __type57;
        typedef typename __combined<__type39,__type57>::type __type58;
        typedef typename KTzLog_FuncMapa::type<__type58, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype41 __type59;
        typedef indexable_container<__type38, typename std::remove_reference<__type59>::type> __type60;
        typedef typename __combined<__type39,__type57,__type60>::type __type61;
        typedef typename KTTanh_FuncMapa::type<__type61, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype30 __type62;
        typedef indexable_container<__type38, typename std::remove_reference<__type62>::type> __type63;
        typedef typename __combined<__type39,__type57,__type60,__type63>::type __type64;
        typedef typename KTTanh_FuncMapa::type<__type64, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype31 __type65;
        typedef indexable_container<__type38, typename std::remove_reference<__type65>::type> __type66;
        typedef typename __combined<__type39,__type57,__type60,__type63,__type66>::type __type67;
        typedef typename KTzTanh_FuncMapa::type<__type67, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype15 __type68;
        typedef indexable_container<__type38, typename std::remove_reference<__type68>::type> __type69;
        typedef typename __combined<__type39,__type57,__type60,__type63,__type66,__type69>::type __type70;
        typedef typename KTzTanh_FuncMapa::type<__type70, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype16 __type71;
        typedef indexable_container<__type38, typename std::remove_reference<__type71>::type> __type72;
        typedef typename __combined<__type39,__type57,__type60,__type63,__type66,__type69,__type72>::type __type73;
        typedef typename KTCTanh_FuncMapa::type<__type73, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype0 __type74;
        typedef indexable_container<__type38, typename std::remove_reference<__type74>::type> __type75;
        typedef typename __combined<__type39,__type57,__type60,__type63,__type66,__type69,__type72,__type75>::type __type76;
        typedef typename KTCTanh_FuncMapa::type<__type76, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype1 __type77;
        typedef indexable_container<__type38, typename std::remove_reference<__type77>::type> __type78;
        typedef typename __combined<__type39,__type57,__type60,__type63,__type66,__type69,__type72,__type75,__type78>::type __type79;
        typedef typename KTLog_FuncMapa::type<__type79, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype55 __type80;
        typedef indexable_container<__type38, typename std::remove_reference<__type80>::type> __type81;
        typedef typename __combined<__type39,__type57,__type60,__type63,__type66,__type69,__type72,__type75,__type78,__type81>::type __type82;
        typedef typename KTLog_FuncMapa::type<__type82, __type43, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype56 __type83;
        typedef indexable_container<__type38, typename std::remove_reference<__type83>::type> __type84;
        typedef KTLog_FuncMapa __type85;
        typedef typename pythonic::assignable<__type85>::type __type86;
        typedef KTzLog_FuncMapa __type87;
        typedef typename pythonic::assignable<__type87>::type __type88;
        typedef KTTanh_FuncMapa __type89;
        typedef typename pythonic::assignable<__type89>::type __type90;
        typedef KTzTanh_FuncMapa __type91;
        typedef typename pythonic::assignable<__type91>::type __type92;
        typedef KTCTanh_FuncMapa __type93;
        typedef typename pythonic::assignable<__type93>::type __type94;
        typedef typename __combined<__type86,__type88,__type90,__type92,__type94>::type __type95;
        typedef __type95 __type96;
        typedef typename __combined<__type39,__type57,__type60,__type63,__type66,__type69,__type72,__type75,__type78,__type81,__type84>::type __type97;
        typedef decltype(std::declval<__type96>()(std::declval<__type97>(), std::declval<__type43>(), std::declval<__type45>(), std::declval<__type47>(), std::declval<__type49>(), std::declval<__type51>(), std::declval<__type53>(), std::declval<__type55>())) __type98;
        typedef typename __combined<__type57,__type60,__type63,__type66,__type69,__type72,__type75,__type78,__type81,__type84,__type98>::type __type99;
        typedef typename pythonic::assignable<__type99>::type __type100;
        typedef typename __combined<__type37,__type57,__type60,__type63,__type66,__type69,__type72,__type75,__type78,__type81,__type84,__type98,__type39,__type100>::type __type101;
        typedef __type101 __type102;
        typedef decltype(std::declval<__type30>()(std::declval<__type102>())) __type103;
        typedef indexable_container<__type29, typename std::remove_reference<__type103>::type> __type104;
        typedef typename KTzLog_FuncMapa::type<__type102, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype40 __type113;
        typedef indexable_container<__type38, typename std::remove_reference<__type113>::type> __type114;
        typedef typename __combined<__type102,__type114>::type __type115;
        typedef typename KTzLog_FuncMapa::type<__type115, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype41 __type116;
        typedef indexable_container<__type38, typename std::remove_reference<__type116>::type> __type117;
        typedef typename __combined<__type102,__type114,__type117>::type __type118;
        typedef typename KTTanh_FuncMapa::type<__type118, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype30 __type119;
        typedef indexable_container<__type38, typename std::remove_reference<__type119>::type> __type120;
        typedef typename __combined<__type102,__type114,__type117,__type120>::type __type121;
        typedef typename KTTanh_FuncMapa::type<__type121, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype31 __type122;
        typedef indexable_container<__type38, typename std::remove_reference<__type122>::type> __type123;
        typedef typename __combined<__type102,__type114,__type117,__type120,__type123>::type __type124;
        typedef typename KTzTanh_FuncMapa::type<__type124, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype15 __type125;
        typedef indexable_container<__type38, typename std::remove_reference<__type125>::type> __type126;
        typedef typename __combined<__type102,__type114,__type117,__type120,__type123,__type126>::type __type127;
        typedef typename KTzTanh_FuncMapa::type<__type127, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype16 __type128;
        typedef indexable_container<__type38, typename std::remove_reference<__type128>::type> __type129;
        typedef typename __combined<__type102,__type114,__type117,__type120,__type123,__type126,__type129>::type __type130;
        typedef typename KTCTanh_FuncMapa::type<__type130, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype0 __type131;
        typedef indexable_container<__type38, typename std::remove_reference<__type131>::type> __type132;
        typedef typename __combined<__type102,__type114,__type117,__type120,__type123,__type126,__type129,__type132>::type __type133;
        typedef typename KTCTanh_FuncMapa::type<__type133, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype1 __type134;
        typedef indexable_container<__type38, typename std::remove_reference<__type134>::type> __type135;
        typedef typename __combined<__type102,__type114,__type117,__type120,__type123,__type126,__type129,__type132,__type135>::type __type136;
        typedef typename KTLog_FuncMapa::type<__type136, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype55 __type137;
        typedef indexable_container<__type38, typename std::remove_reference<__type137>::type> __type138;
        typedef typename __combined<__type102,__type114,__type117,__type120,__type123,__type126,__type129,__type132,__type135,__type138>::type __type139;
        typedef typename KTLog_FuncMapa::type<__type139, __type27, __type45, __type47, __type49, __type51, __type53, __type55>::__ptype56 __type140;
        typedef indexable_container<__type38, typename std::remove_reference<__type140>::type> __type141;
        typedef typename __combined<__type102,__type114,__type117,__type120,__type123,__type126,__type129,__type132,__type135,__type138,__type141>::type __type143;
        typedef decltype(std::declval<__type96>()(std::declval<__type143>(), std::declval<__type27>(), std::declval<__type45>(), std::declval<__type47>(), std::declval<__type49>(), std::declval<__type51>(), std::declval<__type53>(), std::declval<__type55>())) __type144;
        typedef typename __combined<__type114,__type117,__type120,__type123,__type126,__type129,__type132,__type135,__type138,__type141,__type144>::type __type145;
        typedef typename pythonic::assignable<__type145>::type __type146;
        typedef typename __combined<__type37,__type57,__type60,__type63,__type66,__type69,__type72,__type75,__type78,__type81,__type84,__type98,__type114,__type117,__type120,__type123,__type126,__type129,__type132,__type135,__type138,__type141,__type144,__type39,__type100,__type102,__type146>::type __type147;
        typedef __type147 __type148;
        typedef decltype(std::declval<__type30>()(std::declval<__type148>())) __type149;
        typedef container<typename std::remove_reference<__type149>::type> __type150;
        typedef typename __combined<__type19,__type20,__type28,__type104,__type150>::type __type151;
        typedef __type151 __type152;
        typedef decltype(std::declval<__type0>()(std::declval<__type152>())) __type153;
        typedef typename pythonic::returnable<__type153>::type __type154;
        typedef __type154 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9>::result_type operator()(argument_type0 K, argument_type1 T, argument_type2 delta, argument_type3 lamb, argument_type4 xR, argument_type5 H, argument_type6 t_transiente, argument_type7 t_total, argument_type8 x0, argument_type9 mapa_nome) const
      ;
    }  ;
    struct RodaSimulacao_Varios_H
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 , typename argument_type10 = bool, typename argument_type11 = double, typename argument_type12 = long>
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type3;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::len{})>::type>::type __type4;
        typedef decltype(std::declval<__type4>()(std::declval<__type1>())) __type6;
        typedef decltype(std::declval<__type3>()(std::declval<__type6>())) __type7;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type7>::type::iterator>::value_type>::type __type8;
        typedef __type8 __type9;
        typedef decltype(std::declval<__type2>()[std::declval<__type9>()]) __type10;
        typedef __type10 __type11;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type12;
        typedef __type12 __type13;
        typedef __type13 __type14;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type15;
        typedef __type15 __type16;
        typedef __type16 __type17;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type18;
        typedef double __type19;
        typedef pythonic::types::list<typename std::remove_reference<__type19>::type> __type20;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::max{})>::type>::type __type21;
        typedef long __type22;
        typedef typename __combined<__type22,__type6>::type __type25;
        typedef decltype(std::declval<__type21>()(std::declval<__type25>(), std::declval<__type6>())) __type26;
        typedef decltype(pythonic::operator_::mul(std::declval<__type20>(), std::declval<__type26>())) __type27;
        typedef typename pythonic::assignable<__type27>::type __type28;
        typedef indexable<__type9> __type30;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::mean{})>::type>::type __type31;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::abs{})>::type>::type __type32;
        typedef RodaSimulacaoMapa __type33;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type36;
        typedef __type36 __type37;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type38;
        typedef __type38 __type39;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type40;
        typedef __type40 __type41;
        typedef typename pythonic::assignable<__type10>::type __type42;
        typedef __type42 __type43;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type44;
        typedef __type44 __type45;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type46;
        typedef __type46 __type47;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type48;
        typedef __type48 __type49;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type9>::type>::type __type50;
        typedef __type50 __type51;
        typedef decltype(std::declval<__type33>()(std::declval<__type13>(), std::declval<__type16>(), std::declval<__type37>(), std::declval<__type39>(), std::declval<__type41>(), std::declval<__type43>(), std::declval<__type45>(), std::declval<__type47>(), std::declval<__type49>(), std::declval<__type51>())) __type52;
        typedef decltype(pythonic::types::as_const(std::declval<__type52>())) __type53;
        typedef pythonic::types::contiguous_slice __type54;
        typedef decltype(std::declval<__type53>()(std::declval<__type54>(), std::declval<__type22>())) __type55;
        typedef decltype(std::declval<__type32>()(std::declval<__type55>())) __type56;
        typedef typename __combined<__type53,__type52>::type __type57;
        typedef decltype(pythonic::types::as_const(std::declval<__type57>())) __type58;
        typedef decltype(std::declval<__type58>()(std::declval<__type54>(), std::declval<__type22>())) __type59;
        typedef typename __combined<__type56,__type59>::type __type60;
        typedef typename pythonic::assignable<__type60>::type __type61;
        typedef __type61 __type62;
        typedef decltype(std::declval<__type31>()(std::declval<__type62>())) __type63;
        typedef container<typename std::remove_reference<__type63>::type> __type64;
        typedef typename __combined<__type28,__type30,__type64>::type __type65;
        typedef __type65 __type66;
        typedef decltype(std::declval<__type18>()(std::declval<__type66>())) __type67;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type76;
        typedef decltype(std::declval<__type76>()(std::declval<__type62>())) __type78;
        typedef container<typename std::remove_reference<__type78>::type> __type79;
        typedef typename __combined<__type28,__type30,__type79>::type __type80;
        typedef __type80 __type81;
        typedef decltype(std::declval<__type18>()(std::declval<__type81>())) __type82;
        typedef bootstrap_variance __type93;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::int_{})>::type>::type __type95;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type11>::type>::type __type96;
        typedef __type96 __type97;
        typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type62>())) __type99;
        typedef decltype(pythonic::operator_::mul(std::declval<__type97>(), std::declval<__type99>())) __type100;
        typedef decltype(std::declval<__type95>()(std::declval<__type100>())) __type101;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type12>::type>::type __type102;
        typedef __type102 __type103;
        typedef decltype(std::declval<__type93>()(std::declval<__type62>(), std::declval<__type101>(), std::declval<__type103>())) __type104;
        typedef typename pythonic::assignable<__type104>::type __type105;
        typedef __type105 __type106;
        typedef decltype(pythonic::types::as_const(std::declval<__type106>())) __type107;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type107>::type>::type __type108;
        typedef container<typename std::remove_reference<__type108>::type> __type109;
        typedef container<typename std::remove_reference<__type19>::type> __type110;
        typedef typename __combined<__type28,__type30,__type109,__type110>::type __type111;
        typedef __type111 __type112;
        typedef decltype(std::declval<__type18>()(std::declval<__type112>())) __type113;
        typedef typename pythonic::assignable<__type13>::type __type122;
        typedef __type122 __type123;
        typedef decltype(pythonic::operator_::mul(std::declval<__type19>(), std::declval<__type123>())) __type124;
        typedef decltype(pythonic::operator_::add(std::declval<__type19>(), std::declval<__type124>())) __type125;
        typedef typename pythonic::assignable<__type16>::type __type126;
        typedef __type126 __type127;
        typedef cosh __type128;
        typedef decltype(pythonic::operator_::sub(std::declval<__type22>(), std::declval<__type123>())) __type129;
        typedef decltype(pythonic::types::as_const(std::declval<__type66>())) __type131;
        typedef decltype(std::declval<__type131>()[std::declval<__type9>()]) __type133;
        typedef decltype(pythonic::operator_::mul(std::declval<__type129>(), std::declval<__type133>())) __type134;
        typedef decltype(pythonic::operator_::add(std::declval<__type134>(), std::declval<__type43>())) __type136;
        typedef decltype(pythonic::operator_::mul(std::declval<__type19>(), std::declval<__type136>())) __type137;
        typedef decltype(pythonic::operator_::div(std::declval<__type137>(), std::declval<__type127>())) __type138;
        typedef decltype(std::declval<__type128>()(std::declval<__type138>())) __type139;
        typedef decltype(pythonic::operator_::add(std::declval<__type19>(), std::declval<__type139>())) __type140;
        typedef decltype(pythonic::operator_::mul(std::declval<__type127>(), std::declval<__type140>())) __type141;
        typedef decltype(pythonic::operator_::add(std::declval<__type125>(), std::declval<__type141>())) __type142;
        typedef decltype(pythonic::operator_::div(std::declval<__type19>(), std::declval<__type142>())) __type143;
        typedef container<typename std::remove_reference<__type143>::type> __type144;
        typedef typename __combined<__type28,__type30,__type144>::type __type145;
        typedef __type145 __type146;
        typedef decltype(std::declval<__type18>()(std::declval<__type146>())) __type147;
        typedef decltype(pythonic::types::make_tuple(std::declval<__type67>(), std::declval<__type82>(), std::declval<__type113>(), std::declval<__type147>())) __type148;
        typedef typename pythonic::returnable<__type148>::type __type149;
        typedef __type11 __ptype66;
        typedef __type14 __ptype67;
        typedef __type17 __ptype68;
        typedef __type149 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 , typename argument_type10 = bool, typename argument_type11 = double, typename argument_type12 = long>
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9, argument_type10, argument_type11, argument_type12>::result_type operator()(argument_type0 K, argument_type1 T, argument_type2 delta, argument_type3 lamb, argument_type4 xR, argument_type5 H_valores, argument_type6 t_transiente, argument_type7 t_total, argument_type8 x0, argument_type9 mapa_nome, argument_type10 usar_modulo_de_m= false, argument_type11 percent_amostras_bootstrap= 0.5, argument_type12 num_repete_bootstrap= 10L) const
      ;
    }  ;
    struct RodaSimulacao_Varios_T
    {
      typedef void callable;
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 , typename argument_type10 = bool, typename argument_type11 = double, typename argument_type12 = long>
      struct type
      {
        typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type0;
        typedef __type0 __type1;
        typedef decltype(pythonic::types::as_const(std::declval<__type1>())) __type2;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type3;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::len{})>::type>::type __type4;
        typedef decltype(std::declval<__type4>()(std::declval<__type1>())) __type6;
        typedef decltype(std::declval<__type3>()(std::declval<__type6>())) __type7;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type7>::type::iterator>::value_type>::type __type8;
        typedef __type8 __type9;
        typedef decltype(std::declval<__type2>()[std::declval<__type9>()]) __type10;
        typedef __type10 __type11;
        typedef typename pythonic::assignable<__type10>::type __type12;
        typedef __type12 __type13;
        typedef __type13 __type14;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type15;
        typedef __type15 __type16;
        typedef __type16 __type17;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::array{})>::type>::type __type18;
        typedef double __type19;
        typedef pythonic::types::list<typename std::remove_reference<__type19>::type> __type20;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::max{})>::type>::type __type21;
        typedef long __type22;
        typedef typename __combined<__type22,__type6>::type __type25;
        typedef decltype(std::declval<__type21>()(std::declval<__type25>(), std::declval<__type6>())) __type26;
        typedef decltype(pythonic::operator_::mul(std::declval<__type20>(), std::declval<__type26>())) __type27;
        typedef typename pythonic::assignable<__type27>::type __type28;
        typedef indexable<__type9> __type30;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::mean{})>::type>::type __type31;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::abs{})>::type>::type __type32;
        typedef RodaSimulacaoMapa __type33;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type36;
        typedef __type36 __type37;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type38;
        typedef __type38 __type39;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type40;
        typedef __type40 __type41;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type42;
        typedef __type42 __type43;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type44;
        typedef __type44 __type45;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type46;
        typedef __type46 __type47;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type48;
        typedef __type48 __type49;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type9>::type>::type __type50;
        typedef __type50 __type51;
        typedef decltype(std::declval<__type33>()(std::declval<__type16>(), std::declval<__type13>(), std::declval<__type37>(), std::declval<__type39>(), std::declval<__type41>(), std::declval<__type43>(), std::declval<__type45>(), std::declval<__type47>(), std::declval<__type49>(), std::declval<__type51>())) __type52;
        typedef decltype(pythonic::types::as_const(std::declval<__type52>())) __type53;
        typedef pythonic::types::contiguous_slice __type54;
        typedef decltype(std::declval<__type53>()(std::declval<__type54>(), std::declval<__type22>())) __type55;
        typedef decltype(std::declval<__type32>()(std::declval<__type55>())) __type56;
        typedef typename __combined<__type53,__type52>::type __type57;
        typedef decltype(pythonic::types::as_const(std::declval<__type57>())) __type58;
        typedef decltype(std::declval<__type58>()(std::declval<__type54>(), std::declval<__type22>())) __type59;
        typedef typename __combined<__type56,__type59>::type __type60;
        typedef typename pythonic::assignable<__type60>::type __type61;
        typedef __type61 __type62;
        typedef decltype(std::declval<__type31>()(std::declval<__type62>())) __type63;
        typedef container<typename std::remove_reference<__type63>::type> __type64;
        typedef typename __combined<__type28,__type30,__type64>::type __type65;
        typedef __type65 __type66;
        typedef decltype(std::declval<__type18>()(std::declval<__type66>())) __type67;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type76;
        typedef decltype(std::declval<__type76>()(std::declval<__type62>())) __type78;
        typedef container<typename std::remove_reference<__type78>::type> __type79;
        typedef typename __combined<__type28,__type30,__type79>::type __type80;
        typedef __type80 __type81;
        typedef decltype(std::declval<__type18>()(std::declval<__type81>())) __type82;
        typedef bootstrap_variance __type93;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::int_{})>::type>::type __type95;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type11>::type>::type __type96;
        typedef __type96 __type97;
        typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type62>())) __type99;
        typedef decltype(pythonic::operator_::mul(std::declval<__type97>(), std::declval<__type99>())) __type100;
        typedef decltype(std::declval<__type95>()(std::declval<__type100>())) __type101;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type12>::type>::type __type102;
        typedef __type102 __type103;
        typedef decltype(std::declval<__type93>()(std::declval<__type62>(), std::declval<__type101>(), std::declval<__type103>())) __type104;
        typedef typename pythonic::assignable<__type104>::type __type105;
        typedef __type105 __type106;
        typedef decltype(pythonic::types::as_const(std::declval<__type106>())) __type107;
        typedef typename std::tuple_element<1,typename std::remove_reference<__type107>::type>::type __type108;
        typedef container<typename std::remove_reference<__type108>::type> __type109;
        typedef container<typename std::remove_reference<__type19>::type> __type110;
        typedef typename __combined<__type28,__type30,__type109,__type110>::type __type111;
        typedef __type111 __type112;
        typedef decltype(std::declval<__type18>()(std::declval<__type112>())) __type113;
        typedef typename pythonic::assignable<__type16>::type __type122;
        typedef __type122 __type123;
        typedef decltype(pythonic::operator_::mul(std::declval<__type19>(), std::declval<__type123>())) __type124;
        typedef decltype(pythonic::operator_::add(std::declval<__type19>(), std::declval<__type124>())) __type125;
        typedef typename pythonic::assignable<__type13>::type __type126;
        typedef __type126 __type127;
        typedef cosh __type128;
        typedef decltype(pythonic::operator_::sub(std::declval<__type22>(), std::declval<__type123>())) __type129;
        typedef decltype(pythonic::types::as_const(std::declval<__type66>())) __type131;
        typedef decltype(std::declval<__type131>()[std::declval<__type9>()]) __type133;
        typedef decltype(pythonic::operator_::mul(std::declval<__type129>(), std::declval<__type133>())) __type134;
        typedef decltype(pythonic::operator_::add(std::declval<__type134>(), std::declval<__type43>())) __type136;
        typedef decltype(pythonic::operator_::mul(std::declval<__type19>(), std::declval<__type136>())) __type137;
        typedef decltype(pythonic::operator_::div(std::declval<__type137>(), std::declval<__type127>())) __type138;
        typedef decltype(std::declval<__type128>()(std::declval<__type138>())) __type139;
        typedef decltype(pythonic::operator_::add(std::declval<__type19>(), std::declval<__type139>())) __type140;
        typedef decltype(pythonic::operator_::mul(std::declval<__type127>(), std::declval<__type140>())) __type141;
        typedef decltype(pythonic::operator_::add(std::declval<__type125>(), std::declval<__type141>())) __type142;
        typedef decltype(pythonic::operator_::div(std::declval<__type19>(), std::declval<__type142>())) __type143;
        typedef container<typename std::remove_reference<__type143>::type> __type144;
        typedef typename __combined<__type28,__type30,__type144>::type __type145;
        typedef __type145 __type146;
        typedef decltype(std::declval<__type18>()(std::declval<__type146>())) __type147;
        typedef decltype(pythonic::types::make_tuple(std::declval<__type67>(), std::declval<__type82>(), std::declval<__type113>(), std::declval<__type147>())) __type148;
        typedef typename pythonic::returnable<__type148>::type __type149;
        typedef __type11 __ptype69;
        typedef __type14 __ptype71;
        typedef __type17 __ptype70;
        typedef __type149 result_type;
      }  
      ;
      template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 , typename argument_type10 = bool, typename argument_type11 = double, typename argument_type12 = long>
      inline
      typename type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9, argument_type10, argument_type11, argument_type12>::result_type operator()(argument_type0 K, argument_type1 T_valores, argument_type2 delta, argument_type3 lamb, argument_type4 xR, argument_type5 H, argument_type6 t_transiente, argument_type7 t_total, argument_type8 x0, argument_type9 mapa_nome, argument_type10 usar_modulo_de_m= false, argument_type11 percent_amostras_bootstrap= 0.5, argument_type12 num_repete_bootstrap= 10L) const
      ;
    }  ;
    template <typename argument_type0 , typename argument_type1 >
    inline
    typename bootstrap_variance_lambda2::type<argument_type0, argument_type1>::result_type bootstrap_variance_lambda2::operator()(argument_type0 x, argument_type1 i) const
    {
      return pythonic::types::as_const(x)[i];
    }
    template <typename argument_type0 , typename argument_type1 >
    inline
    typename RodaSimulacaoMapa_lambda0::type<argument_type0, argument_type1>::result_type RodaSimulacaoMapa_lambda0::operator()(argument_type0 x0, argument_type1 _) const
    {
      return pythonic::numpy::functor::zeros{}(pythonic::builtins::functor::len{}(x0));
    }
    template <typename argument_type0 >
    inline
    typename cosh::type<argument_type0>::result_type cosh::operator()(argument_type0 x) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::exp{}(x))>::type arg = pythonic::numpy::functor::exp{}(x);
      return pythonic::operator_::div(pythonic::operator_::add(1.0, pythonic::numpy::functor::square{}(arg)), pythonic::operator_::mul(2.0, arg));
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
    inline
    typename KTCTanh_FuncMapa::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type KTCTanh_FuncMapa::operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), H), std::get<2>(pythonic::types::as_const(x))))>::type arg = pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), H), std::get<2>(pythonic::types::as_const(x)));
      std::get<1>(x) = std::get<0>(pythonic::types::as_const(x));
      std::get<2>(x) = pythonic::operator_::sub(pythonic::operator_::mul(pythonic::operator_::sub(1.0, delta), std::get<2>(pythonic::types::as_const(x))), pythonic::operator_::mul(lamb, pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), xR)));
      std::get<0>(x) = pythonic::operator_::sub(pythonic::operator_::div(2.0, pythonic::operator_::add(1.0, pythonic::numpy::functor::exp{}(pythonic::operator_::mul(-2.0, arg)))), 1.0);
      return x;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
    inline
    typename KTzTanh_FuncMapa::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type KTzTanh_FuncMapa::operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), std::get<2>(pythonic::types::as_const(x))), H), T))>::type arg = pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), std::get<2>(pythonic::types::as_const(x))), H), T);
      std::get<1>(x) = std::get<0>(pythonic::types::as_const(x));
      std::get<2>(x) = pythonic::operator_::sub(pythonic::operator_::mul(pythonic::operator_::sub(1.0, delta), std::get<2>(pythonic::types::as_const(x))), pythonic::operator_::mul(lamb, pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), xR)));
      std::get<0>(x) = pythonic::operator_::sub(pythonic::operator_::div(2.0, pythonic::operator_::add(1.0, pythonic::numpy::functor::exp{}(pythonic::operator_::mul(-2.0, arg)))), 1.0);
      return x;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
    inline
    typename KTTanh_FuncMapa::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type KTTanh_FuncMapa::operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), H), T))>::type arg = pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), H), T);
      std::get<1>(x) = std::get<0>(pythonic::types::as_const(x));
      std::get<0>(x) = pythonic::operator_::sub(pythonic::operator_::div(2.0, pythonic::operator_::add(1.0, pythonic::numpy::functor::exp{}(pythonic::operator_::mul(-2.0, arg)))), 1.0);
      return x;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
    inline
    typename KTzLog_FuncMapa::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type KTzLog_FuncMapa::operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), std::get<2>(pythonic::types::as_const(x))), H), T))>::type arg = pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), std::get<2>(pythonic::types::as_const(x))), H), T);
      std::get<1>(x) = std::get<0>(pythonic::types::as_const(x));
      std::get<2>(x) = pythonic::operator_::sub(pythonic::operator_::mul(pythonic::operator_::sub(1.0, delta), std::get<2>(pythonic::types::as_const(x))), pythonic::operator_::mul(lamb, pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), xR)));
      std::get<0>(x) = pythonic::operator_::div(arg, pythonic::operator_::add(1.0, pythonic::builtins::functor::abs{}(arg)));
      return x;
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 >
    inline
    typename KTLog_FuncMapa::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7>::result_type KTLog_FuncMapa::operator()(argument_type0 x, argument_type1 t, argument_type2 K, argument_type3 T, argument_type4 delta, argument_type5 lamb, argument_type6 xR, argument_type7 H) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), H), T))>::type arg = pythonic::operator_::div(pythonic::operator_::add(pythonic::operator_::sub(std::get<0>(pythonic::types::as_const(x)), pythonic::operator_::mul(K, std::get<1>(pythonic::types::as_const(x)))), H), T);
      std::get<1>(x) = std::get<0>(pythonic::types::as_const(x));
      std::get<0>(x) = pythonic::operator_::div(arg, pythonic::operator_::add(1.0, pythonic::builtins::functor::abs{}(arg)));
      return x;
    }
    template <typename argument_type0 , typename argument_type1 >
    inline
    typename calc_AutoCorr_normalized_lag::type<argument_type0, argument_type1>::result_type calc_AutoCorr_normalized_lag::operator()(argument_type0 x, argument_type1 tau) const
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
      typedef long __type1;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type2;
      typedef __type2 __type3;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type3>())) __type4;
      typedef decltype(pythonic::operator_::mul(std::declval<__type1>(), std::declval<__type4>())) __type5;
      typedef decltype(std::declval<__type0>()(std::declval<__type5>())) __type6;
      typedef typename pythonic::assignable<__type6>::type __type7;
      typedef typename __combined<__type7,__type3>::type __type9;
      typedef typename pythonic::assignable<__type9>::type __type10;
      typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::mean{}(x))>::type xm = pythonic::numpy::functor::mean{}(x);
      __type10 xpad = pythonic::numpy::functor::zeros{}(pythonic::operator_::mul(3L, pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)));
      xpad[pythonic::types::fast_contiguous_slice(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x),pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)))] = x;
      return pythonic::operator_::div(pythonic::numpy::functor::mean{}(pythonic::operator_::mul(pythonic::operator_::sub(pythonic::types::as_const(xpad)[pythonic::types::fast_contiguous_slice(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x),pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)))], xm), pythonic::operator_::sub(pythonic::types::as_const(xpad)[pythonic::types::contiguous_slice(pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), tau),pythonic::operator_::add(pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)), tau))], xm))), pythonic::numpy::functor::var{}(x));
    }
    template <typename argument_type0 >
    inline
    typename calc_AutoCorr_normalized::type<argument_type0>::result_type calc_AutoCorr_normalized::operator()(argument_type0 x) const
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type1;
      typedef __type1 __type2;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type2>())) __type3;
      typedef decltype(std::declval<__type0>()(std::declval<__type3>())) __type4;
      typedef typename pythonic::assignable<__type4>::type __type5;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type6;
      typedef __type5 __type7;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type7>())) __type8;
      typedef decltype(std::declval<__type6>()(std::declval<__type8>())) __type9;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type9>::type::iterator>::value_type>::type __type10;
      typedef __type10 __type11;
      typedef indexable<__type11> __type12;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::mean{})>::type>::type __type13;
      typedef long __type16;
      typedef decltype(pythonic::operator_::mul(std::declval<__type16>(), std::declval<__type8>())) __type19;
      typedef decltype(pythonic::operator_::add(std::declval<__type3>(), std::declval<__type19>())) __type20;
      typedef decltype(std::declval<__type0>()(std::declval<__type20>())) __type21;
      typedef typename pythonic::assignable<__type21>::type __type22;
      typedef typename __combined<__type22,__type2>::type __type24;
      typedef __type24 __type25;
      typedef decltype(pythonic::types::as_const(std::declval<__type25>())) __type26;
      typedef pythonic::types::fast_contiguous_slice __type27;
      typedef decltype(std::declval<__type26>()[std::declval<__type27>()]) __type28;
      typedef decltype(std::declval<__type13>()(std::declval<__type2>())) __type30;
      typedef typename pythonic::assignable<__type30>::type __type31;
      typedef __type31 __type32;
      typedef decltype(pythonic::operator_::sub(std::declval<__type28>(), std::declval<__type32>())) __type33;
      typedef decltype(pythonic::operator_::mul(std::declval<__type33>(), std::declval<__type33>())) __type39;
      typedef decltype(std::declval<__type13>()(std::declval<__type39>())) __type40;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type41;
      typedef decltype(std::declval<__type41>()(std::declval<__type2>())) __type43;
      typedef typename pythonic::assignable<__type43>::type __type44;
      typedef __type44 __type45;
      typedef decltype(pythonic::operator_::div(std::declval<__type40>(), std::declval<__type45>())) __type46;
      typedef container<typename std::remove_reference<__type46>::type> __type47;
      typedef typename __combined<__type5,__type12,__type47>::type __type48;
      typedef typename pythonic::assignable<__type48>::type __type49;
      typedef typename pythonic::assignable<__type24>::type __type50;
      __type49 C = pythonic::numpy::functor::zeros{}(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x));
      typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::mean{}(x))>::type xm = pythonic::numpy::functor::mean{}(x);
      typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::var{}(x))>::type xv = pythonic::numpy::functor::var{}(x);
      __type50 xpad = pythonic::numpy::functor::zeros{}(pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), pythonic::operator_::mul(2L, pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C))));
      xpad[pythonic::types::fast_contiguous_slice(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C),pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)))] = x;
      {
        long  __target1578906918720 = pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C);
        for (long  tau=0L; tau < __target1578906918720; tau += 1L)
        {
          C.fast(tau) = pythonic::operator_::div(pythonic::numpy::functor::mean{}(pythonic::operator_::mul(pythonic::operator_::sub(pythonic::types::as_const(xpad)[pythonic::types::fast_contiguous_slice(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C),pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)))], xm), pythonic::operator_::sub(pythonic::types::as_const(xpad)[pythonic::types::fast_contiguous_slice(pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C), tau),pythonic::operator_::add(pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, C), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)), tau))], xm))), xv);
        }
      }
      return C;
    }
    template <typename argument_type0 , typename argument_type1 >
    inline
    typename calc_AutoCorr_not_normalized_lag::type<argument_type0, argument_type1>::result_type calc_AutoCorr_not_normalized_lag::operator()(argument_type0 x, argument_type1 tau) const
    {
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::zeros{})>::type>::type __type0;
      typedef long __type1;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type2;
      typedef __type2 __type3;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type3>())) __type4;
      typedef decltype(pythonic::operator_::mul(std::declval<__type1>(), std::declval<__type4>())) __type5;
      typedef decltype(std::declval<__type0>()(std::declval<__type5>())) __type6;
      typedef typename pythonic::assignable<__type6>::type __type7;
      typedef typename __combined<__type7,__type3>::type __type9;
      typedef typename pythonic::assignable<__type9>::type __type10;
      __type10 xpad = pythonic::numpy::functor::zeros{}(pythonic::operator_::mul(3L, pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)));
      xpad[pythonic::types::fast_contiguous_slice(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x),pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)))] = x;
      return pythonic::numpy::functor::dot{}(pythonic::types::as_const(xpad)[pythonic::types::fast_contiguous_slice(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x),pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)))], pythonic::types::as_const(xpad)[pythonic::types::contiguous_slice(pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), tau),pythonic::operator_::add(pythonic::operator_::add(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x), pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x)), tau))]);
    }
    template <typename argument_type0 >
    inline
    typename calc_AutoCorr_not_normalized::type<argument_type0>::result_type calc_AutoCorr_not_normalized::operator()(argument_type0 x) const
    {
      typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::correlate{}(x, x, pythonic::types::str("full")))>::type __pythran_inlinecalc_AutoCorr_not_normalized_lambda1C3 = pythonic::numpy::functor::correlate{}(x, x, pythonic::types::str("full"));
      return pythonic::types::as_const(__pythran_inlinecalc_AutoCorr_not_normalized_lambda1C3)[pythonic::types::contiguous_slice(pythonic::numpy::functor::nanargmax{}(__pythran_inlinecalc_AutoCorr_not_normalized_lambda1C3),pythonic::builtins::None)];
    }
    template <typename argument_type0 >
    inline
    typename sech::type<argument_type0>::result_type sech::operator()(argument_type0 x) const
    {
      return pythonic::operator_::div(1.0, pythonic::types::call(cosh(), x));
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 >
    inline
    typename KT_susceptibilidade::type<argument_type0, argument_type1, argument_type2, argument_type3>::result_type KT_susceptibilidade::operator()(argument_type0 K, argument_type1 T, argument_type2 H, argument_type3 m_medio) const
    {
      return pythonic::operator_::div(2.0, pythonic::operator_::add(pythonic::operator_::add(-2.0, pythonic::operator_::mul(2.0, K)), pythonic::operator_::mul(T, pythonic::operator_::add(1.0, pythonic::types::call(cosh(), pythonic::operator_::div(pythonic::operator_::mul(2.0, pythonic::operator_::add(pythonic::operator_::mul(pythonic::operator_::sub(1L, K), m_medio), H)), T))))));
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    inline
    typename bootstrap_variance::type<argument_type0, argument_type1, argument_type2>::result_type bootstrap_variance::operator()(argument_type0 x, argument_type1 n_samples, argument_type2 n_repeats) const
    {
      typedef double __type0;
      typedef typename pythonic::assignable<__type0>::type __type1;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::list{})>::type>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::map{})>::type>::type __type4;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type5;
      typedef bootstrap_variance_lambda2 __type6;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type7;
      typedef __type7 __type8;
      typedef decltype(std::declval<__type5>()(std::declval<__type6>(), std::declval<__type8>())) __type9;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::random::functor::sample{})>::type>::type __type10;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type11;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::len{})>::type>::type __type12;
      typedef decltype(std::declval<__type12>()(std::declval<__type8>())) __type14;
      typedef decltype(std::declval<__type11>()(std::declval<__type14>())) __type15;
      typedef typename pythonic::assignable<__type15>::type __type16;
      typedef __type16 __type17;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type18;
      typedef __type18 __type19;
      typedef decltype(std::declval<__type10>()(std::declval<__type17>(), std::declval<__type19>())) __type20;
      typedef typename pythonic::assignable<__type20>::type __type21;
      typedef __type21 __type22;
      typedef decltype(std::declval<__type4>()(std::declval<__type9>(), std::declval<__type22>())) __type23;
      typedef decltype(std::declval<__type3>()(std::declval<__type23>())) __type24;
      typedef decltype(std::declval<__type2>()(std::declval<__type24>())) __type25;
      typedef typename pythonic::assignable<__type25>::type __type26;
      typedef __type26 __type27;
      typedef typename __combined<__type1,__type27>::type __type28;
      typedef typename pythonic::assignable<__type28>::type __type29;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type30;
      typedef decltype(std::declval<__type30>()(std::declval<__type27>())) __type32;
      typedef typename __combined<__type1,__type32>::type __type33;
      typedef typename pythonic::assignable<__type33>::type __type34;
      typename pythonic::assignable_noescape<decltype(pythonic::builtins::functor::range{}(pythonic::builtins::functor::len{}(x)))>::type N = pythonic::builtins::functor::range{}(pythonic::builtins::functor::len{}(x));
      __type29 var_mean = 0.0;
      __type34 var_std = 0.0;
      {
        long  __target1578907121984 = n_repeats;
        for (long  k=0L; k < __target1578907121984; k += 1L)
        {
          typename pythonic::assignable_noescape<decltype(pythonic::random::functor::sample{}(N, n_samples))>::type ind = pythonic::random::functor::sample{}(N, n_samples);
          typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::var{}(pythonic::builtins::functor::list{}(pythonic::builtins::functor::map{}(pythonic::functools::functor::partial{}(bootstrap_variance_lambda2(), x), ind))))>::type y = pythonic::numpy::functor::var{}(pythonic::builtins::functor::list{}(pythonic::builtins::functor::map{}(pythonic::functools::functor::partial{}(bootstrap_variance_lambda2(), x), ind)));
          var_mean += y;
          var_std += pythonic::numpy::functor::square{}(y);
        }
      }
      typename pythonic::assignable_noescape<decltype(pythonic::operator_::div(var_mean, pythonic::builtins::functor::float_{}(n_repeats)))>::type var_mean_ = pythonic::operator_::div(var_mean, pythonic::builtins::functor::float_{}(n_repeats));
      return pythonic::types::make_tuple(var_mean_, pythonic::numpy::functor::sqrt{}(pythonic::operator_::sub(pythonic::operator_::div(var_std, pythonic::builtins::functor::float_{}(n_repeats)), pythonic::numpy::functor::square{}(var_mean_))));
    }
    template <typename argument_type0 , typename argument_type1 >
    inline
    typename calc_AutoCorr::type<argument_type0, argument_type1>::result_type calc_AutoCorr::operator()(argument_type0 x, argument_type1 normalize) const
    {
      if (normalize)
      {
        return pythonic::types::call(calc_AutoCorr_normalized(), x);
      }
      else
      {
        typename pythonic::assignable_noescape<decltype(x)>::type __pythran_inlinecalc_AutoCorr_not_normalizedx2 = x;
        typename pythonic::assignable_noescape<decltype(pythonic::numpy::functor::correlate{}(__pythran_inlinecalc_AutoCorr_not_normalizedx2, __pythran_inlinecalc_AutoCorr_not_normalizedx2, pythonic::types::str("full")))>::type __pythran_inlinecalc_AutoCorr_not_normalized_lambda1C0 = pythonic::numpy::functor::correlate{}(__pythran_inlinecalc_AutoCorr_not_normalizedx2, __pythran_inlinecalc_AutoCorr_not_normalizedx2, pythonic::types::str("full"));
        return pythonic::types::as_const(__pythran_inlinecalc_AutoCorr_not_normalized_lambda1C0)[pythonic::types::contiguous_slice(pythonic::numpy::functor::nanargmax{}(__pythran_inlinecalc_AutoCorr_not_normalized_lambda1C0),pythonic::builtins::None)];
      }
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 >
    inline
    typename calc_AutoCorr_lag::type<argument_type0, argument_type1, argument_type2>::result_type calc_AutoCorr_lag::operator()(argument_type0 x, argument_type1 tau, argument_type2 normalize) const
    {
      if (normalize)
      {
        return pythonic::types::call(calc_AutoCorr_normalized_lag(), x, tau);
      }
      else
      {
        return pythonic::types::call(calc_AutoCorr_not_normalized_lag(), x, tau);
      }
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 >
    inline
    typename RodaSimulacaoMapa::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9>::result_type RodaSimulacaoMapa::operator()(argument_type0 K, argument_type1 T, argument_type2 delta, argument_type3 lamb, argument_type4 xR, argument_type5 H, argument_type6 t_transiente, argument_type7 t_total, argument_type8 x0, argument_type9 mapa_nome) const
    {
      typedef pythonic::types::str __type0;
      typedef pythonic::types::list<typename std::remove_reference<__type0>::type> __type1;
      typedef typename pythonic::assignable<__type1>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::ndarray::functor::flatten{})>::type>::type __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::asarray{})>::type>::type __type4;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type5;
      typedef __type5 __type6;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::float_{})>::type>::type __type7;
      typedef decltype(std::declval<__type4>()(std::declval<__type6>(), std::declval<__type7>())) __type8;
      typedef decltype(std::declval<__type3>()(std::declval<__type8>())) __type9;
      typedef typename pythonic::assignable<__type9>::type __type10;
      typedef std::integral_constant<long,1> __type11;
      typedef __type10 __type12;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type13;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type14;
      typedef __type14 __type15;
      typedef decltype(std::declval<__type13>()(std::declval<__type15>())) __type16;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type16>::type::iterator>::value_type>::type __type17;
      typedef __type17 __type18;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type19;
      typedef __type19 __type20;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type21;
      typedef __type21 __type22;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type23;
      typedef __type23 __type24;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type25;
      typedef __type25 __type26;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type27;
      typedef __type27 __type28;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type29;
      typedef __type29 __type30;
      typedef typename KTzLog_FuncMapa::type<__type12, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype40 __type31;
      typedef indexable_container<__type11, typename std::remove_reference<__type31>::type> __type32;
      typedef typename __combined<__type12,__type32>::type __type33;
      typedef typename KTzLog_FuncMapa::type<__type33, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype41 __type34;
      typedef indexable_container<__type11, typename std::remove_reference<__type34>::type> __type35;
      typedef typename __combined<__type12,__type32,__type35>::type __type36;
      typedef typename KTTanh_FuncMapa::type<__type36, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype30 __type37;
      typedef indexable_container<__type11, typename std::remove_reference<__type37>::type> __type38;
      typedef typename __combined<__type12,__type32,__type35,__type38>::type __type39;
      typedef typename KTTanh_FuncMapa::type<__type39, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype31 __type40;
      typedef indexable_container<__type11, typename std::remove_reference<__type40>::type> __type41;
      typedef typename __combined<__type12,__type32,__type35,__type38,__type41>::type __type42;
      typedef typename KTzTanh_FuncMapa::type<__type42, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype15 __type43;
      typedef indexable_container<__type11, typename std::remove_reference<__type43>::type> __type44;
      typedef typename __combined<__type12,__type32,__type35,__type38,__type41,__type44>::type __type45;
      typedef typename KTzTanh_FuncMapa::type<__type45, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype16 __type46;
      typedef indexable_container<__type11, typename std::remove_reference<__type46>::type> __type47;
      typedef typename __combined<__type12,__type32,__type35,__type38,__type41,__type44,__type47>::type __type48;
      typedef typename KTCTanh_FuncMapa::type<__type48, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype0 __type49;
      typedef indexable_container<__type11, typename std::remove_reference<__type49>::type> __type50;
      typedef typename __combined<__type12,__type32,__type35,__type38,__type41,__type44,__type47,__type50>::type __type51;
      typedef typename KTCTanh_FuncMapa::type<__type51, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype1 __type52;
      typedef indexable_container<__type11, typename std::remove_reference<__type52>::type> __type53;
      typedef typename __combined<__type12,__type32,__type35,__type38,__type41,__type44,__type47,__type50,__type53>::type __type54;
      typedef typename KTLog_FuncMapa::type<__type54, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype55 __type55;
      typedef indexable_container<__type11, typename std::remove_reference<__type55>::type> __type56;
      typedef typename __combined<__type12,__type32,__type35,__type38,__type41,__type44,__type47,__type50,__type53,__type56>::type __type57;
      typedef typename KTLog_FuncMapa::type<__type57, __type18, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype56 __type58;
      typedef indexable_container<__type11, typename std::remove_reference<__type58>::type> __type59;
      typedef KTLog_FuncMapa __type60;
      typedef typename pythonic::assignable<__type60>::type __type61;
      typedef KTzLog_FuncMapa __type62;
      typedef typename pythonic::assignable<__type62>::type __type63;
      typedef KTTanh_FuncMapa __type64;
      typedef typename pythonic::assignable<__type64>::type __type65;
      typedef KTzTanh_FuncMapa __type66;
      typedef typename pythonic::assignable<__type66>::type __type67;
      typedef KTCTanh_FuncMapa __type68;
      typedef typename pythonic::assignable<__type68>::type __type69;
      typedef typename __combined<__type61,__type63,__type65,__type67,__type69>::type __type70;
      typedef __type70 __type71;
      typedef typename __combined<__type12,__type32,__type35,__type38,__type41,__type44,__type47,__type50,__type53,__type56,__type59>::type __type72;
      typedef decltype(std::declval<__type71>()(std::declval<__type72>(), std::declval<__type18>(), std::declval<__type20>(), std::declval<__type22>(), std::declval<__type24>(), std::declval<__type26>(), std::declval<__type28>(), std::declval<__type30>())) __type73;
      typedef typename __combined<__type32,__type35,__type38,__type41,__type44,__type47,__type50,__type53,__type56,__type59,__type73>::type __type74;
      typedef typename pythonic::assignable<__type74>::type __type75;
      typedef typename __combined<__type10,__type32,__type35,__type38,__type41,__type44,__type47,__type50,__type53,__type56,__type59,__type73,__type12,__type75>::type __type76;
      typedef __type76 __type77;
      typedef long __type78;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type79;
      typedef __type79 __type80;
      typedef decltype(pythonic::operator_::sub(std::declval<__type80>(), std::declval<__type15>())) __type82;
      typedef decltype(pythonic::operator_::add(std::declval<__type82>(), std::declval<__type78>())) __type83;
      typedef decltype(std::declval<__type13>()(std::declval<__type78>(), std::declval<__type83>())) __type84;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type84>::type::iterator>::value_type>::type __type85;
      typedef __type85 __type86;
      typedef typename KTzLog_FuncMapa::type<__type77, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype40 __type93;
      typedef indexable_container<__type11, typename std::remove_reference<__type93>::type> __type94;
      typedef typename __combined<__type77,__type94>::type __type95;
      typedef typename KTzLog_FuncMapa::type<__type95, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype41 __type96;
      typedef indexable_container<__type11, typename std::remove_reference<__type96>::type> __type97;
      typedef typename __combined<__type77,__type94,__type97>::type __type98;
      typedef typename KTTanh_FuncMapa::type<__type98, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype30 __type99;
      typedef indexable_container<__type11, typename std::remove_reference<__type99>::type> __type100;
      typedef typename __combined<__type77,__type94,__type97,__type100>::type __type101;
      typedef typename KTTanh_FuncMapa::type<__type101, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype31 __type102;
      typedef indexable_container<__type11, typename std::remove_reference<__type102>::type> __type103;
      typedef typename __combined<__type77,__type94,__type97,__type100,__type103>::type __type104;
      typedef typename KTzTanh_FuncMapa::type<__type104, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype15 __type105;
      typedef indexable_container<__type11, typename std::remove_reference<__type105>::type> __type106;
      typedef typename __combined<__type77,__type94,__type97,__type100,__type103,__type106>::type __type107;
      typedef typename KTzTanh_FuncMapa::type<__type107, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype16 __type108;
      typedef indexable_container<__type11, typename std::remove_reference<__type108>::type> __type109;
      typedef typename __combined<__type77,__type94,__type97,__type100,__type103,__type106,__type109>::type __type110;
      typedef typename KTCTanh_FuncMapa::type<__type110, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype0 __type111;
      typedef indexable_container<__type11, typename std::remove_reference<__type111>::type> __type112;
      typedef typename __combined<__type77,__type94,__type97,__type100,__type103,__type106,__type109,__type112>::type __type113;
      typedef typename KTCTanh_FuncMapa::type<__type113, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype1 __type114;
      typedef indexable_container<__type11, typename std::remove_reference<__type114>::type> __type115;
      typedef typename __combined<__type77,__type94,__type97,__type100,__type103,__type106,__type109,__type112,__type115>::type __type116;
      typedef typename KTLog_FuncMapa::type<__type116, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype55 __type117;
      typedef indexable_container<__type11, typename std::remove_reference<__type117>::type> __type118;
      typedef typename __combined<__type77,__type94,__type97,__type100,__type103,__type106,__type109,__type112,__type115,__type118>::type __type119;
      typedef typename KTLog_FuncMapa::type<__type119, __type86, __type20, __type22, __type24, __type26, __type28, __type30>::__ptype56 __type120;
      typedef indexable_container<__type11, typename std::remove_reference<__type120>::type> __type121;
      typedef typename __combined<__type77,__type94,__type97,__type100,__type103,__type106,__type109,__type112,__type115,__type118,__type121>::type __type123;
      typedef decltype(std::declval<__type71>()(std::declval<__type123>(), std::declval<__type86>(), std::declval<__type20>(), std::declval<__type22>(), std::declval<__type24>(), std::declval<__type26>(), std::declval<__type28>(), std::declval<__type30>())) __type124;
      typedef typename __combined<__type94,__type97,__type100,__type103,__type106,__type109,__type112,__type115,__type118,__type121,__type124>::type __type125;
      typedef typename pythonic::assignable<__type125>::type __type126;
      typedef typename __combined<__type10,__type32,__type35,__type38,__type41,__type44,__type47,__type50,__type53,__type56,__type59,__type73,__type94,__type97,__type100,__type103,__type106,__type109,__type112,__type115,__type118,__type121,__type124,__type12,__type75,__type77,__type126>::type __type127;
      typedef typename pythonic::assignable<__type127>::type __type128;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::list{})>::type>::type __type129;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::map{})>::type>::type __type130;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::functools::functor::partial{})>::type>::type __type131;
      typedef RodaSimulacaoMapa_lambda0 __type132;
      typedef decltype(std::declval<__type131>()(std::declval<__type132>(), std::declval<__type6>())) __type134;
      typedef decltype(std::declval<__type13>()(std::declval<__type83>())) __type139;
      typedef decltype(std::declval<__type130>()(std::declval<__type134>(), std::declval<__type139>())) __type140;
      typedef decltype(std::declval<__type129>()(std::declval<__type140>())) __type141;
      typedef typename pythonic::assignable<__type141>::type __type142;
      typedef indexable<__type78> __type143;
      typedef indexable<__type86> __type145;
      typedef std::integral_constant<long,0> __type146;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::__dispatch__::functor::copy{})>::type>::type __type147;
      typedef __type127 __type148;
      typedef decltype(std::declval<__type147>()(std::declval<__type148>())) __type149;
      typedef indexable_container<__type146, typename std::remove_reference<__type149>::type> __type150;
      typedef container<typename std::remove_reference<__type149>::type> __type153;
      typedef typename __combined<__type142,__type143,__type145,__type150,__type153>::type __type154;
      typedef typename pythonic::assignable<__type154>::type __type155;
      typedef typename pythonic::assignable<__type70>::type __type156;
      __type156 FuncMapa;
      typename pythonic::assignable_noescape<decltype(__type2({pythonic::types::str("ktlog"), pythonic::types::str("ktzlog"), pythonic::types::str("kttanh"), pythonic::types::str("ktztanh"), pythonic::types::str("ktzchialvo")}))>::type mapa_nome_permitidos = __type2({pythonic::types::str("ktlog"), pythonic::types::str("ktzlog"), pythonic::types::str("kttanh"), pythonic::types::str("ktztanh"), pythonic::types::str("ktzchialvo")});
      typename pythonic::assignable_noescape<decltype(pythonic::builtins::str::functor::lower{}(mapa_nome))>::type mapa_nome__ = pythonic::builtins::str::functor::lower{}(mapa_nome);
      pythonic::pythran_assert(pythonic::operator_::contains(mapa_nome_permitidos, mapa_nome__), pythonic::builtins::str::functor::__mod__{}(pythonic::types::str("mapa_nome deve ser um dos seguintes: %s"), pythonic::types::as_const(pythonic::builtins::functor::str{}(mapa_nome_permitidos))[pythonic::types::contiguous_slice(1L,-1L)]));
      if (pythonic::operator_::eq(mapa_nome__, pythonic::types::str("ktlog")))
      {
        FuncMapa = KTLog_FuncMapa();
      }
      else
      {
        if (pythonic::operator_::eq(mapa_nome__, pythonic::types::str("ktzlog")))
        {
          FuncMapa = KTzLog_FuncMapa();
        }
        else
        {
          if (pythonic::operator_::eq(mapa_nome__, pythonic::types::str("kttanh")))
          {
            FuncMapa = KTTanh_FuncMapa();
          }
          else
          {
            if (pythonic::operator_::eq(mapa_nome__, pythonic::types::str("ktztanh")))
            {
              FuncMapa = KTzTanh_FuncMapa();
            }
            else
            {
              if (pythonic::operator_::eq(mapa_nome__, pythonic::types::str("ktzchialvo")))
              {
                FuncMapa = KTCTanh_FuncMapa();
              }
            }
          }
        }
      }
      __type128 x = pythonic::numpy::ndarray::functor::flatten{}(pythonic::numpy::functor::asarray{}(x0, pythonic::builtins::functor::float_{}));
      {
        long  __target1578906801776 = t_transiente;
        for (long  t=0L; t < __target1578906801776; t += 1L)
        {
          x = pythonic::types::call(FuncMapa, x, t, K, T, delta, lamb, xR, H);
        }
      }
      __type155 x_dados = pythonic::builtins::functor::list{}(pythonic::builtins::functor::map{}(pythonic::functools::functor::partial{}(RodaSimulacaoMapa_lambda0(), x0), pythonic::builtins::functor::range{}(pythonic::operator_::add(pythonic::operator_::sub(t_total, t_transiente), 1L))));
      std::get<0>(x_dados) = pythonic::__dispatch__::functor::copy{}(x);
      {
        long  __target1578906823360 = pythonic::operator_::add(pythonic::operator_::sub(t_total, t_transiente), 1L);
        for (long  t_=1L; t_ < __target1578906823360; t_ += 1L)
        {
          x = pythonic::types::call(FuncMapa, x, t_, K, T, delta, lamb, xR, H);
          x_dados[t_] = pythonic::__dispatch__::functor::copy{}(x);
        }
      }
      return pythonic::numpy::functor::array{}(x_dados);
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 , typename argument_type10 , typename argument_type11 , typename argument_type12 >
    inline
    typename RodaSimulacao_Varios_H::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9, argument_type10, argument_type11, argument_type12>::result_type RodaSimulacao_Varios_H::operator()(argument_type0 K, argument_type1 T, argument_type2 delta, argument_type3 lamb, argument_type4 xR, argument_type5 H_valores, argument_type6 t_transiente, argument_type7 t_total, argument_type8 x0, argument_type9 mapa_nome, argument_type10 usar_modulo_de_m, argument_type11 percent_amostras_bootstrap, argument_type12 num_repete_bootstrap) const
    {
      typedef double __type0;
      typedef pythonic::types::list<typename std::remove_reference<__type0>::type> __type1;
      typedef typename pythonic::assignable<__type1>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::max{})>::type>::type __type3;
      typedef long __type4;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::len{})>::type>::type __type5;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type6;
      typedef __type6 __type7;
      typedef decltype(pythonic::types::as_const(std::declval<__type7>())) __type8;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type9;
      typedef decltype(std::declval<__type5>()(std::declval<__type7>())) __type11;
      typedef decltype(std::declval<__type9>()(std::declval<__type11>())) __type12;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type12>::type::iterator>::value_type>::type __type13;
      typedef __type13 __type14;
      typedef decltype(std::declval<__type8>()[std::declval<__type14>()]) __type15;
      typedef container<typename std::remove_reference<__type15>::type> __type16;
      typedef typename __combined<__type6,__type16>::type __type17;
      typedef __type17 __type18;
      typedef decltype(std::declval<__type5>()(std::declval<__type18>())) __type19;
      typedef typename __combined<__type4,__type19>::type __type20;
      typedef decltype(std::declval<__type3>()(std::declval<__type20>(), std::declval<__type19>())) __type21;
      typedef decltype(pythonic::operator_::mul(std::declval<__type1>(), std::declval<__type21>())) __type22;
      typedef typename pythonic::assignable<__type22>::type __type23;
      typedef indexable<__type14> __type25;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::mean{})>::type>::type __type26;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::abs{})>::type>::type __type27;
      typedef RodaSimulacaoMapa __type28;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type29;
      typedef __type29 __type30;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type31;
      typedef __type31 __type32;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type33;
      typedef __type33 __type34;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type35;
      typedef __type35 __type36;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type37;
      typedef __type37 __type38;
      typedef typename pythonic::assignable<__type15>::type __type39;
      typedef __type39 __type40;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type41;
      typedef __type41 __type42;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type43;
      typedef __type43 __type44;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type45;
      typedef __type45 __type46;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type9>::type>::type __type47;
      typedef __type47 __type48;
      typedef decltype(std::declval<__type28>()(std::declval<__type30>(), std::declval<__type32>(), std::declval<__type34>(), std::declval<__type36>(), std::declval<__type38>(), std::declval<__type40>(), std::declval<__type42>(), std::declval<__type44>(), std::declval<__type46>(), std::declval<__type48>())) __type49;
      typedef decltype(pythonic::types::as_const(std::declval<__type49>())) __type50;
      typedef pythonic::types::contiguous_slice __type51;
      typedef decltype(std::declval<__type50>()(std::declval<__type51>(), std::declval<__type4>())) __type52;
      typedef decltype(std::declval<__type27>()(std::declval<__type52>())) __type53;
      typedef typename __combined<__type50,__type49>::type __type54;
      typedef decltype(pythonic::types::as_const(std::declval<__type54>())) __type55;
      typedef decltype(std::declval<__type55>()(std::declval<__type51>(), std::declval<__type4>())) __type56;
      typedef typename __combined<__type53,__type56>::type __type57;
      typedef typename pythonic::assignable<__type57>::type __type58;
      typedef __type58 __type59;
      typedef decltype(std::declval<__type26>()(std::declval<__type59>())) __type60;
      typedef container<typename std::remove_reference<__type60>::type> __type61;
      typedef typename __combined<__type23,__type25,__type61>::type __type62;
      typedef typename pythonic::assignable<__type62>::type __type63;
      typedef typename pythonic::assignable<__type30>::type __type73;
      typedef __type73 __type74;
      typedef decltype(pythonic::operator_::mul(std::declval<__type0>(), std::declval<__type74>())) __type75;
      typedef decltype(pythonic::operator_::add(std::declval<__type0>(), std::declval<__type75>())) __type76;
      typedef typename pythonic::assignable<__type32>::type __type78;
      typedef __type78 __type79;
      typedef cosh __type80;
      typedef decltype(pythonic::operator_::sub(std::declval<__type4>(), std::declval<__type74>())) __type81;
      typedef __type62 __type82;
      typedef decltype(pythonic::types::as_const(std::declval<__type82>())) __type83;
      typedef decltype(std::declval<__type83>()[std::declval<__type14>()]) __type85;
      typedef decltype(pythonic::operator_::mul(std::declval<__type81>(), std::declval<__type85>())) __type86;
      typedef decltype(pythonic::operator_::add(std::declval<__type86>(), std::declval<__type40>())) __type88;
      typedef decltype(pythonic::operator_::mul(std::declval<__type0>(), std::declval<__type88>())) __type89;
      typedef decltype(pythonic::operator_::div(std::declval<__type89>(), std::declval<__type79>())) __type90;
      typedef decltype(std::declval<__type80>()(std::declval<__type90>())) __type91;
      typedef decltype(pythonic::operator_::add(std::declval<__type0>(), std::declval<__type91>())) __type92;
      typedef decltype(pythonic::operator_::mul(std::declval<__type79>(), std::declval<__type92>())) __type93;
      typedef decltype(pythonic::operator_::add(std::declval<__type76>(), std::declval<__type93>())) __type94;
      typedef decltype(pythonic::operator_::div(std::declval<__type0>(), std::declval<__type94>())) __type95;
      typedef container<typename std::remove_reference<__type95>::type> __type96;
      typedef typename __combined<__type23,__type25,__type96>::type __type97;
      typedef typename pythonic::assignable<__type97>::type __type98;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type107;
      typedef decltype(std::declval<__type107>()(std::declval<__type59>())) __type109;
      typedef container<typename std::remove_reference<__type109>::type> __type110;
      typedef typename __combined<__type23,__type25,__type110>::type __type111;
      typedef typename pythonic::assignable<__type111>::type __type112;
      typedef bootstrap_variance __type123;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::int_{})>::type>::type __type125;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type11>::type>::type __type126;
      typedef __type126 __type127;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type59>())) __type129;
      typedef decltype(pythonic::operator_::mul(std::declval<__type127>(), std::declval<__type129>())) __type130;
      typedef decltype(std::declval<__type125>()(std::declval<__type130>())) __type131;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type12>::type>::type __type132;
      typedef __type132 __type133;
      typedef decltype(std::declval<__type123>()(std::declval<__type59>(), std::declval<__type131>(), std::declval<__type133>())) __type134;
      typedef typename pythonic::assignable<__type134>::type __type135;
      typedef __type135 __type136;
      typedef decltype(pythonic::types::as_const(std::declval<__type136>())) __type137;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type137>::type>::type __type138;
      typedef container<typename std::remove_reference<__type138>::type> __type139;
      typedef container<typename std::remove_reference<__type0>::type> __type140;
      typedef typename __combined<__type23,__type25,__type139,__type140>::type __type141;
      typedef typename pythonic::assignable<__type141>::type __type142;
      typedef typename pythonic::assignable<__type58>::type __type143;
      __type63 x_media = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(H_valores)));
      __type98 x_suscept = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(H_valores)));
      __type112 x_var = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(H_valores)));
      __type142 x_var_std = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(H_valores)));
      {
        long  __target1578906709824 = pythonic::builtins::functor::len{}(H_valores);
        for (long  k=0L; k < __target1578906709824; k += 1L)
        {
          typename pythonic::assignable_noescape<decltype(pythonic::types::as_const(H_valores)[k])>::type H = pythonic::types::as_const(H_valores)[k];
          __type143 x_dados_ = (((bool)usar_modulo_de_m) ? typename __combined<decltype(pythonic::numpy::functor::abs{}(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))), decltype(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))>::type(pythonic::numpy::functor::abs{}(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))) : typename __combined<decltype(pythonic::numpy::functor::abs{}(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))), decltype(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))>::type(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L)));
          x_media[k] = pythonic::numpy::functor::mean{}(x_dados_);
          typename pythonic::assignable_noescape<decltype(K)>::type __pythran_inlineKT_susceptibilidadeK1 = K;
          typename pythonic::assignable_noescape<decltype(T)>::type __pythran_inlineKT_susceptibilidadeT1 = T;
          x_suscept[k] = pythonic::operator_::div(2.0, pythonic::operator_::add(pythonic::operator_::add(-2.0, pythonic::operator_::mul(2.0, __pythran_inlineKT_susceptibilidadeK1)), pythonic::operator_::mul(__pythran_inlineKT_susceptibilidadeT1, pythonic::operator_::add(1.0, pythonic::types::call(cosh(), pythonic::operator_::div(pythonic::operator_::mul(2.0, pythonic::operator_::add(pythonic::operator_::mul(pythonic::operator_::sub(1L, __pythran_inlineKT_susceptibilidadeK1), pythonic::types::as_const(x_media)[k]), H)), __pythran_inlineKT_susceptibilidadeT1))))));
          x_var[k] = pythonic::numpy::functor::var{}(x_dados_);
          if (pythonic::operator_::gt(num_repete_bootstrap, 0L))
          {
            typename pythonic::assignable_noescape<decltype(pythonic::types::call(bootstrap_variance(), x_dados_, pythonic::builtins::functor::int_{}(pythonic::operator_::mul(percent_amostras_bootstrap, pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x_dados_))), num_repete_bootstrap))>::type __tuple0 = pythonic::types::call(bootstrap_variance(), x_dados_, pythonic::builtins::functor::int_{}(pythonic::operator_::mul(percent_amostras_bootstrap, pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x_dados_))), num_repete_bootstrap);
            x_var_std[k] = std::get<1>(pythonic::types::as_const(__tuple0));
          }
          else
          {
            x_var_std[k] = pythonic::numpy::nan;
          }
        }
      }
      return pythonic::types::make_tuple(pythonic::numpy::functor::array{}(x_media), pythonic::numpy::functor::array{}(x_var), pythonic::numpy::functor::array{}(x_var_std), pythonic::numpy::functor::array{}(x_suscept));
    }
    template <typename argument_type0 , typename argument_type1 , typename argument_type2 , typename argument_type3 , typename argument_type4 , typename argument_type5 , typename argument_type6 , typename argument_type7 , typename argument_type8 , typename argument_type9 , typename argument_type10 , typename argument_type11 , typename argument_type12 >
    inline
    typename RodaSimulacao_Varios_T::type<argument_type0, argument_type1, argument_type2, argument_type3, argument_type4, argument_type5, argument_type6, argument_type7, argument_type8, argument_type9, argument_type10, argument_type11, argument_type12>::result_type RodaSimulacao_Varios_T::operator()(argument_type0 K, argument_type1 T_valores, argument_type2 delta, argument_type3 lamb, argument_type4 xR, argument_type5 H, argument_type6 t_transiente, argument_type7 t_total, argument_type8 x0, argument_type9 mapa_nome, argument_type10 usar_modulo_de_m, argument_type11 percent_amostras_bootstrap, argument_type12 num_repete_bootstrap) const
    {
      typedef double __type0;
      typedef pythonic::types::list<typename std::remove_reference<__type0>::type> __type1;
      typedef typename pythonic::assignable<__type1>::type __type2;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::max{})>::type>::type __type3;
      typedef long __type4;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::len{})>::type>::type __type5;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type1>::type>::type __type6;
      typedef __type6 __type7;
      typedef decltype(pythonic::types::as_const(std::declval<__type7>())) __type8;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type9;
      typedef decltype(std::declval<__type5>()(std::declval<__type7>())) __type11;
      typedef decltype(std::declval<__type9>()(std::declval<__type11>())) __type12;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type12>::type::iterator>::value_type>::type __type13;
      typedef __type13 __type14;
      typedef decltype(std::declval<__type8>()[std::declval<__type14>()]) __type15;
      typedef container<typename std::remove_reference<__type15>::type> __type16;
      typedef typename pythonic::assignable<__type15>::type __type17;
      typedef __type17 __type18;
      typedef container<typename std::remove_reference<__type18>::type> __type19;
      typedef typename __combined<__type6,__type16,__type19>::type __type20;
      typedef __type20 __type21;
      typedef decltype(std::declval<__type5>()(std::declval<__type21>())) __type22;
      typedef typename __combined<__type4,__type22>::type __type23;
      typedef decltype(std::declval<__type3>()(std::declval<__type23>(), std::declval<__type22>())) __type24;
      typedef decltype(pythonic::operator_::mul(std::declval<__type1>(), std::declval<__type24>())) __type25;
      typedef typename pythonic::assignable<__type25>::type __type26;
      typedef indexable<__type14> __type28;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::mean{})>::type>::type __type29;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::abs{})>::type>::type __type30;
      typedef RodaSimulacaoMapa __type31;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type32;
      typedef __type32 __type33;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type2>::type>::type __type35;
      typedef __type35 __type36;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type3>::type>::type __type37;
      typedef __type37 __type38;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type4>::type>::type __type39;
      typedef __type39 __type40;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type5>::type>::type __type41;
      typedef __type41 __type42;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type6>::type>::type __type43;
      typedef __type43 __type44;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type7>::type>::type __type45;
      typedef __type45 __type46;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type8>::type>::type __type47;
      typedef __type47 __type48;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type9>::type>::type __type49;
      typedef __type49 __type50;
      typedef decltype(std::declval<__type31>()(std::declval<__type33>(), std::declval<__type18>(), std::declval<__type36>(), std::declval<__type38>(), std::declval<__type40>(), std::declval<__type42>(), std::declval<__type44>(), std::declval<__type46>(), std::declval<__type48>(), std::declval<__type50>())) __type51;
      typedef decltype(pythonic::types::as_const(std::declval<__type51>())) __type52;
      typedef pythonic::types::contiguous_slice __type53;
      typedef decltype(std::declval<__type52>()(std::declval<__type53>(), std::declval<__type4>())) __type54;
      typedef decltype(std::declval<__type30>()(std::declval<__type54>())) __type55;
      typedef typename __combined<__type52,__type51>::type __type56;
      typedef decltype(pythonic::types::as_const(std::declval<__type56>())) __type57;
      typedef decltype(std::declval<__type57>()(std::declval<__type53>(), std::declval<__type4>())) __type58;
      typedef typename __combined<__type55,__type58>::type __type59;
      typedef typename pythonic::assignable<__type59>::type __type60;
      typedef __type60 __type61;
      typedef decltype(std::declval<__type29>()(std::declval<__type61>())) __type62;
      typedef container<typename std::remove_reference<__type62>::type> __type63;
      typedef typename __combined<__type26,__type28,__type63>::type __type64;
      typedef typename pythonic::assignable<__type64>::type __type65;
      typedef typename pythonic::assignable<__type33>::type __type75;
      typedef __type75 __type76;
      typedef decltype(pythonic::operator_::mul(std::declval<__type0>(), std::declval<__type76>())) __type77;
      typedef decltype(pythonic::operator_::add(std::declval<__type0>(), std::declval<__type77>())) __type78;
      typedef typename pythonic::assignable<__type18>::type __type79;
      typedef __type79 __type80;
      typedef cosh __type81;
      typedef decltype(pythonic::operator_::sub(std::declval<__type4>(), std::declval<__type76>())) __type82;
      typedef __type64 __type83;
      typedef decltype(pythonic::types::as_const(std::declval<__type83>())) __type84;
      typedef decltype(std::declval<__type84>()[std::declval<__type14>()]) __type86;
      typedef decltype(pythonic::operator_::mul(std::declval<__type82>(), std::declval<__type86>())) __type87;
      typedef decltype(pythonic::operator_::add(std::declval<__type87>(), std::declval<__type42>())) __type89;
      typedef decltype(pythonic::operator_::mul(std::declval<__type0>(), std::declval<__type89>())) __type90;
      typedef decltype(pythonic::operator_::div(std::declval<__type90>(), std::declval<__type80>())) __type91;
      typedef decltype(std::declval<__type81>()(std::declval<__type91>())) __type92;
      typedef decltype(pythonic::operator_::add(std::declval<__type0>(), std::declval<__type92>())) __type93;
      typedef decltype(pythonic::operator_::mul(std::declval<__type80>(), std::declval<__type93>())) __type94;
      typedef decltype(pythonic::operator_::add(std::declval<__type78>(), std::declval<__type94>())) __type95;
      typedef decltype(pythonic::operator_::div(std::declval<__type0>(), std::declval<__type95>())) __type96;
      typedef container<typename std::remove_reference<__type96>::type> __type97;
      typedef typename __combined<__type26,__type28,__type97>::type __type98;
      typedef typename pythonic::assignable<__type98>::type __type99;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::var{})>::type>::type __type108;
      typedef decltype(std::declval<__type108>()(std::declval<__type61>())) __type110;
      typedef container<typename std::remove_reference<__type110>::type> __type111;
      typedef typename __combined<__type26,__type28,__type111>::type __type112;
      typedef typename pythonic::assignable<__type112>::type __type113;
      typedef bootstrap_variance __type124;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::int_{})>::type>::type __type126;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type11>::type>::type __type127;
      typedef __type127 __type128;
      typedef decltype(pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, std::declval<__type61>())) __type130;
      typedef decltype(pythonic::operator_::mul(std::declval<__type128>(), std::declval<__type130>())) __type131;
      typedef decltype(std::declval<__type126>()(std::declval<__type131>())) __type132;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type12>::type>::type __type133;
      typedef __type133 __type134;
      typedef decltype(std::declval<__type124>()(std::declval<__type61>(), std::declval<__type132>(), std::declval<__type134>())) __type135;
      typedef typename pythonic::assignable<__type135>::type __type136;
      typedef __type136 __type137;
      typedef decltype(pythonic::types::as_const(std::declval<__type137>())) __type138;
      typedef typename std::tuple_element<1,typename std::remove_reference<__type138>::type>::type __type139;
      typedef container<typename std::remove_reference<__type139>::type> __type140;
      typedef container<typename std::remove_reference<__type0>::type> __type141;
      typedef typename __combined<__type26,__type28,__type140,__type141>::type __type142;
      typedef typename pythonic::assignable<__type142>::type __type143;
      typedef typename pythonic::assignable<__type60>::type __type144;
      __type65 x_media = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(T_valores)));
      __type99 x_suscept = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(T_valores)));
      __type113 x_var = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(T_valores)));
      __type143 x_var_std = pythonic::operator_::mul(__type2(0.0, pythonic::types::single_value()), pythonic::builtins::functor::max{}(0L, pythonic::builtins::functor::len{}(T_valores)));
      {
        long  __target1578906621216 = pythonic::builtins::functor::len{}(T_valores);
        for (long  k=0L; k < __target1578906621216; k += 1L)
        {
          typename pythonic::assignable_noescape<decltype(pythonic::types::as_const(T_valores)[k])>::type T = pythonic::types::as_const(T_valores)[k];
          __type144 x_dados_ = (((bool)usar_modulo_de_m) ? typename __combined<decltype(pythonic::numpy::functor::abs{}(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))), decltype(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))>::type(pythonic::numpy::functor::abs{}(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))) : typename __combined<decltype(pythonic::numpy::functor::abs{}(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))), decltype(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L))>::type(pythonic::types::as_const(pythonic::types::call(RodaSimulacaoMapa(), K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome))(pythonic::types::contiguous_slice(pythonic::builtins::None,pythonic::builtins::None),0L)));
          x_media[k] = pythonic::numpy::functor::mean{}(x_dados_);
          typename pythonic::assignable_noescape<decltype(K)>::type __pythran_inlineKT_susceptibilidadeK0 = K;
          typename pythonic::assignable_noescape<decltype(T)>::type __pythran_inlineKT_susceptibilidadeT0 = T;
          x_suscept[k] = pythonic::operator_::div(2.0, pythonic::operator_::add(pythonic::operator_::add(-2.0, pythonic::operator_::mul(2.0, __pythran_inlineKT_susceptibilidadeK0)), pythonic::operator_::mul(__pythran_inlineKT_susceptibilidadeT0, pythonic::operator_::add(1.0, pythonic::types::call(cosh(), pythonic::operator_::div(pythonic::operator_::mul(2.0, pythonic::operator_::add(pythonic::operator_::mul(pythonic::operator_::sub(1L, __pythran_inlineKT_susceptibilidadeK0), pythonic::types::as_const(x_media)[k]), H)), __pythran_inlineKT_susceptibilidadeT0))))));
          x_var[k] = pythonic::numpy::functor::var{}(x_dados_);
          if (pythonic::operator_::gt(num_repete_bootstrap, 0L))
          {
            typename pythonic::assignable_noescape<decltype(pythonic::types::call(bootstrap_variance(), x_dados_, pythonic::builtins::functor::int_{}(pythonic::operator_::mul(percent_amostras_bootstrap, pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x_dados_))), num_repete_bootstrap))>::type __tuple0 = pythonic::types::call(bootstrap_variance(), x_dados_, pythonic::builtins::functor::int_{}(pythonic::operator_::mul(percent_amostras_bootstrap, pythonic::builtins::getattr(pythonic::types::attr::SIZE{}, x_dados_))), num_repete_bootstrap);
            x_var_std[k] = std::get<1>(pythonic::types::as_const(__tuple0));
          }
          else
          {
            x_var_std[k] = pythonic::numpy::nan;
          }
        }
      }
      return pythonic::types::make_tuple(pythonic::numpy::functor::array{}(x_media), pythonic::numpy::functor::array{}(x_var), pythonic::numpy::functor::array{}(x_var_std), pythonic::numpy::functor::array{}(x_suscept));
    }
  }
}
#include <pythonic/python/exception_handler.hpp>
#ifdef ENABLE_PYTHON_MODULE
inline
typename __pythran_SimulacaoKTz::cosh::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>::result_type cosh0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::cosh()(x);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::cosh::type<double>::result_type cosh1(double&& x) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::cosh()(x);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::sech::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>::result_type sech0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::sech()(x);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::sech::type<double>::result_type sech1(double&& x) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::sech()(x);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::KT_susceptibilidade::type<double, double, double, double>::result_type KT_susceptibilidade0(double&& K, double&& T, double&& H, double&& m_medio) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::KT_susceptibilidade()(K, T, H, m_medio);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::bootstrap_variance::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, long>::result_type bootstrap_variance0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& n_samples, long&& n_repeats) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::bootstrap_variance()(x, n_samples, n_repeats);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::KTCTanh_FuncMapa::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, double, double, double, double, double, double>::result_type KTCTanh_FuncMapa0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& t, double&& K, double&& T, double&& delta, double&& lamb, double&& xR, double&& H) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::KTCTanh_FuncMapa()(x, t, K, T, delta, lamb, xR, H);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::KTzTanh_FuncMapa::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, double, double, double, double, double, double>::result_type KTzTanh_FuncMapa0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& t, double&& K, double&& T, double&& delta, double&& lamb, double&& xR, double&& H) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::KTzTanh_FuncMapa()(x, t, K, T, delta, lamb, xR, H);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::KTTanh_FuncMapa::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, double, double, double, double, double, double>::result_type KTTanh_FuncMapa0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& t, double&& K, double&& T, double&& delta, double&& lamb, double&& xR, double&& H) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::KTTanh_FuncMapa()(x, t, K, T, delta, lamb, xR, H);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::KTzLog_FuncMapa::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, double, double, double, double, double, double>::result_type KTzLog_FuncMapa0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& t, double&& K, double&& T, double&& delta, double&& lamb, double&& xR, double&& H) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::KTzLog_FuncMapa()(x, t, K, T, delta, lamb, xR, H);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::KTLog_FuncMapa::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, double, double, double, double, double, double>::result_type KTLog_FuncMapa0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& t, double&& K, double&& T, double&& delta, double&& lamb, double&& xR, double&& H) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::KTLog_FuncMapa()(x, t, K, T, delta, lamb, xR, H);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::calc_AutoCorr_normalized_lag::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long>::result_type calc_AutoCorr_normalized_lag0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& tau) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::calc_AutoCorr_normalized_lag()(x, tau);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::calc_AutoCorr_normalized::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>::result_type calc_AutoCorr_normalized0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::calc_AutoCorr_normalized()(x);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::calc_AutoCorr_not_normalized_lag::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long>::result_type calc_AutoCorr_not_normalized_lag0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& tau) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::calc_AutoCorr_not_normalized_lag()(x, tau);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::calc_AutoCorr_not_normalized::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>::result_type calc_AutoCorr_not_normalized0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::calc_AutoCorr_not_normalized()(x);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::calc_AutoCorr_lag::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, bool>::result_type calc_AutoCorr_lag0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, long&& tau, bool&& normalize) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::calc_AutoCorr_lag()(x, tau, normalize);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::calc_AutoCorr::type<pythonic::types::ndarray<double,pythonic::types::pshape<long>>, bool>::result_type calc_AutoCorr0(pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x, bool&& normalize) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::calc_AutoCorr()(x, normalize);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::RodaSimulacaoMapa::type<double, double, double, double, double, double, long, long, pythonic::types::ndarray<double,pythonic::types::pshape<long>>, pythonic::types::str>::result_type RodaSimulacaoMapa0(double&& K, double&& T, double&& delta, double&& lamb, double&& xR, double&& H, long&& t_transiente, long&& t_total, pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x0, pythonic::types::str&& mapa_nome) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::RodaSimulacaoMapa()(K, T, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::RodaSimulacao_Varios_H::type<double, double, double, double, double, pythonic::types::ndarray<double,pythonic::types::pshape<long>>, long, long, pythonic::types::ndarray<double,pythonic::types::pshape<long>>, pythonic::types::str, bool, double, long>::result_type RodaSimulacao_Varios_H0(double&& K, double&& T, double&& delta, double&& lamb, double&& xR, pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& H_valores, long&& t_transiente, long&& t_total, pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x0, pythonic::types::str&& mapa_nome, bool&& usar_modulo_de_m, double&& percent_amostras_bootstrap, long&& num_repete_bootstrap) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::RodaSimulacao_Varios_H()(K, T, delta, lamb, xR, H_valores, t_transiente, t_total, x0, mapa_nome, usar_modulo_de_m, percent_amostras_bootstrap, num_repete_bootstrap);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}
inline
typename __pythran_SimulacaoKTz::RodaSimulacao_Varios_T::type<double, pythonic::types::ndarray<double,pythonic::types::pshape<long>>, double, double, double, double, long, long, pythonic::types::ndarray<double,pythonic::types::pshape<long>>, pythonic::types::str, bool, double, long>::result_type RodaSimulacao_Varios_T0(double&& K, pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& T_valores, double&& delta, double&& lamb, double&& xR, double&& H, long&& t_transiente, long&& t_total, pythonic::types::ndarray<double,pythonic::types::pshape<long>>&& x0, pythonic::types::str&& mapa_nome, bool&& usar_modulo_de_m, double&& percent_amostras_bootstrap, long&& num_repete_bootstrap) 
{
  
                            PyThreadState *_save = PyEval_SaveThread();
                            try {
                                auto res = __pythran_SimulacaoKTz::RodaSimulacao_Varios_T()(K, T_valores, delta, lamb, xR, H, t_transiente, t_total, x0, mapa_nome, usar_modulo_de_m, percent_amostras_bootstrap, num_repete_bootstrap);
                                PyEval_RestoreThread(_save);
                                return res;
                            }
                            catch(...) {
                                PyEval_RestoreThread(_save);
                                throw;
                            }
                            ;
}

static PyObject *
__pythran_wrap_cosh0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[1+1];
    
    char const* keywords[] = {"x",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "O",
                                     (char**)keywords , &args_obj[0]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]))
        return to_python(cosh0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_cosh1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[1+1];
    
    char const* keywords[] = {"x",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "O",
                                     (char**)keywords , &args_obj[0]))
        return nullptr;
    if(is_convertible<double>(args_obj[0]))
        return to_python(cosh1(from_python<double>(args_obj[0])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_sech0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[1+1];
    
    char const* keywords[] = {"x",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "O",
                                     (char**)keywords , &args_obj[0]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]))
        return to_python(sech0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_sech1(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[1+1];
    
    char const* keywords[] = {"x",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "O",
                                     (char**)keywords , &args_obj[0]))
        return nullptr;
    if(is_convertible<double>(args_obj[0]))
        return to_python(sech1(from_python<double>(args_obj[0])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_KT_susceptibilidade0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[4+1];
    
    char const* keywords[] = {"K", "T", "H", "m_medio",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3]))
        return nullptr;
    if(is_convertible<double>(args_obj[0]) && is_convertible<double>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]))
        return to_python(KT_susceptibilidade0(from_python<double>(args_obj[0]), from_python<double>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_bootstrap_variance0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"x", "n_samples", "n_repeats",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]) && is_convertible<long>(args_obj[2]))
        return to_python(bootstrap_variance0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1]), from_python<long>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_KTCTanh_FuncMapa0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"x", "t", "K", "T", "delta", "lamb", "xR", "H",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<double>(args_obj[6]) && is_convertible<double>(args_obj[7]))
        return to_python(KTCTanh_FuncMapa0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<double>(args_obj[6]), from_python<double>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_KTzTanh_FuncMapa0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"x", "t", "K", "T", "delta", "lamb", "xR", "H",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<double>(args_obj[6]) && is_convertible<double>(args_obj[7]))
        return to_python(KTzTanh_FuncMapa0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<double>(args_obj[6]), from_python<double>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_KTTanh_FuncMapa0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"x", "t", "K", "T", "delta", "lamb", "xR", "H",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<double>(args_obj[6]) && is_convertible<double>(args_obj[7]))
        return to_python(KTTanh_FuncMapa0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<double>(args_obj[6]), from_python<double>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_KTzLog_FuncMapa0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"x", "t", "K", "T", "delta", "lamb", "xR", "H",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<double>(args_obj[6]) && is_convertible<double>(args_obj[7]))
        return to_python(KTzLog_FuncMapa0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<double>(args_obj[6]), from_python<double>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_KTLog_FuncMapa0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[8+1];
    
    char const* keywords[] = {"x", "t", "K", "T", "delta", "lamb", "xR", "H",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<double>(args_obj[6]) && is_convertible<double>(args_obj[7]))
        return to_python(KTLog_FuncMapa0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<double>(args_obj[6]), from_python<double>(args_obj[7])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_calc_AutoCorr_normalized_lag0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[2+1];
    
    char const* keywords[] = {"x", "tau",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OO",
                                     (char**)keywords , &args_obj[0], &args_obj[1]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]))
        return to_python(calc_AutoCorr_normalized_lag0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_calc_AutoCorr_normalized0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[1+1];
    
    char const* keywords[] = {"x",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "O",
                                     (char**)keywords , &args_obj[0]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]))
        return to_python(calc_AutoCorr_normalized0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_calc_AutoCorr_not_normalized_lag0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[2+1];
    
    char const* keywords[] = {"x", "tau",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OO",
                                     (char**)keywords , &args_obj[0], &args_obj[1]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]))
        return to_python(calc_AutoCorr_not_normalized_lag0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_calc_AutoCorr_not_normalized0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[1+1];
    
    char const* keywords[] = {"x",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "O",
                                     (char**)keywords , &args_obj[0]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]))
        return to_python(calc_AutoCorr_not_normalized0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_calc_AutoCorr_lag0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[3+1];
    
    char const* keywords[] = {"x", "tau", "normalize",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<long>(args_obj[1]) && is_convertible<bool>(args_obj[2]))
        return to_python(calc_AutoCorr_lag0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<long>(args_obj[1]), from_python<bool>(args_obj[2])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_calc_AutoCorr0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[2+1];
    
    char const* keywords[] = {"x", "normalize",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OO",
                                     (char**)keywords , &args_obj[0], &args_obj[1]))
        return nullptr;
    if(is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]) && is_convertible<bool>(args_obj[1]))
        return to_python(calc_AutoCorr0(from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[0]), from_python<bool>(args_obj[1])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_RodaSimulacaoMapa0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[10+1];
    
    char const* keywords[] = {"K", "T", "delta", "lamb", "xR", "H", "t_transiente", "t_total", "x0", "mapa_nome",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8], &args_obj[9]))
        return nullptr;
    if(is_convertible<double>(args_obj[0]) && is_convertible<double>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[8]) && is_convertible<pythonic::types::str>(args_obj[9]))
        return to_python(RodaSimulacaoMapa0(from_python<double>(args_obj[0]), from_python<double>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[8]), from_python<pythonic::types::str>(args_obj[9])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_RodaSimulacao_Varios_H0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[13+1];
    
    char const* keywords[] = {"K", "T", "delta", "lamb", "xR", "H_valores", "t_transiente", "t_total", "x0", "mapa_nome", "usar_modulo_de_m", "percent_amostras_bootstrap", "num_repete_bootstrap",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8], &args_obj[9], &args_obj[10], &args_obj[11], &args_obj[12]))
        return nullptr;
    if(is_convertible<double>(args_obj[0]) && is_convertible<double>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[8]) && is_convertible<pythonic::types::str>(args_obj[9]) && is_convertible<bool>(args_obj[10]) && is_convertible<double>(args_obj[11]) && is_convertible<long>(args_obj[12]))
        return to_python(RodaSimulacao_Varios_H0(from_python<double>(args_obj[0]), from_python<double>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[8]), from_python<pythonic::types::str>(args_obj[9]), from_python<bool>(args_obj[10]), from_python<double>(args_obj[11]), from_python<long>(args_obj[12])));
    else {
        return nullptr;
    }
}

static PyObject *
__pythran_wrap_RodaSimulacao_Varios_T0(PyObject *self, PyObject *args, PyObject *kw)
{
    PyObject* args_obj[13+1];
    
    char const* keywords[] = {"K", "T_valores", "delta", "lamb", "xR", "H", "t_transiente", "t_total", "x0", "mapa_nome", "usar_modulo_de_m", "percent_amostras_bootstrap", "num_repete_bootstrap",  nullptr};
    if(! PyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOOOOOO",
                                     (char**)keywords , &args_obj[0], &args_obj[1], &args_obj[2], &args_obj[3], &args_obj[4], &args_obj[5], &args_obj[6], &args_obj[7], &args_obj[8], &args_obj[9], &args_obj[10], &args_obj[11], &args_obj[12]))
        return nullptr;
    if(is_convertible<double>(args_obj[0]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[1]) && is_convertible<double>(args_obj[2]) && is_convertible<double>(args_obj[3]) && is_convertible<double>(args_obj[4]) && is_convertible<double>(args_obj[5]) && is_convertible<long>(args_obj[6]) && is_convertible<long>(args_obj[7]) && is_convertible<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[8]) && is_convertible<pythonic::types::str>(args_obj[9]) && is_convertible<bool>(args_obj[10]) && is_convertible<double>(args_obj[11]) && is_convertible<long>(args_obj[12]))
        return to_python(RodaSimulacao_Varios_T0(from_python<double>(args_obj[0]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[1]), from_python<double>(args_obj[2]), from_python<double>(args_obj[3]), from_python<double>(args_obj[4]), from_python<double>(args_obj[5]), from_python<long>(args_obj[6]), from_python<long>(args_obj[7]), from_python<pythonic::types::ndarray<double,pythonic::types::pshape<long>>>(args_obj[8]), from_python<pythonic::types::str>(args_obj[9]), from_python<bool>(args_obj[10]), from_python<double>(args_obj[11]), from_python<long>(args_obj[12])));
    else {
        return nullptr;
    }
}

            static PyObject *
            __pythran_wrapall_cosh(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_cosh0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_cosh1(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "cosh", "\n""    - cosh(float[:])\n""    - cosh(float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_sech(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_sech0(self, args, kw))
    return obj;
PyErr_Clear();


if(PyObject* obj = __pythran_wrap_sech1(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "sech", "\n""    - sech(float[:])\n""    - sech(float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_KT_susceptibilidade(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_KT_susceptibilidade0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "KT_susceptibilidade", "\n""    - KT_susceptibilidade(float, float, float, float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_bootstrap_variance(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_bootstrap_variance0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "bootstrap_variance", "\n""    - bootstrap_variance(float[:], int, int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_KTCTanh_FuncMapa(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_KTCTanh_FuncMapa0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "KTCTanh_FuncMapa", "\n""    - KTCTanh_FuncMapa(float[:], int, float, float, float, float, float, float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_KTzTanh_FuncMapa(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_KTzTanh_FuncMapa0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "KTzTanh_FuncMapa", "\n""    - KTzTanh_FuncMapa(float[:], int, float, float, float, float, float, float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_KTTanh_FuncMapa(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_KTTanh_FuncMapa0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "KTTanh_FuncMapa", "\n""    - KTTanh_FuncMapa(float[:], int, float, float, float, float, float, float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_KTzLog_FuncMapa(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_KTzLog_FuncMapa0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "KTzLog_FuncMapa", "\n""    - KTzLog_FuncMapa(float[:], int, float, float, float, float, float, float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_KTLog_FuncMapa(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_KTLog_FuncMapa0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "KTLog_FuncMapa", "\n""    - KTLog_FuncMapa(float[:], int, float, float, float, float, float, float)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_calc_AutoCorr_normalized_lag(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_calc_AutoCorr_normalized_lag0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "calc_AutoCorr_normalized_lag", "\n""    - calc_AutoCorr_normalized_lag(float[:], int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_calc_AutoCorr_normalized(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_calc_AutoCorr_normalized0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "calc_AutoCorr_normalized", "\n""    - calc_AutoCorr_normalized(float[:])", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_calc_AutoCorr_not_normalized_lag(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_calc_AutoCorr_not_normalized_lag0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "calc_AutoCorr_not_normalized_lag", "\n""    - calc_AutoCorr_not_normalized_lag(float[:], int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_calc_AutoCorr_not_normalized(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_calc_AutoCorr_not_normalized0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "calc_AutoCorr_not_normalized", "\n""    - calc_AutoCorr_not_normalized(float[:])", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_calc_AutoCorr_lag(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_calc_AutoCorr_lag0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "calc_AutoCorr_lag", "\n""    - calc_AutoCorr_lag(float[:], int, bool)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_calc_AutoCorr(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_calc_AutoCorr0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "calc_AutoCorr", "\n""    - calc_AutoCorr(float[:], bool)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_RodaSimulacaoMapa(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_RodaSimulacaoMapa0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "RodaSimulacaoMapa", "\n""    - RodaSimulacaoMapa(float, float, float, float, float, float, int, int, float[:], str)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_RodaSimulacao_Varios_H(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_RodaSimulacao_Varios_H0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "RodaSimulacao_Varios_H", "\n""    - RodaSimulacao_Varios_H(float, float, float, float, float, float[:], int, int, float[:], str, bool, float, int)", args, kw);
                });
            }


            static PyObject *
            __pythran_wrapall_RodaSimulacao_Varios_T(PyObject *self, PyObject *args, PyObject *kw)
            {
                return pythonic::handle_python_exception([self, args, kw]()
                -> PyObject* {

if(PyObject* obj = __pythran_wrap_RodaSimulacao_Varios_T0(self, args, kw))
    return obj;
PyErr_Clear();

                return pythonic::python::raise_invalid_argument(
                               "RodaSimulacao_Varios_T", "\n""    - RodaSimulacao_Varios_T(float, float[:], float, float, float, float, int, int, float[:], str, bool, float, int)", args, kw);
                });
            }


static PyMethodDef Methods[] = {
    {
    "cosh",
    (PyCFunction)__pythran_wrapall_cosh,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - cosh(float[:])\n""    - cosh(float)"},{
    "sech",
    (PyCFunction)__pythran_wrapall_sech,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - sech(float[:])\n""    - sech(float)"},{
    "KT_susceptibilidade",
    (PyCFunction)__pythran_wrapall_KT_susceptibilidade,
    METH_VARARGS | METH_KEYWORDS,
    "\n""retorna a derivada da magnetizacao em relacao a H\n""\n""\n""Supported prototypes:\n""\n""- KT_susceptibilidade(float, float, float, float)"},{
    "bootstrap_variance",
    (PyCFunction)__pythran_wrapall_bootstrap_variance,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - bootstrap_variance(float[:], int, int)"},{
    "KTCTanh_FuncMapa",
    (PyCFunction)__pythran_wrapall_KTCTanh_FuncMapa,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - KTCTanh_FuncMapa(float[:], int, float, float, float, float, float, float)"},{
    "KTzTanh_FuncMapa",
    (PyCFunction)__pythran_wrapall_KTzTanh_FuncMapa,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - KTzTanh_FuncMapa(float[:], int, float, float, float, float, float, float)"},{
    "KTTanh_FuncMapa",
    (PyCFunction)__pythran_wrapall_KTTanh_FuncMapa,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - KTTanh_FuncMapa(float[:], int, float, float, float, float, float, float)"},{
    "KTzLog_FuncMapa",
    (PyCFunction)__pythran_wrapall_KTzLog_FuncMapa,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - KTzLog_FuncMapa(float[:], int, float, float, float, float, float, float)"},{
    "KTLog_FuncMapa",
    (PyCFunction)__pythran_wrapall_KTLog_FuncMapa,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - KTLog_FuncMapa(float[:], int, float, float, float, float, float, float)"},{
    "calc_AutoCorr_normalized_lag",
    (PyCFunction)__pythran_wrapall_calc_AutoCorr_normalized_lag,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - calc_AutoCorr_normalized_lag(float[:], int)"},{
    "calc_AutoCorr_normalized",
    (PyCFunction)__pythran_wrapall_calc_AutoCorr_normalized,
    METH_VARARGS | METH_KEYWORDS,
    "Supported prototypes:\n""\n""    - calc_AutoCorr_normalized(float[:])"},{
    "calc_AutoCorr_not_normalized_lag",
    (PyCFunction)__pythran_wrapall_calc_AutoCorr_not_normalized_lag,
    METH_VARARGS | METH_KEYWORDS,
    "\n""equivalente a numpy.correlate e scipy.signal.correlate\n""com mode='full' ou 'same'\n""https://numpy.org/doc/stable/reference/generated/numpy.correlate.html\n""produto escalar de x(t) com x(t+tau)\n""C(tau) = x(t) . x(t+tau)\n""onde o produto escalar (.) varre todo o tempo\n""\n""\n""Supported prototypes:\n""\n""- calc_AutoCorr_not_normalized_lag(float[:], int)"},{
    "calc_AutoCorr_not_normalized",
    (PyCFunction)__pythran_wrapall_calc_AutoCorr_not_normalized,
    METH_VARARGS | METH_KEYWORDS,
    "\n""equivalente a numpy.correlate e scipy.signal.correlate\n""com mode='full' ou 'same'\n""https://numpy.org/doc/stable/reference/generated/numpy.correlate.html\n""produto escalar de x(t) com x(t+tau)\n""C(tau) = x(t) . x(t+tau)\n""onde o produto escalar (.) varre todo o tempo\n""\n""\n""Supported prototypes:\n""\n""- calc_AutoCorr_not_normalized(float[:])"},{
    "calc_AutoCorr_lag",
    (PyCFunction)__pythran_wrapall_calc_AutoCorr_lag,
    METH_VARARGS | METH_KEYWORDS,
    "\n""calcula a função de autocorrelação AC normalizada ou não\n""\n""Supported prototypes:\n""\n""- calc_AutoCorr_lag(float[:], int, bool)\n""\n""x -> dados da serie temporal da magnetizacao\n""normalize -> if normalize, then AC[0] is always 1\n""            aparentemente, na definição de Chialvo et al 2020 Scientific RepoRtS 10:12145 - https://doi.org/10.1038/s41598-020-69154-0 (Ver material suplementar)\n""            a função de AC deve ser sempre 1 em lag = 0 (independente de T)\n"""},{
    "calc_AutoCorr",
    (PyCFunction)__pythran_wrapall_calc_AutoCorr,
    METH_VARARGS | METH_KEYWORDS,
    "\n""calcula a função de autocorrelação AC normalizada ou não\n""\n""Supported prototypes:\n""\n""- calc_AutoCorr(float[:], bool)\n""\n""x -> dados da serie temporal da magnetizacao\n""normalize -> if normalize, then AC[0] is always 1\n""            aparentemente, na definição de Chialvo et al 2020 Scientific RepoRtS 10:12145 - https://doi.org/10.1038/s41598-020-69154-0 (Ver material suplementar)\n""            a função de AC deve ser sempre 1 em lag = 0 (independente de T)\n"""},{
    "RodaSimulacaoMapa",
    (PyCFunction)__pythran_wrapall_RodaSimulacaoMapa,
    METH_VARARGS | METH_KEYWORDS,
    "\n""Essa funcao itera o mapa identificado por 'mapa_nome' por um total de t_total passos de tempo,\n""ignorando os primeiros t_transiente passos.\n""\n""Supported prototypes:\n""\n""- RodaSimulacaoMapa(float, float, float, float, float, float, int, int, float[:], str)\n""\n""K            -> parametro de interacao entre camadas da rede de Bethe\n""T            -> parametro de temperatura\n""delta        -> escala de tempo de recuperacao do feedback\n""lamb         -> escala de tempo de forcamento do feedback\n""xR           -> magnetizacao de referencia\n""H            -> campo magnetico externo\n""t_transiente -> intervalo de tempo transiente (a ser descartado da dinamica)\n""t_total      -> intervalo total de tempo\n""x0           -> condicao inicial ( 3 valores para ktz, ou 2 valores para kt )\n""mapa_nome    -> nome do mapa a ser iterado:\n""                ktlog      : modelo KT com funcao logistica (x0 deve ter 2 valores)\n""                ktzlog     : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)\n""                kttanh     : modelo KT com tanh (x0 deve ter 2 valores)\n""                ktztanh    : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)\n""                ktzchialvo : modelo KT com adaptacao em T simplificando dinamica Chialvo et al 2020 Sci Rep\n""\n""retorna:\n""    x_dados -> x em funcao do tempo; cada item nessa lista eh um passo de tempo do modelo\n"""},{
    "RodaSimulacao_Varios_H",
    (PyCFunction)__pythran_wrapall_RodaSimulacao_Varios_H,
    METH_VARARGS | METH_KEYWORDS,
    "\n""Essa funcao itera o mapa identificado por 'mapa_nome' por um total de t_total passos de tempo,\n""ignorando os primeiros t_transiente passos,\n""e repete isso para todos os H na lista H_valores\n""\n""Supported prototypes:\n""\n""- RodaSimulacao_Varios_H(float, float, float, float, float, float[:], int, int, float[:], str, bool, float, int)\n""\n""e retorna a media temporal de x em funcao de H\n""a media eh tomada a partir de t_transiente ate t_total\n""\n""K                -> parametro de interacao entre camadas da rede de Bethe\n""T                -> parametro de temperatura\n""delta            -> escala de tempo de recuperacao do feedback\n""lamb             -> escala de tempo de forcamento do feedback\n""xR               -> magnetizacao de referencia\n""H_valores        -> lista de campos magneticos externos\n""t_transiente     -> intervalo de tempo transiente (a ser descartado da dinamica)\n""t_total          -> intervalo total de tempo\n""x0               -> condicao inicial ( 3 valores para ktz, ou 2 valores para kt )\n""mapa_nome        -> nome do mapa a ser iterado:\n""                    ktlog      : modelo KT com funcao logistica (x0 deve ter 2 valores)\n""                    ktzlog     : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)\n""                    kttanh     : modelo KT com tanh (x0 deve ter 2 valores)\n""                    ktztanh    : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)\n""                    ktzchialvo : modelo KT com adaptacao em T simplificando dinamica Chialvo et al 2020 Sci Rep\n""usar_modulo_de_m -> se True, então usa |m| para calcular a media e a varririância\n""\n""parametros para calcular o desvio padrao da variancia por bootstrap\n""percent_amostras_bootstrap -> percentual da quantidade de valores de x para selecionar uma amostra de bootstrap (percentual de (t_total - t_transiente))\n""num_repete_bootstrap       -> numero de repeticoes para realizar o bootstrap\n""\n""retorna:\n""    x_media    -> x medio em funcao de H\n""    x_var      -> variancia de x em funcao de H\n""    x_var_std  -> desvio padrao da variancia de x em funcao de H (calculado usando bootstrap)\n""    x_suscept  -> susceptibilidade da magnetizacao (x) em funcao de H\n"""},{
    "RodaSimulacao_Varios_T",
    (PyCFunction)__pythran_wrapall_RodaSimulacao_Varios_T,
    METH_VARARGS | METH_KEYWORDS,
    "\n""Essa funcao itera o mapa identificado por 'mapa_nome' por um total de t_total passos de tempo,\n""ignorando os primeiros t_transiente passos,\n""e repete isso para todos os H na lista H_valores\n""\n""Supported prototypes:\n""\n""- RodaSimulacao_Varios_T(float, float[:], float, float, float, float, int, int, float[:], str, bool, float, int)\n""\n""e retorna a media temporal de x em funcao de T\n""a media eh tomada a partir de t_transiente ate t_total\n""\n""K                -> parametro de interacao entre camadas da rede de Bethe\n""T_valores        -> lista de temperaturas\n""delta            -> escala de tempo de recuperacao do feedback\n""lamb             -> escala de tempo de forcamento do feedback\n""xR               -> magnetizacao de referencia\n""H                -> campo magnetico externo\n""t_transiente     -> intervalo de tempo transiente (a ser descartado da dinamica)\n""t_total          -> intervalo total de tempo\n""x0               -> condicao inicial ( 3 valores para ktz, ou 2 valores para kt )\n""mapa_nome        -> nome do mapa a ser iterado:\n""                    ktlog      : modelo KT com funcao logistica (x0 deve ter 2 valores)\n""                    ktzlog     : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)\n""                    kttanh     : modelo KT com tanh (x0 deve ter 2 valores)\n""                    ktztanh    : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)\n""                    ktzchialvo : modelo KT com adaptacao em T simplificando dinamica Chialvo et al 2020 Sci Rep\n""usar_modulo_de_m -> se True, então usa |m| para calcular a media e a varririância\n""\n""parametros para calcular o desvio padrao da variancia por bootstrap\n""percent_amostras_bootstrap -> percentual da quantidade de valores de x para selecionar uma amostra de bootstrap (percentual de (t_total - t_transiente))\n""num_repete_bootstrap       -> numero de repeticoes para realizar o bootstrap\n""\n""retorna:\n""    x_media    -> x medio em funcao de H\n""    x_var      -> variancia de x em funcao de H\n""    x_var_std  -> desvio padrao da variancia de x em funcao de H (calculado usando bootstrap)\n""    x_suscept  -> susceptibilidade da magnetizacao (x) em funcao de H\n"""},
    {NULL, NULL, 0, NULL}
};


#if PY_MAJOR_VERSION >= 3
  static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "SimulacaoKTz",            /* m_name */
    "",         /* m_doc */
    -1,                  /* m_size */
    Methods,             /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#define PYTHRAN_RETURN return theModule
#define PYTHRAN_MODULE_INIT(s) PyInit_##s
#else
#define PYTHRAN_RETURN return
#define PYTHRAN_MODULE_INIT(s) init##s
#endif
PyMODINIT_FUNC
PYTHRAN_MODULE_INIT(SimulacaoKTz)(void)
#ifndef _WIN32
__attribute__ ((visibility("default")))
#if defined(GNUC) && !defined(__clang__)
__attribute__ ((externally_visible))
#endif
#endif
;
PyMODINIT_FUNC
PYTHRAN_MODULE_INIT(SimulacaoKTz)(void) {
    import_array()
    #if PY_MAJOR_VERSION >= 3
    PyObject* theModule = PyModule_Create(&moduledef);
    #else
    PyObject* theModule = Py_InitModule3("SimulacaoKTz",
                                         Methods,
                                         ""
    );
    #endif
    if(! theModule)
        PYTHRAN_RETURN;
    PyObject * theDoc = Py_BuildValue("(ss)",
                                      "0.15.0",
                                      "c2c0fd1e9b918763ba5c31639975a669397180f98db2ed7631b2c6ae61b83647");
    if(! theDoc)
        PYTHRAN_RETURN;
    PyModule_AddObject(theModule,
                       "__pythran__",
                       theDoc);


    PYTHRAN_RETURN;
}

#endif