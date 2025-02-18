// Copyright (c) Facebook, Inc. and its affiliates. (http://www.facebook.com)
#pragma once

// This file is @generated by Tools/scripts/generate_jit_type_h.py.
// Run 'make regen-jit' to update it.

namespace jit {
namespace hir {

// clang-format off

constexpr size_t kTypeHasUniquePyType = 1;
constexpr size_t kTypeHasTrivialMortality = 2;

// For all types, call X(name, bits, mortality, flags)
#define HIR_TYPES(X) \
  X(Array,                         0x000000800800UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(ArrayExact,                    0x000000000800UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(ArrayUser,                     0x000000800000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(BaseException,                 0x000001001000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(BaseExceptionExact,            0x000000001000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(BaseExceptionUser,             0x000001000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Bool,                          0x000000000001UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(Bottom,                        0x000000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(BuiltinExact,                  0x0000001fffffUL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Bytes,                         0x000002002000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(BytesExact,                    0x000000002000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(BytesUser,                     0x000002000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(CBool,                         0x000200000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CDouble,                       0x080000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CEnum,                         0x100000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CInt,                          0x03fc00000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CInt16,                        0x000800000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CInt32,                        0x001000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CInt64,                        0x002000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CInt8,                         0x000400000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CPtr,                          0x040000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CSigned,                       0x003c00000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CUInt16,                       0x008000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CUInt32,                       0x010000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CUInt64,                       0x020000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CUInt8,                        0x004000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(CUnsigned,                     0x03c000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(Cell,                          0x000000000002UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(Code,                          0x000000000004UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(Dict,                          0x000004004000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(DictExact,                     0x000000004000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(DictUser,                      0x000004000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Float,                         0x000008008000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(FloatExact,                    0x000000008000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(FloatUser,                     0x000008000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Frame,                         0x000000000008UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(Func,                          0x000000000010UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(Gen,                           0x000000000020UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(ImmortalArray,                 0x000000800800UL, kLifetimeImmortal, 0) \
  X(ImmortalArrayExact,            0x000000000800UL, kLifetimeImmortal, 0) \
  X(ImmortalArrayUser,             0x000000800000UL, kLifetimeImmortal, 0) \
  X(ImmortalBaseException,         0x000001001000UL, kLifetimeImmortal, 0) \
  X(ImmortalBaseExceptionExact,    0x000000001000UL, kLifetimeImmortal, 0) \
  X(ImmortalBaseExceptionUser,     0x000001000000UL, kLifetimeImmortal, 0) \
  X(ImmortalBool,                  0x000000000001UL, kLifetimeImmortal, 0) \
  X(ImmortalBuiltinExact,          0x0000001fffffUL, kLifetimeImmortal, 0) \
  X(ImmortalBytes,                 0x000002002000UL, kLifetimeImmortal, 0) \
  X(ImmortalBytesExact,            0x000000002000UL, kLifetimeImmortal, 0) \
  X(ImmortalBytesUser,             0x000002000000UL, kLifetimeImmortal, 0) \
  X(ImmortalCell,                  0x000000000002UL, kLifetimeImmortal, 0) \
  X(ImmortalCode,                  0x000000000004UL, kLifetimeImmortal, 0) \
  X(ImmortalDict,                  0x000004004000UL, kLifetimeImmortal, 0) \
  X(ImmortalDictExact,             0x000000004000UL, kLifetimeImmortal, 0) \
  X(ImmortalDictUser,              0x000004000000UL, kLifetimeImmortal, 0) \
  X(ImmortalFloat,                 0x000008008000UL, kLifetimeImmortal, 0) \
  X(ImmortalFloatExact,            0x000000008000UL, kLifetimeImmortal, 0) \
  X(ImmortalFloatUser,             0x000008000000UL, kLifetimeImmortal, 0) \
  X(ImmortalFrame,                 0x000000000008UL, kLifetimeImmortal, 0) \
  X(ImmortalFunc,                  0x000000000010UL, kLifetimeImmortal, 0) \
  X(ImmortalGen,                   0x000000000020UL, kLifetimeImmortal, 0) \
  X(ImmortalList,                  0x000010010000UL, kLifetimeImmortal, 0) \
  X(ImmortalListExact,             0x000000010000UL, kLifetimeImmortal, 0) \
  X(ImmortalListUser,              0x000010000000UL, kLifetimeImmortal, 0) \
  X(ImmortalLong,                  0x000000200201UL, kLifetimeImmortal, 0) \
  X(ImmortalLongExact,             0x000000000200UL, kLifetimeImmortal, 0) \
  X(ImmortalLongUser,              0x000000200000UL, kLifetimeImmortal, 0) \
  X(ImmortalNoneType,              0x000000000040UL, kLifetimeImmortal, 0) \
  X(ImmortalObject,                0x0001ffffffffUL, kLifetimeImmortal, 0) \
  X(ImmortalObjectExact,           0x000000000400UL, kLifetimeImmortal, 0) \
  X(ImmortalObjectUser,            0x000000400000UL, kLifetimeImmortal, 0) \
  X(ImmortalSet,                   0x000020020000UL, kLifetimeImmortal, 0) \
  X(ImmortalSetExact,              0x000000020000UL, kLifetimeImmortal, 0) \
  X(ImmortalSetUser,               0x000020000000UL, kLifetimeImmortal, 0) \
  X(ImmortalSlice,                 0x000000000080UL, kLifetimeImmortal, 0) \
  X(ImmortalTuple,                 0x000040040000UL, kLifetimeImmortal, 0) \
  X(ImmortalTupleExact,            0x000000040000UL, kLifetimeImmortal, 0) \
  X(ImmortalTupleUser,             0x000040000000UL, kLifetimeImmortal, 0) \
  X(ImmortalType,                  0x000080080000UL, kLifetimeImmortal, 0) \
  X(ImmortalTypeExact,             0x000000080000UL, kLifetimeImmortal, 0) \
  X(ImmortalTypeUser,              0x000080000000UL, kLifetimeImmortal, 0) \
  X(ImmortalUnicode,               0x000100100000UL, kLifetimeImmortal, 0) \
  X(ImmortalUnicodeExact,          0x000000100000UL, kLifetimeImmortal, 0) \
  X(ImmortalUnicodeUser,           0x000100000000UL, kLifetimeImmortal, 0) \
  X(ImmortalUser,                  0x0001ffe00000UL, kLifetimeImmortal, 0) \
  X(ImmortalWaitHandle,            0x000000000100UL, kLifetimeImmortal, 0) \
  X(List,                          0x000010010000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(ListExact,                     0x000000010000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(ListUser,                      0x000010000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Long,                          0x000000200201UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(LongExact,                     0x000000000200UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(LongUser,                      0x000000200000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(MortalArray,                   0x000000800800UL, kLifetimeMortal,   0) \
  X(MortalArrayExact,              0x000000000800UL, kLifetimeMortal,   0) \
  X(MortalArrayUser,               0x000000800000UL, kLifetimeMortal,   0) \
  X(MortalBaseException,           0x000001001000UL, kLifetimeMortal,   0) \
  X(MortalBaseExceptionExact,      0x000000001000UL, kLifetimeMortal,   0) \
  X(MortalBaseExceptionUser,       0x000001000000UL, kLifetimeMortal,   0) \
  X(MortalBool,                    0x000000000001UL, kLifetimeMortal,   0) \
  X(MortalBuiltinExact,            0x0000001fffffUL, kLifetimeMortal,   0) \
  X(MortalBytes,                   0x000002002000UL, kLifetimeMortal,   0) \
  X(MortalBytesExact,              0x000000002000UL, kLifetimeMortal,   0) \
  X(MortalBytesUser,               0x000002000000UL, kLifetimeMortal,   0) \
  X(MortalCell,                    0x000000000002UL, kLifetimeMortal,   0) \
  X(MortalCode,                    0x000000000004UL, kLifetimeMortal,   0) \
  X(MortalDict,                    0x000004004000UL, kLifetimeMortal,   0) \
  X(MortalDictExact,               0x000000004000UL, kLifetimeMortal,   0) \
  X(MortalDictUser,                0x000004000000UL, kLifetimeMortal,   0) \
  X(MortalFloat,                   0x000008008000UL, kLifetimeMortal,   0) \
  X(MortalFloatExact,              0x000000008000UL, kLifetimeMortal,   0) \
  X(MortalFloatUser,               0x000008000000UL, kLifetimeMortal,   0) \
  X(MortalFrame,                   0x000000000008UL, kLifetimeMortal,   0) \
  X(MortalFunc,                    0x000000000010UL, kLifetimeMortal,   0) \
  X(MortalGen,                     0x000000000020UL, kLifetimeMortal,   0) \
  X(MortalList,                    0x000010010000UL, kLifetimeMortal,   0) \
  X(MortalListExact,               0x000000010000UL, kLifetimeMortal,   0) \
  X(MortalListUser,                0x000010000000UL, kLifetimeMortal,   0) \
  X(MortalLong,                    0x000000200201UL, kLifetimeMortal,   0) \
  X(MortalLongExact,               0x000000000200UL, kLifetimeMortal,   0) \
  X(MortalLongUser,                0x000000200000UL, kLifetimeMortal,   0) \
  X(MortalNoneType,                0x000000000040UL, kLifetimeMortal,   0) \
  X(MortalObject,                  0x0001ffffffffUL, kLifetimeMortal,   0) \
  X(MortalObjectExact,             0x000000000400UL, kLifetimeMortal,   0) \
  X(MortalObjectUser,              0x000000400000UL, kLifetimeMortal,   0) \
  X(MortalSet,                     0x000020020000UL, kLifetimeMortal,   0) \
  X(MortalSetExact,                0x000000020000UL, kLifetimeMortal,   0) \
  X(MortalSetUser,                 0x000020000000UL, kLifetimeMortal,   0) \
  X(MortalSlice,                   0x000000000080UL, kLifetimeMortal,   0) \
  X(MortalTuple,                   0x000040040000UL, kLifetimeMortal,   0) \
  X(MortalTupleExact,              0x000000040000UL, kLifetimeMortal,   0) \
  X(MortalTupleUser,               0x000040000000UL, kLifetimeMortal,   0) \
  X(MortalType,                    0x000080080000UL, kLifetimeMortal,   0) \
  X(MortalTypeExact,               0x000000080000UL, kLifetimeMortal,   0) \
  X(MortalTypeUser,                0x000080000000UL, kLifetimeMortal,   0) \
  X(MortalUnicode,                 0x000100100000UL, kLifetimeMortal,   0) \
  X(MortalUnicodeExact,            0x000000100000UL, kLifetimeMortal,   0) \
  X(MortalUnicodeUser,             0x000100000000UL, kLifetimeMortal,   0) \
  X(MortalUser,                    0x0001ffe00000UL, kLifetimeMortal,   0) \
  X(MortalWaitHandle,              0x000000000100UL, kLifetimeMortal,   0) \
  X(NoneType,                      0x000000000040UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(Nullptr,                       0x200000000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(Object,                        0x0001ffffffffUL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(ObjectExact,                   0x000000000400UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(ObjectUser,                    0x000000400000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptArray,                      0x200000800800UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptArrayExact,                 0x200000000800UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptArrayUser,                  0x200000800000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBaseException,              0x200001001000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBaseExceptionExact,         0x200000001000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBaseExceptionUser,          0x200001000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBool,                       0x200000000001UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBuiltinExact,               0x2000001fffffUL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBytes,                      0x200002002000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBytesExact,                 0x200000002000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptBytesUser,                  0x200002000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptCell,                       0x200000000002UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptCode,                       0x200000000004UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptDict,                       0x200004004000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptDictExact,                  0x200000004000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptDictUser,                   0x200004000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptFloat,                      0x200008008000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptFloatExact,                 0x200000008000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptFloatUser,                  0x200008000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptFrame,                      0x200000000008UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptFunc,                       0x200000000010UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptGen,                        0x200000000020UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptImmortalArray,              0x200000800800UL, kLifetimeImmortal, 0) \
  X(OptImmortalArrayExact,         0x200000000800UL, kLifetimeImmortal, 0) \
  X(OptImmortalArrayUser,          0x200000800000UL, kLifetimeImmortal, 0) \
  X(OptImmortalBaseException,      0x200001001000UL, kLifetimeImmortal, 0) \
  X(OptImmortalBaseExceptionExact, 0x200000001000UL, kLifetimeImmortal, 0) \
  X(OptImmortalBaseExceptionUser,  0x200001000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalBool,               0x200000000001UL, kLifetimeImmortal, 0) \
  X(OptImmortalBuiltinExact,       0x2000001fffffUL, kLifetimeImmortal, 0) \
  X(OptImmortalBytes,              0x200002002000UL, kLifetimeImmortal, 0) \
  X(OptImmortalBytesExact,         0x200000002000UL, kLifetimeImmortal, 0) \
  X(OptImmortalBytesUser,          0x200002000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalCell,               0x200000000002UL, kLifetimeImmortal, 0) \
  X(OptImmortalCode,               0x200000000004UL, kLifetimeImmortal, 0) \
  X(OptImmortalDict,               0x200004004000UL, kLifetimeImmortal, 0) \
  X(OptImmortalDictExact,          0x200000004000UL, kLifetimeImmortal, 0) \
  X(OptImmortalDictUser,           0x200004000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalFloat,              0x200008008000UL, kLifetimeImmortal, 0) \
  X(OptImmortalFloatExact,         0x200000008000UL, kLifetimeImmortal, 0) \
  X(OptImmortalFloatUser,          0x200008000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalFrame,              0x200000000008UL, kLifetimeImmortal, 0) \
  X(OptImmortalFunc,               0x200000000010UL, kLifetimeImmortal, 0) \
  X(OptImmortalGen,                0x200000000020UL, kLifetimeImmortal, 0) \
  X(OptImmortalList,               0x200010010000UL, kLifetimeImmortal, 0) \
  X(OptImmortalListExact,          0x200000010000UL, kLifetimeImmortal, 0) \
  X(OptImmortalListUser,           0x200010000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalLong,               0x200000200201UL, kLifetimeImmortal, 0) \
  X(OptImmortalLongExact,          0x200000000200UL, kLifetimeImmortal, 0) \
  X(OptImmortalLongUser,           0x200000200000UL, kLifetimeImmortal, 0) \
  X(OptImmortalNoneType,           0x200000000040UL, kLifetimeImmortal, 0) \
  X(OptImmortalObject,             0x2001ffffffffUL, kLifetimeImmortal, 0) \
  X(OptImmortalObjectExact,        0x200000000400UL, kLifetimeImmortal, 0) \
  X(OptImmortalObjectUser,         0x200000400000UL, kLifetimeImmortal, 0) \
  X(OptImmortalSet,                0x200020020000UL, kLifetimeImmortal, 0) \
  X(OptImmortalSetExact,           0x200000020000UL, kLifetimeImmortal, 0) \
  X(OptImmortalSetUser,            0x200020000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalSlice,              0x200000000080UL, kLifetimeImmortal, 0) \
  X(OptImmortalTuple,              0x200040040000UL, kLifetimeImmortal, 0) \
  X(OptImmortalTupleExact,         0x200000040000UL, kLifetimeImmortal, 0) \
  X(OptImmortalTupleUser,          0x200040000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalType,               0x200080080000UL, kLifetimeImmortal, 0) \
  X(OptImmortalTypeExact,          0x200000080000UL, kLifetimeImmortal, 0) \
  X(OptImmortalTypeUser,           0x200080000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalUnicode,            0x200100100000UL, kLifetimeImmortal, 0) \
  X(OptImmortalUnicodeExact,       0x200000100000UL, kLifetimeImmortal, 0) \
  X(OptImmortalUnicodeUser,        0x200100000000UL, kLifetimeImmortal, 0) \
  X(OptImmortalUser,               0x2001ffe00000UL, kLifetimeImmortal, 0) \
  X(OptImmortalWaitHandle,         0x200000000100UL, kLifetimeImmortal, 0) \
  X(OptList,                       0x200010010000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptListExact,                  0x200000010000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptListUser,                   0x200010000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptLong,                       0x200000200201UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptLongExact,                  0x200000000200UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptLongUser,                   0x200000200000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptMortalArray,                0x200000800800UL, kLifetimeMortal,   0) \
  X(OptMortalArrayExact,           0x200000000800UL, kLifetimeMortal,   0) \
  X(OptMortalArrayUser,            0x200000800000UL, kLifetimeMortal,   0) \
  X(OptMortalBaseException,        0x200001001000UL, kLifetimeMortal,   0) \
  X(OptMortalBaseExceptionExact,   0x200000001000UL, kLifetimeMortal,   0) \
  X(OptMortalBaseExceptionUser,    0x200001000000UL, kLifetimeMortal,   0) \
  X(OptMortalBool,                 0x200000000001UL, kLifetimeMortal,   0) \
  X(OptMortalBuiltinExact,         0x2000001fffffUL, kLifetimeMortal,   0) \
  X(OptMortalBytes,                0x200002002000UL, kLifetimeMortal,   0) \
  X(OptMortalBytesExact,           0x200000002000UL, kLifetimeMortal,   0) \
  X(OptMortalBytesUser,            0x200002000000UL, kLifetimeMortal,   0) \
  X(OptMortalCell,                 0x200000000002UL, kLifetimeMortal,   0) \
  X(OptMortalCode,                 0x200000000004UL, kLifetimeMortal,   0) \
  X(OptMortalDict,                 0x200004004000UL, kLifetimeMortal,   0) \
  X(OptMortalDictExact,            0x200000004000UL, kLifetimeMortal,   0) \
  X(OptMortalDictUser,             0x200004000000UL, kLifetimeMortal,   0) \
  X(OptMortalFloat,                0x200008008000UL, kLifetimeMortal,   0) \
  X(OptMortalFloatExact,           0x200000008000UL, kLifetimeMortal,   0) \
  X(OptMortalFloatUser,            0x200008000000UL, kLifetimeMortal,   0) \
  X(OptMortalFrame,                0x200000000008UL, kLifetimeMortal,   0) \
  X(OptMortalFunc,                 0x200000000010UL, kLifetimeMortal,   0) \
  X(OptMortalGen,                  0x200000000020UL, kLifetimeMortal,   0) \
  X(OptMortalList,                 0x200010010000UL, kLifetimeMortal,   0) \
  X(OptMortalListExact,            0x200000010000UL, kLifetimeMortal,   0) \
  X(OptMortalListUser,             0x200010000000UL, kLifetimeMortal,   0) \
  X(OptMortalLong,                 0x200000200201UL, kLifetimeMortal,   0) \
  X(OptMortalLongExact,            0x200000000200UL, kLifetimeMortal,   0) \
  X(OptMortalLongUser,             0x200000200000UL, kLifetimeMortal,   0) \
  X(OptMortalNoneType,             0x200000000040UL, kLifetimeMortal,   0) \
  X(OptMortalObject,               0x2001ffffffffUL, kLifetimeMortal,   0) \
  X(OptMortalObjectExact,          0x200000000400UL, kLifetimeMortal,   0) \
  X(OptMortalObjectUser,           0x200000400000UL, kLifetimeMortal,   0) \
  X(OptMortalSet,                  0x200020020000UL, kLifetimeMortal,   0) \
  X(OptMortalSetExact,             0x200000020000UL, kLifetimeMortal,   0) \
  X(OptMortalSetUser,              0x200020000000UL, kLifetimeMortal,   0) \
  X(OptMortalSlice,                0x200000000080UL, kLifetimeMortal,   0) \
  X(OptMortalTuple,                0x200040040000UL, kLifetimeMortal,   0) \
  X(OptMortalTupleExact,           0x200000040000UL, kLifetimeMortal,   0) \
  X(OptMortalTupleUser,            0x200040000000UL, kLifetimeMortal,   0) \
  X(OptMortalType,                 0x200080080000UL, kLifetimeMortal,   0) \
  X(OptMortalTypeExact,            0x200000080000UL, kLifetimeMortal,   0) \
  X(OptMortalTypeUser,             0x200080000000UL, kLifetimeMortal,   0) \
  X(OptMortalUnicode,              0x200100100000UL, kLifetimeMortal,   0) \
  X(OptMortalUnicodeExact,         0x200000100000UL, kLifetimeMortal,   0) \
  X(OptMortalUnicodeUser,          0x200100000000UL, kLifetimeMortal,   0) \
  X(OptMortalUser,                 0x2001ffe00000UL, kLifetimeMortal,   0) \
  X(OptMortalWaitHandle,           0x200000000100UL, kLifetimeMortal,   0) \
  X(OptNoneType,                   0x200000000040UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptObject,                     0x2001ffffffffUL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptObjectExact,                0x200000000400UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptObjectUser,                 0x200000400000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptSet,                        0x200020020000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptSetExact,                   0x200000020000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptSetUser,                    0x200020000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptSlice,                      0x200000000080UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptTuple,                      0x200040040000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptTupleExact,                 0x200000040000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptTupleUser,                  0x200040000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptType,                       0x200080080000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptTypeExact,                  0x200000080000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptTypeUser,                   0x200080000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptUnicode,                    0x200100100000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptUnicodeExact,               0x200000100000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptUnicodeUser,                0x200100000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptUser,                       0x2001ffe00000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(OptWaitHandle,                 0x200000000100UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Primitive,                     0x3ffe00000000UL, kLifetimeBottom,      \
    kTypeHasTrivialMortality)                                              \
  X(Set,                           0x000020020000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(SetExact,                      0x000000020000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(SetUser,                       0x000020000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Slice,                         0x000000000080UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(Top,                           0x3fffffffffffUL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Tuple,                         0x000040040000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(TupleExact,                    0x000000040000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(TupleUser,                     0x000040000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Type,                          0x000080080000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(TypeExact,                     0x000000080000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(TypeUser,                      0x000080000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(Unicode,                       0x000100100000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                       \
  X(UnicodeExact,                  0x000000100000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(UnicodeUser,                   0x000100000000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(User,                          0x0001ffe00000UL, kLifetimeTop,         \
    kTypeHasTrivialMortality)                                              \
  X(WaitHandle,                    0x000000000100UL, kLifetimeTop,         \
    kTypeHasTrivialMortality | kTypeHasUniquePyType)                      

constexpr size_t kNumTypeBits = 46;

// clang-format on

} // namespace hir
} // namespace jit
