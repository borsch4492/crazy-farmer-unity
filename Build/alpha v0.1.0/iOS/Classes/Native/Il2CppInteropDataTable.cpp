#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A;
// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry>
struct List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs>
struct EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs>
struct EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2;
// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs>
struct EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs>
struct EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CRC32_TFF0A758546E2E3AAC1C1070B54BE797CDC1758CC_H
#define CRC32_TFF0A758546E2E3AAC1C1070B54BE797CDC1758CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Crc.CRC32
struct  CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 Pathfinding.Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean Pathfinding.Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] Pathfinding.Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___crc32Table_3;
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::_register
	uint32_t ____register_4;

public:
	inline static int32_t get_offset_of_dwPolynomial_0() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ___dwPolynomial_0)); }
	inline uint32_t get_dwPolynomial_0() const { return ___dwPolynomial_0; }
	inline uint32_t* get_address_of_dwPolynomial_0() { return &___dwPolynomial_0; }
	inline void set_dwPolynomial_0(uint32_t value)
	{
		___dwPolynomial_0 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_1() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ____TotalBytesRead_1)); }
	inline int64_t get__TotalBytesRead_1() const { return ____TotalBytesRead_1; }
	inline int64_t* get_address_of__TotalBytesRead_1() { return &____TotalBytesRead_1; }
	inline void set__TotalBytesRead_1(int64_t value)
	{
		____TotalBytesRead_1 = value;
	}

	inline static int32_t get_offset_of_reverseBits_2() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ___reverseBits_2)); }
	inline bool get_reverseBits_2() const { return ___reverseBits_2; }
	inline bool* get_address_of_reverseBits_2() { return &___reverseBits_2; }
	inline void set_reverseBits_2(bool value)
	{
		___reverseBits_2 = value;
	}

	inline static int32_t get_offset_of_crc32Table_3() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ___crc32Table_3)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_crc32Table_3() const { return ___crc32Table_3; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_crc32Table_3() { return &___crc32Table_3; }
	inline void set_crc32Table_3(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___crc32Table_3 = value;
		Il2CppCodeGenWriteBarrier((&___crc32Table_3), value);
	}

	inline static int32_t get_offset_of__register_4() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ____register_4)); }
	inline uint32_t get__register_4() const { return ____register_4; }
	inline uint32_t* get_address_of__register_4() { return &____register_4; }
	inline void set__register_4(uint32_t value)
	{
		____register_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRC32_TFF0A758546E2E3AAC1C1070B54BE797CDC1758CC_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ZIPEXCEPTION_T9852FF702F5E1ED258E5E72E1FB8E1343953E513_H
#define ZIPEXCEPTION_T9852FF702F5E1ED258E5E72E1FB8E1343953E513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipException
struct  ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPEXCEPTION_T9852FF702F5E1ED258E5E72E1FB8E1343953E513_H
#ifndef ZLIBEXCEPTION_T26829E8B8777593A4F1A5F2A65F2C07EDF80F36E_H
#define ZLIBEXCEPTION_T26829E8B8777593A4F1A5F2A65F2C07EDF80F36E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibException
struct  ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBEXCEPTION_T26829E8B8777593A4F1A5F2A65F2C07EDF80F36E_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#define NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#ifndef NULLABLE_1_T8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5_H
#define NULLABLE_1_T8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int64>
struct  Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5_H
#ifndef BADCRCEXCEPTION_T46822B11AE7535521BCADEEADDDB0784AC9AA14F_H
#define BADCRCEXCEPTION_T46822B11AE7535521BCADEEADDDB0784AC9AA14F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadCrcException
struct  BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADCRCEXCEPTION_T46822B11AE7535521BCADEEADDDB0784AC9AA14F_H
#ifndef BADPASSWORDEXCEPTION_TA4CBA542E14033E5720FD702035ADD86B9C6A6F6_H
#define BADPASSWORDEXCEPTION_TA4CBA542E14033E5720FD702035ADD86B9C6A6F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadPasswordException
struct  BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADPASSWORDEXCEPTION_TA4CBA542E14033E5720FD702035ADD86B9C6A6F6_H
#ifndef BADREADEXCEPTION_T1049D8FCC0C3763C69E3916DBFA4EA2600135F7A_H
#define BADREADEXCEPTION_T1049D8FCC0C3763C69E3916DBFA4EA2600135F7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadReadException
struct  BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADREADEXCEPTION_T1049D8FCC0C3763C69E3916DBFA4EA2600135F7A_H
#ifndef BADSTATEEXCEPTION_T37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405_H
#define BADSTATEEXCEPTION_T37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.BadStateException
struct  BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADSTATEEXCEPTION_T37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405_H
#ifndef COMPRESSIONMETHOD_TA38FC0C6538818F72A1DE9503F5593FDE6D6B6A0_H
#define COMPRESSIONMETHOD_TA38FC0C6538818F72A1DE9503F5593FDE6D6B6A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.CompressionMethod
struct  CompressionMethod_tA38FC0C6538818F72A1DE9503F5593FDE6D6B6A0 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.CompressionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_tA38FC0C6538818F72A1DE9503F5593FDE6D6B6A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONMETHOD_TA38FC0C6538818F72A1DE9503F5593FDE6D6B6A0_H
#ifndef ENCRYPTIONALGORITHM_TCEC6C56C2B40F022AC8D84E25B2BC6706C30D1D8_H
#define ENCRYPTIONALGORITHM_TCEC6C56C2B40F022AC8D84E25B2BC6706C30D1D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.EncryptionAlgorithm
struct  EncryptionAlgorithm_tCEC6C56C2B40F022AC8D84E25B2BC6706C30D1D8 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.EncryptionAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionAlgorithm_tCEC6C56C2B40F022AC8D84E25B2BC6706C30D1D8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTIONALGORITHM_TCEC6C56C2B40F022AC8D84E25B2BC6706C30D1D8_H
#ifndef EXTRACTEXISTINGFILEACTION_TBA1807BC0AFDA9B7EDCA52FE83F2977228587087_H
#define EXTRACTEXISTINGFILEACTION_TBA1807BC0AFDA9B7EDCA52FE83F2977228587087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ExtractExistingFileAction
struct  ExtractExistingFileAction_tBA1807BC0AFDA9B7EDCA52FE83F2977228587087 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ExtractExistingFileAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtractExistingFileAction_tBA1807BC0AFDA9B7EDCA52FE83F2977228587087, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTRACTEXISTINGFILEACTION_TBA1807BC0AFDA9B7EDCA52FE83F2977228587087_H
#ifndef ZIP64OPTION_T0DC36C0C2607F562C37D343AEA14E927944B938A_H
#define ZIP64OPTION_T0DC36C0C2607F562C37D343AEA14E927944B938A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.Zip64Option
struct  Zip64Option_t0DC36C0C2607F562C37D343AEA14E927944B938A 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.Zip64Option::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Zip64Option_t0DC36C0C2607F562C37D343AEA14E927944B938A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIP64OPTION_T0DC36C0C2607F562C37D343AEA14E927944B938A_H
#ifndef ZIPENTRYSOURCE_TE50CA77CBC25CC51C4321502C001493B3328C155_H
#define ZIPENTRYSOURCE_TE50CA77CBC25CC51C4321502C001493B3328C155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntrySource
struct  ZipEntrySource_tE50CA77CBC25CC51C4321502C001493B3328C155 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntrySource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipEntrySource_tE50CA77CBC25CC51C4321502C001493B3328C155, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPENTRYSOURCE_TE50CA77CBC25CC51C4321502C001493B3328C155_H
#ifndef ZIPENTRYTIMESTAMP_T4B4E3AE3188C5CA59FC6EE704E01DF6BF805D98B_H
#define ZIPENTRYTIMESTAMP_T4B4E3AE3188C5CA59FC6EE704E01DF6BF805D98B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntryTimestamp
struct  ZipEntryTimestamp_t4B4E3AE3188C5CA59FC6EE704E01DF6BF805D98B 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntryTimestamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipEntryTimestamp_t4B4E3AE3188C5CA59FC6EE704E01DF6BF805D98B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPENTRYTIMESTAMP_T4B4E3AE3188C5CA59FC6EE704E01DF6BF805D98B_H
#ifndef ZIPERRORACTION_TC1320E1BEE7C1B7013409A71E9EC78DCD4648337_H
#define ZIPERRORACTION_TC1320E1BEE7C1B7013409A71E9EC78DCD4648337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipErrorAction
struct  ZipErrorAction_tC1320E1BEE7C1B7013409A71E9EC78DCD4648337 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipErrorAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipErrorAction_tC1320E1BEE7C1B7013409A71E9EC78DCD4648337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPERRORACTION_TC1320E1BEE7C1B7013409A71E9EC78DCD4648337_H
#ifndef ZIPOPTION_T680F7ADBADDB2C3419D73325971503A6682F1369_H
#define ZIPOPTION_T680F7ADBADDB2C3419D73325971503A6682F1369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipOption
struct  ZipOption_t680F7ADBADDB2C3419D73325971503A6682F1369 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipOption_t680F7ADBADDB2C3419D73325971503A6682F1369, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPOPTION_T680F7ADBADDB2C3419D73325971503A6682F1369_H
#ifndef COMPRESSIONLEVEL_T932772149F7AFFE8600C877518B10853790F1A5D_H
#define COMPRESSIONLEVEL_T932772149F7AFFE8600C877518B10853790F1A5D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.CompressionLevel
struct  CompressionLevel_t932772149F7AFFE8600C877518B10853790F1A5D 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t932772149F7AFFE8600C877518B10853790F1A5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONLEVEL_T932772149F7AFFE8600C877518B10853790F1A5D_H
#ifndef COMPRESSIONSTRATEGY_TD99C8041B4EC6D101933025A8CE49F042FF57137_H
#define COMPRESSIONSTRATEGY_TD99C8041B4EC6D101933025A8CE49F042FF57137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.CompressionStrategy
struct  CompressionStrategy_tD99C8041B4EC6D101933025A8CE49F042FF57137 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionStrategy_tD99C8041B4EC6D101933025A8CE49F042FF57137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONSTRATEGY_TD99C8041B4EC6D101933025A8CE49F042FF57137_H
#ifndef ZIPENTRY_T2BE20F723574F9CE6BE830F299AE6E430F85F27C_H
#define ZIPENTRY_T2BE20F723574F9CE6BE830F299AE6E430F85F27C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipEntry
struct  ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____inputDecryptorStream_6;
	// System.Object Pathfinding.Ionic.Zip.ZipEntry::_outputLock
	RuntimeObject * ____outputLock_7;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * ____zipCrypto_forExtract_8;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * ____zipCrypto_forWrite_9;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_LastModified
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____LastModified_10;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Mtime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____Mtime_11;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Atime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____Atime_12;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Ctime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____Ctime_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_15;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_16;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_17;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_18;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_19;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_20;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_21;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_22;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_23;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_24;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_25;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_26;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____CommentBytes_27;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_28;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_29;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_30;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_31;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_32;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_33;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____Extra_34;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_35;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_36;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_38;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_39;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____actualEncoding_41;
	// Pathfinding.Ionic.Zip.ZipContainer Pathfinding.Ionic.Zip.ZipEntry::_container
	ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 * ____container_42;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_43;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____EntryHeader_44;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_45;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_46;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_47;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_48;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_49;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_50;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_51;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_52;
	// Pathfinding.Ionic.Zip.ZipEntrySource Pathfinding.Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_53;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_54;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_55;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____WeakEncryptionHeader_56;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_archiveStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____archiveStream_57;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_sourceStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____sourceStream_58;
	// System.Nullable`1<System.Int64> Pathfinding.Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  ____sourceStreamOriginalPosition_59;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_60;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_61;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____entryRequiresZip64_62;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____OutputUsesZip64_63;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_64;
	// Pathfinding.Ionic.Zip.ZipEntryTimestamp Pathfinding.Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_65;
	// Pathfinding.Ionic.Zip.WriteDelegate Pathfinding.Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B * ____WriteDelegate_69;
	// Pathfinding.Ionic.Zip.OpenDelegate Pathfinding.Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 * ____OpenDelegate_70;
	// Pathfinding.Ionic.Zip.CloseDelegate Pathfinding.Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 * ____CloseDelegate_71;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_72;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_73;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * ___U3CSetCompressionU3Ek__BackingField_74;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___U3CAlternateEncodingU3Ek__BackingField_75;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_76;

public:
	inline static int32_t get_offset_of__VersionMadeBy_0() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____VersionMadeBy_0)); }
	inline int16_t get__VersionMadeBy_0() const { return ____VersionMadeBy_0; }
	inline int16_t* get_address_of__VersionMadeBy_0() { return &____VersionMadeBy_0; }
	inline void set__VersionMadeBy_0(int16_t value)
	{
		____VersionMadeBy_0 = value;
	}

	inline static int32_t get_offset_of__InternalFileAttrs_1() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____InternalFileAttrs_1)); }
	inline int16_t get__InternalFileAttrs_1() const { return ____InternalFileAttrs_1; }
	inline int16_t* get_address_of__InternalFileAttrs_1() { return &____InternalFileAttrs_1; }
	inline void set__InternalFileAttrs_1(int16_t value)
	{
		____InternalFileAttrs_1 = value;
	}

	inline static int32_t get_offset_of__ExternalFileAttrs_2() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____ExternalFileAttrs_2)); }
	inline int32_t get__ExternalFileAttrs_2() const { return ____ExternalFileAttrs_2; }
	inline int32_t* get_address_of__ExternalFileAttrs_2() { return &____ExternalFileAttrs_2; }
	inline void set__ExternalFileAttrs_2(int32_t value)
	{
		____ExternalFileAttrs_2 = value;
	}

	inline static int32_t get_offset_of__filenameLength_3() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____filenameLength_3)); }
	inline int16_t get__filenameLength_3() const { return ____filenameLength_3; }
	inline int16_t* get_address_of__filenameLength_3() { return &____filenameLength_3; }
	inline void set__filenameLength_3(int16_t value)
	{
		____filenameLength_3 = value;
	}

	inline static int32_t get_offset_of__extraFieldLength_4() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____extraFieldLength_4)); }
	inline int16_t get__extraFieldLength_4() const { return ____extraFieldLength_4; }
	inline int16_t* get_address_of__extraFieldLength_4() { return &____extraFieldLength_4; }
	inline void set__extraFieldLength_4(int16_t value)
	{
		____extraFieldLength_4 = value;
	}

	inline static int32_t get_offset_of__commentLength_5() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____commentLength_5)); }
	inline int16_t get__commentLength_5() const { return ____commentLength_5; }
	inline int16_t* get_address_of__commentLength_5() { return &____commentLength_5; }
	inline void set__commentLength_5(int16_t value)
	{
		____commentLength_5 = value;
	}

	inline static int32_t get_offset_of__inputDecryptorStream_6() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____inputDecryptorStream_6)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__inputDecryptorStream_6() const { return ____inputDecryptorStream_6; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__inputDecryptorStream_6() { return &____inputDecryptorStream_6; }
	inline void set__inputDecryptorStream_6(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____inputDecryptorStream_6 = value;
		Il2CppCodeGenWriteBarrier((&____inputDecryptorStream_6), value);
	}

	inline static int32_t get_offset_of__outputLock_7() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____outputLock_7)); }
	inline RuntimeObject * get__outputLock_7() const { return ____outputLock_7; }
	inline RuntimeObject ** get_address_of__outputLock_7() { return &____outputLock_7; }
	inline void set__outputLock_7(RuntimeObject * value)
	{
		____outputLock_7 = value;
		Il2CppCodeGenWriteBarrier((&____outputLock_7), value);
	}

	inline static int32_t get_offset_of__zipCrypto_forExtract_8() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____zipCrypto_forExtract_8)); }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * get__zipCrypto_forExtract_8() const { return ____zipCrypto_forExtract_8; }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C ** get_address_of__zipCrypto_forExtract_8() { return &____zipCrypto_forExtract_8; }
	inline void set__zipCrypto_forExtract_8(ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * value)
	{
		____zipCrypto_forExtract_8 = value;
		Il2CppCodeGenWriteBarrier((&____zipCrypto_forExtract_8), value);
	}

	inline static int32_t get_offset_of__zipCrypto_forWrite_9() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____zipCrypto_forWrite_9)); }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * get__zipCrypto_forWrite_9() const { return ____zipCrypto_forWrite_9; }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C ** get_address_of__zipCrypto_forWrite_9() { return &____zipCrypto_forWrite_9; }
	inline void set__zipCrypto_forWrite_9(ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * value)
	{
		____zipCrypto_forWrite_9 = value;
		Il2CppCodeGenWriteBarrier((&____zipCrypto_forWrite_9), value);
	}

	inline static int32_t get_offset_of__LastModified_10() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LastModified_10)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__LastModified_10() const { return ____LastModified_10; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__LastModified_10() { return &____LastModified_10; }
	inline void set__LastModified_10(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____LastModified_10 = value;
	}

	inline static int32_t get_offset_of__Mtime_11() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Mtime_11)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__Mtime_11() const { return ____Mtime_11; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__Mtime_11() { return &____Mtime_11; }
	inline void set__Mtime_11(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____Mtime_11 = value;
	}

	inline static int32_t get_offset_of__Atime_12() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Atime_12)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__Atime_12() const { return ____Atime_12; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__Atime_12() { return &____Atime_12; }
	inline void set__Atime_12(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____Atime_12 = value;
	}

	inline static int32_t get_offset_of__Ctime_13() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Ctime_13)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__Ctime_13() const { return ____Ctime_13; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__Ctime_13() { return &____Ctime_13; }
	inline void set__Ctime_13(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____Ctime_13 = value;
	}

	inline static int32_t get_offset_of__ntfsTimesAreSet_14() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____ntfsTimesAreSet_14)); }
	inline bool get__ntfsTimesAreSet_14() const { return ____ntfsTimesAreSet_14; }
	inline bool* get_address_of__ntfsTimesAreSet_14() { return &____ntfsTimesAreSet_14; }
	inline void set__ntfsTimesAreSet_14(bool value)
	{
		____ntfsTimesAreSet_14 = value;
	}

	inline static int32_t get_offset_of__emitNtfsTimes_15() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____emitNtfsTimes_15)); }
	inline bool get__emitNtfsTimes_15() const { return ____emitNtfsTimes_15; }
	inline bool* get_address_of__emitNtfsTimes_15() { return &____emitNtfsTimes_15; }
	inline void set__emitNtfsTimes_15(bool value)
	{
		____emitNtfsTimes_15 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_16() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____emitUnixTimes_16)); }
	inline bool get__emitUnixTimes_16() const { return ____emitUnixTimes_16; }
	inline bool* get_address_of__emitUnixTimes_16() { return &____emitUnixTimes_16; }
	inline void set__emitUnixTimes_16(bool value)
	{
		____emitUnixTimes_16 = value;
	}

	inline static int32_t get_offset_of__TrimVolumeFromFullyQualifiedPaths_17() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____TrimVolumeFromFullyQualifiedPaths_17)); }
	inline bool get__TrimVolumeFromFullyQualifiedPaths_17() const { return ____TrimVolumeFromFullyQualifiedPaths_17; }
	inline bool* get_address_of__TrimVolumeFromFullyQualifiedPaths_17() { return &____TrimVolumeFromFullyQualifiedPaths_17; }
	inline void set__TrimVolumeFromFullyQualifiedPaths_17(bool value)
	{
		____TrimVolumeFromFullyQualifiedPaths_17 = value;
	}

	inline static int32_t get_offset_of__LocalFileName_18() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LocalFileName_18)); }
	inline String_t* get__LocalFileName_18() const { return ____LocalFileName_18; }
	inline String_t** get_address_of__LocalFileName_18() { return &____LocalFileName_18; }
	inline void set__LocalFileName_18(String_t* value)
	{
		____LocalFileName_18 = value;
		Il2CppCodeGenWriteBarrier((&____LocalFileName_18), value);
	}

	inline static int32_t get_offset_of__FileNameInArchive_19() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____FileNameInArchive_19)); }
	inline String_t* get__FileNameInArchive_19() const { return ____FileNameInArchive_19; }
	inline String_t** get_address_of__FileNameInArchive_19() { return &____FileNameInArchive_19; }
	inline void set__FileNameInArchive_19(String_t* value)
	{
		____FileNameInArchive_19 = value;
		Il2CppCodeGenWriteBarrier((&____FileNameInArchive_19), value);
	}

	inline static int32_t get_offset_of__VersionNeeded_20() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____VersionNeeded_20)); }
	inline int16_t get__VersionNeeded_20() const { return ____VersionNeeded_20; }
	inline int16_t* get_address_of__VersionNeeded_20() { return &____VersionNeeded_20; }
	inline void set__VersionNeeded_20(int16_t value)
	{
		____VersionNeeded_20 = value;
	}

	inline static int32_t get_offset_of__BitField_21() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____BitField_21)); }
	inline int16_t get__BitField_21() const { return ____BitField_21; }
	inline int16_t* get_address_of__BitField_21() { return &____BitField_21; }
	inline void set__BitField_21(int16_t value)
	{
		____BitField_21 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_22() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressionMethod_22)); }
	inline int16_t get__CompressionMethod_22() const { return ____CompressionMethod_22; }
	inline int16_t* get_address_of__CompressionMethod_22() { return &____CompressionMethod_22; }
	inline void set__CompressionMethod_22(int16_t value)
	{
		____CompressionMethod_22 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_FromZipFile_23() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressionMethod_FromZipFile_23)); }
	inline int16_t get__CompressionMethod_FromZipFile_23() const { return ____CompressionMethod_FromZipFile_23; }
	inline int16_t* get_address_of__CompressionMethod_FromZipFile_23() { return &____CompressionMethod_FromZipFile_23; }
	inline void set__CompressionMethod_FromZipFile_23(int16_t value)
	{
		____CompressionMethod_FromZipFile_23 = value;
	}

	inline static int32_t get_offset_of__CompressionLevel_24() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressionLevel_24)); }
	inline int32_t get__CompressionLevel_24() const { return ____CompressionLevel_24; }
	inline int32_t* get_address_of__CompressionLevel_24() { return &____CompressionLevel_24; }
	inline void set__CompressionLevel_24(int32_t value)
	{
		____CompressionLevel_24 = value;
	}

	inline static int32_t get_offset_of__Comment_25() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Comment_25)); }
	inline String_t* get__Comment_25() const { return ____Comment_25; }
	inline String_t** get_address_of__Comment_25() { return &____Comment_25; }
	inline void set__Comment_25(String_t* value)
	{
		____Comment_25 = value;
		Il2CppCodeGenWriteBarrier((&____Comment_25), value);
	}

	inline static int32_t get_offset_of__IsDirectory_26() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____IsDirectory_26)); }
	inline bool get__IsDirectory_26() const { return ____IsDirectory_26; }
	inline bool* get_address_of__IsDirectory_26() { return &____IsDirectory_26; }
	inline void set__IsDirectory_26(bool value)
	{
		____IsDirectory_26 = value;
	}

	inline static int32_t get_offset_of__CommentBytes_27() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CommentBytes_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__CommentBytes_27() const { return ____CommentBytes_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__CommentBytes_27() { return &____CommentBytes_27; }
	inline void set__CommentBytes_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____CommentBytes_27 = value;
		Il2CppCodeGenWriteBarrier((&____CommentBytes_27), value);
	}

	inline static int32_t get_offset_of__CompressedSize_28() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressedSize_28)); }
	inline int64_t get__CompressedSize_28() const { return ____CompressedSize_28; }
	inline int64_t* get_address_of__CompressedSize_28() { return &____CompressedSize_28; }
	inline void set__CompressedSize_28(int64_t value)
	{
		____CompressedSize_28 = value;
	}

	inline static int32_t get_offset_of__CompressedFileDataSize_29() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressedFileDataSize_29)); }
	inline int64_t get__CompressedFileDataSize_29() const { return ____CompressedFileDataSize_29; }
	inline int64_t* get_address_of__CompressedFileDataSize_29() { return &____CompressedFileDataSize_29; }
	inline void set__CompressedFileDataSize_29(int64_t value)
	{
		____CompressedFileDataSize_29 = value;
	}

	inline static int32_t get_offset_of__UncompressedSize_30() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____UncompressedSize_30)); }
	inline int64_t get__UncompressedSize_30() const { return ____UncompressedSize_30; }
	inline int64_t* get_address_of__UncompressedSize_30() { return &____UncompressedSize_30; }
	inline void set__UncompressedSize_30(int64_t value)
	{
		____UncompressedSize_30 = value;
	}

	inline static int32_t get_offset_of__TimeBlob_31() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____TimeBlob_31)); }
	inline int32_t get__TimeBlob_31() const { return ____TimeBlob_31; }
	inline int32_t* get_address_of__TimeBlob_31() { return &____TimeBlob_31; }
	inline void set__TimeBlob_31(int32_t value)
	{
		____TimeBlob_31 = value;
	}

	inline static int32_t get_offset_of__crcCalculated_32() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____crcCalculated_32)); }
	inline bool get__crcCalculated_32() const { return ____crcCalculated_32; }
	inline bool* get_address_of__crcCalculated_32() { return &____crcCalculated_32; }
	inline void set__crcCalculated_32(bool value)
	{
		____crcCalculated_32 = value;
	}

	inline static int32_t get_offset_of__Crc32_33() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Crc32_33)); }
	inline int32_t get__Crc32_33() const { return ____Crc32_33; }
	inline int32_t* get_address_of__Crc32_33() { return &____Crc32_33; }
	inline void set__Crc32_33(int32_t value)
	{
		____Crc32_33 = value;
	}

	inline static int32_t get_offset_of__Extra_34() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Extra_34)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__Extra_34() const { return ____Extra_34; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__Extra_34() { return &____Extra_34; }
	inline void set__Extra_34(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____Extra_34 = value;
		Il2CppCodeGenWriteBarrier((&____Extra_34), value);
	}

	inline static int32_t get_offset_of__metadataChanged_35() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____metadataChanged_35)); }
	inline bool get__metadataChanged_35() const { return ____metadataChanged_35; }
	inline bool* get_address_of__metadataChanged_35() { return &____metadataChanged_35; }
	inline void set__metadataChanged_35(bool value)
	{
		____metadataChanged_35 = value;
	}

	inline static int32_t get_offset_of__restreamRequiredOnSave_36() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____restreamRequiredOnSave_36)); }
	inline bool get__restreamRequiredOnSave_36() const { return ____restreamRequiredOnSave_36; }
	inline bool* get_address_of__restreamRequiredOnSave_36() { return &____restreamRequiredOnSave_36; }
	inline void set__restreamRequiredOnSave_36(bool value)
	{
		____restreamRequiredOnSave_36 = value;
	}

	inline static int32_t get_offset_of__sourceIsEncrypted_37() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____sourceIsEncrypted_37)); }
	inline bool get__sourceIsEncrypted_37() const { return ____sourceIsEncrypted_37; }
	inline bool* get_address_of__sourceIsEncrypted_37() { return &____sourceIsEncrypted_37; }
	inline void set__sourceIsEncrypted_37(bool value)
	{
		____sourceIsEncrypted_37 = value;
	}

	inline static int32_t get_offset_of__skippedDuringSave_38() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____skippedDuringSave_38)); }
	inline bool get__skippedDuringSave_38() const { return ____skippedDuringSave_38; }
	inline bool* get_address_of__skippedDuringSave_38() { return &____skippedDuringSave_38; }
	inline void set__skippedDuringSave_38(bool value)
	{
		____skippedDuringSave_38 = value;
	}

	inline static int32_t get_offset_of__diskNumber_39() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____diskNumber_39)); }
	inline uint32_t get__diskNumber_39() const { return ____diskNumber_39; }
	inline uint32_t* get_address_of__diskNumber_39() { return &____diskNumber_39; }
	inline void set__diskNumber_39(uint32_t value)
	{
		____diskNumber_39 = value;
	}

	inline static int32_t get_offset_of__actualEncoding_41() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____actualEncoding_41)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__actualEncoding_41() const { return ____actualEncoding_41; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__actualEncoding_41() { return &____actualEncoding_41; }
	inline void set__actualEncoding_41(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____actualEncoding_41 = value;
		Il2CppCodeGenWriteBarrier((&____actualEncoding_41), value);
	}

	inline static int32_t get_offset_of__container_42() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____container_42)); }
	inline ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 * get__container_42() const { return ____container_42; }
	inline ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 ** get_address_of__container_42() { return &____container_42; }
	inline void set__container_42(ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 * value)
	{
		____container_42 = value;
		Il2CppCodeGenWriteBarrier((&____container_42), value);
	}

	inline static int32_t get_offset_of___FileDataPosition_43() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, _____FileDataPosition_43)); }
	inline int64_t get___FileDataPosition_43() const { return _____FileDataPosition_43; }
	inline int64_t* get_address_of___FileDataPosition_43() { return &_____FileDataPosition_43; }
	inline void set___FileDataPosition_43(int64_t value)
	{
		_____FileDataPosition_43 = value;
	}

	inline static int32_t get_offset_of__EntryHeader_44() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____EntryHeader_44)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__EntryHeader_44() const { return ____EntryHeader_44; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__EntryHeader_44() { return &____EntryHeader_44; }
	inline void set__EntryHeader_44(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____EntryHeader_44 = value;
		Il2CppCodeGenWriteBarrier((&____EntryHeader_44), value);
	}

	inline static int32_t get_offset_of__RelativeOffsetOfLocalHeader_45() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____RelativeOffsetOfLocalHeader_45)); }
	inline int64_t get__RelativeOffsetOfLocalHeader_45() const { return ____RelativeOffsetOfLocalHeader_45; }
	inline int64_t* get_address_of__RelativeOffsetOfLocalHeader_45() { return &____RelativeOffsetOfLocalHeader_45; }
	inline void set__RelativeOffsetOfLocalHeader_45(int64_t value)
	{
		____RelativeOffsetOfLocalHeader_45 = value;
	}

	inline static int32_t get_offset_of__future_ROLH_46() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____future_ROLH_46)); }
	inline int64_t get__future_ROLH_46() const { return ____future_ROLH_46; }
	inline int64_t* get_address_of__future_ROLH_46() { return &____future_ROLH_46; }
	inline void set__future_ROLH_46(int64_t value)
	{
		____future_ROLH_46 = value;
	}

	inline static int32_t get_offset_of__TotalEntrySize_47() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____TotalEntrySize_47)); }
	inline int64_t get__TotalEntrySize_47() const { return ____TotalEntrySize_47; }
	inline int64_t* get_address_of__TotalEntrySize_47() { return &____TotalEntrySize_47; }
	inline void set__TotalEntrySize_47(int64_t value)
	{
		____TotalEntrySize_47 = value;
	}

	inline static int32_t get_offset_of__LengthOfHeader_48() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LengthOfHeader_48)); }
	inline int32_t get__LengthOfHeader_48() const { return ____LengthOfHeader_48; }
	inline int32_t* get_address_of__LengthOfHeader_48() { return &____LengthOfHeader_48; }
	inline void set__LengthOfHeader_48(int32_t value)
	{
		____LengthOfHeader_48 = value;
	}

	inline static int32_t get_offset_of__LengthOfTrailer_49() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LengthOfTrailer_49)); }
	inline int32_t get__LengthOfTrailer_49() const { return ____LengthOfTrailer_49; }
	inline int32_t* get_address_of__LengthOfTrailer_49() { return &____LengthOfTrailer_49; }
	inline void set__LengthOfTrailer_49(int32_t value)
	{
		____LengthOfTrailer_49 = value;
	}

	inline static int32_t get_offset_of__InputUsesZip64_50() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____InputUsesZip64_50)); }
	inline bool get__InputUsesZip64_50() const { return ____InputUsesZip64_50; }
	inline bool* get_address_of__InputUsesZip64_50() { return &____InputUsesZip64_50; }
	inline void set__InputUsesZip64_50(bool value)
	{
		____InputUsesZip64_50 = value;
	}

	inline static int32_t get_offset_of__UnsupportedAlgorithmId_51() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____UnsupportedAlgorithmId_51)); }
	inline uint32_t get__UnsupportedAlgorithmId_51() const { return ____UnsupportedAlgorithmId_51; }
	inline uint32_t* get_address_of__UnsupportedAlgorithmId_51() { return &____UnsupportedAlgorithmId_51; }
	inline void set__UnsupportedAlgorithmId_51(uint32_t value)
	{
		____UnsupportedAlgorithmId_51 = value;
	}

	inline static int32_t get_offset_of__Password_52() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Password_52)); }
	inline String_t* get__Password_52() const { return ____Password_52; }
	inline String_t** get_address_of__Password_52() { return &____Password_52; }
	inline void set__Password_52(String_t* value)
	{
		____Password_52 = value;
		Il2CppCodeGenWriteBarrier((&____Password_52), value);
	}

	inline static int32_t get_offset_of__Source_53() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Source_53)); }
	inline int32_t get__Source_53() const { return ____Source_53; }
	inline int32_t* get_address_of__Source_53() { return &____Source_53; }
	inline void set__Source_53(int32_t value)
	{
		____Source_53 = value;
	}

	inline static int32_t get_offset_of__Encryption_54() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Encryption_54)); }
	inline int32_t get__Encryption_54() const { return ____Encryption_54; }
	inline int32_t* get_address_of__Encryption_54() { return &____Encryption_54; }
	inline void set__Encryption_54(int32_t value)
	{
		____Encryption_54 = value;
	}

	inline static int32_t get_offset_of__Encryption_FromZipFile_55() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Encryption_FromZipFile_55)); }
	inline int32_t get__Encryption_FromZipFile_55() const { return ____Encryption_FromZipFile_55; }
	inline int32_t* get_address_of__Encryption_FromZipFile_55() { return &____Encryption_FromZipFile_55; }
	inline void set__Encryption_FromZipFile_55(int32_t value)
	{
		____Encryption_FromZipFile_55 = value;
	}

	inline static int32_t get_offset_of__WeakEncryptionHeader_56() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____WeakEncryptionHeader_56)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__WeakEncryptionHeader_56() const { return ____WeakEncryptionHeader_56; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__WeakEncryptionHeader_56() { return &____WeakEncryptionHeader_56; }
	inline void set__WeakEncryptionHeader_56(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____WeakEncryptionHeader_56 = value;
		Il2CppCodeGenWriteBarrier((&____WeakEncryptionHeader_56), value);
	}

	inline static int32_t get_offset_of__archiveStream_57() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____archiveStream_57)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__archiveStream_57() const { return ____archiveStream_57; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__archiveStream_57() { return &____archiveStream_57; }
	inline void set__archiveStream_57(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____archiveStream_57 = value;
		Il2CppCodeGenWriteBarrier((&____archiveStream_57), value);
	}

	inline static int32_t get_offset_of__sourceStream_58() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____sourceStream_58)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__sourceStream_58() const { return ____sourceStream_58; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__sourceStream_58() { return &____sourceStream_58; }
	inline void set__sourceStream_58(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____sourceStream_58 = value;
		Il2CppCodeGenWriteBarrier((&____sourceStream_58), value);
	}

	inline static int32_t get_offset_of__sourceStreamOriginalPosition_59() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____sourceStreamOriginalPosition_59)); }
	inline Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  get__sourceStreamOriginalPosition_59() const { return ____sourceStreamOriginalPosition_59; }
	inline Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5 * get_address_of__sourceStreamOriginalPosition_59() { return &____sourceStreamOriginalPosition_59; }
	inline void set__sourceStreamOriginalPosition_59(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  value)
	{
		____sourceStreamOriginalPosition_59 = value;
	}

	inline static int32_t get_offset_of__ioOperationCanceled_60() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____ioOperationCanceled_60)); }
	inline bool get__ioOperationCanceled_60() const { return ____ioOperationCanceled_60; }
	inline bool* get_address_of__ioOperationCanceled_60() { return &____ioOperationCanceled_60; }
	inline void set__ioOperationCanceled_60(bool value)
	{
		____ioOperationCanceled_60 = value;
	}

	inline static int32_t get_offset_of__presumeZip64_61() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____presumeZip64_61)); }
	inline bool get__presumeZip64_61() const { return ____presumeZip64_61; }
	inline bool* get_address_of__presumeZip64_61() { return &____presumeZip64_61; }
	inline void set__presumeZip64_61(bool value)
	{
		____presumeZip64_61 = value;
	}

	inline static int32_t get_offset_of__entryRequiresZip64_62() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____entryRequiresZip64_62)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__entryRequiresZip64_62() const { return ____entryRequiresZip64_62; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__entryRequiresZip64_62() { return &____entryRequiresZip64_62; }
	inline void set__entryRequiresZip64_62(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____entryRequiresZip64_62 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_63() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____OutputUsesZip64_63)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__OutputUsesZip64_63() const { return ____OutputUsesZip64_63; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__OutputUsesZip64_63() { return &____OutputUsesZip64_63; }
	inline void set__OutputUsesZip64_63(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____OutputUsesZip64_63 = value;
	}

	inline static int32_t get_offset_of__IsText_64() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____IsText_64)); }
	inline bool get__IsText_64() const { return ____IsText_64; }
	inline bool* get_address_of__IsText_64() { return &____IsText_64; }
	inline void set__IsText_64(bool value)
	{
		____IsText_64 = value;
	}

	inline static int32_t get_offset_of__timestamp_65() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____timestamp_65)); }
	inline int32_t get__timestamp_65() const { return ____timestamp_65; }
	inline int32_t* get_address_of__timestamp_65() { return &____timestamp_65; }
	inline void set__timestamp_65(int32_t value)
	{
		____timestamp_65 = value;
	}

	inline static int32_t get_offset_of__WriteDelegate_69() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____WriteDelegate_69)); }
	inline WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B * get__WriteDelegate_69() const { return ____WriteDelegate_69; }
	inline WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B ** get_address_of__WriteDelegate_69() { return &____WriteDelegate_69; }
	inline void set__WriteDelegate_69(WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B * value)
	{
		____WriteDelegate_69 = value;
		Il2CppCodeGenWriteBarrier((&____WriteDelegate_69), value);
	}

	inline static int32_t get_offset_of__OpenDelegate_70() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____OpenDelegate_70)); }
	inline OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 * get__OpenDelegate_70() const { return ____OpenDelegate_70; }
	inline OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 ** get_address_of__OpenDelegate_70() { return &____OpenDelegate_70; }
	inline void set__OpenDelegate_70(OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 * value)
	{
		____OpenDelegate_70 = value;
		Il2CppCodeGenWriteBarrier((&____OpenDelegate_70), value);
	}

	inline static int32_t get_offset_of__CloseDelegate_71() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CloseDelegate_71)); }
	inline CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 * get__CloseDelegate_71() const { return ____CloseDelegate_71; }
	inline CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 ** get_address_of__CloseDelegate_71() { return &____CloseDelegate_71; }
	inline void set__CloseDelegate_71(CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 * value)
	{
		____CloseDelegate_71 = value;
		Il2CppCodeGenWriteBarrier((&____CloseDelegate_71), value);
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CExtractExistingFileU3Ek__BackingField_72)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_72() const { return ___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_72() { return &___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_72(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CZipErrorActionU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CZipErrorActionU3Ek__BackingField_73)); }
	inline int32_t get_U3CZipErrorActionU3Ek__BackingField_73() const { return ___U3CZipErrorActionU3Ek__BackingField_73; }
	inline int32_t* get_address_of_U3CZipErrorActionU3Ek__BackingField_73() { return &___U3CZipErrorActionU3Ek__BackingField_73; }
	inline void set_U3CZipErrorActionU3Ek__BackingField_73(int32_t value)
	{
		___U3CZipErrorActionU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CSetCompressionU3Ek__BackingField_74)); }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * get_U3CSetCompressionU3Ek__BackingField_74() const { return ___U3CSetCompressionU3Ek__BackingField_74; }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB ** get_address_of_U3CSetCompressionU3Ek__BackingField_74() { return &___U3CSetCompressionU3Ek__BackingField_74; }
	inline void set_U3CSetCompressionU3Ek__BackingField_74(SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * value)
	{
		___U3CSetCompressionU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSetCompressionU3Ek__BackingField_74), value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CAlternateEncodingU3Ek__BackingField_75)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_U3CAlternateEncodingU3Ek__BackingField_75() const { return ___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_U3CAlternateEncodingU3Ek__BackingField_75() { return &___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline void set_U3CAlternateEncodingU3Ek__BackingField_75(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___U3CAlternateEncodingU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAlternateEncodingU3Ek__BackingField_75), value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CAlternateEncodingUsageU3Ek__BackingField_76)); }
	inline int32_t get_U3CAlternateEncodingUsageU3Ek__BackingField_76() const { return ___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline int32_t* get_address_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return &___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline void set_U3CAlternateEncodingUsageU3Ek__BackingField_76(int32_t value)
	{
		___U3CAlternateEncodingUsageU3Ek__BackingField_76 = value;
	}
};

struct ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::ibm437
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___ibm437_40;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____unixEpoch_66;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____win32Epoch_67;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_zeroHour
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____zeroHour_68;

public:
	inline static int32_t get_offset_of_ibm437_40() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ___ibm437_40)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_ibm437_40() const { return ___ibm437_40; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_ibm437_40() { return &___ibm437_40; }
	inline void set_ibm437_40(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___ibm437_40 = value;
		Il2CppCodeGenWriteBarrier((&___ibm437_40), value);
	}

	inline static int32_t get_offset_of__unixEpoch_66() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ____unixEpoch_66)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__unixEpoch_66() const { return ____unixEpoch_66; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__unixEpoch_66() { return &____unixEpoch_66; }
	inline void set__unixEpoch_66(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____unixEpoch_66 = value;
	}

	inline static int32_t get_offset_of__win32Epoch_67() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ____win32Epoch_67)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__win32Epoch_67() const { return ____win32Epoch_67; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__win32Epoch_67() { return &____win32Epoch_67; }
	inline void set__win32Epoch_67(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____win32Epoch_67 = value;
	}

	inline static int32_t get_offset_of__zeroHour_68() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ____zeroHour_68)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__zeroHour_68() const { return ____zeroHour_68; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__zeroHour_68() { return &____zeroHour_68; }
	inline void set__zeroHour_68(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____zeroHour_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPENTRY_T2BE20F723574F9CE6BE830F299AE6E430F85F27C_H
#ifndef ZIPFILE_TEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_H
#define ZIPFILE_TEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zip.ZipFile
struct  ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_lengthOfReadStream
	int64_t ____lengthOfReadStream_0;
	// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::_StatusMessageTextWriter
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ____StatusMessageTextWriter_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_CaseSensitiveRetrieval
	bool ____CaseSensitiveRetrieval_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_readstream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____readstream_3;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_writestream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____writestream_4;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionMadeBy
	uint16_t ____versionMadeBy_5;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionNeededToExtract
	uint16_t ____versionNeededToExtract_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_diskNumberWithCd
	uint32_t ____diskNumberWithCd_7;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxOutputSegmentSize
	int32_t ____maxOutputSegmentSize_8;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_numberOfSegmentsForMostRecentSave
	uint32_t ____numberOfSegmentsForMostRecentSave_9;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::_zipErrorAction
	int32_t ____zipErrorAction_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_disposed
	bool ____disposed_11;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_entries
	Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA * ____entries_12;
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_zipEntriesAsList
	List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E * ____zipEntriesAsList_13;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_name
	String_t* ____name_14;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_readName
	String_t* ____readName_15;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Comment
	String_t* ____Comment_16;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Password
	String_t* ____Password_17;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitNtfsTimes
	bool ____emitNtfsTimes_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitUnixTimes
	bool ____emitUnixTimes_19;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::_Strategy
	int32_t ____Strategy_20;
	// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::_compressionMethod
	int32_t ____compressionMethod_21;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_fileAlreadyExists
	bool ____fileAlreadyExists_22;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_temporaryFileName
	String_t* ____temporaryFileName_23;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_contentsChanged
	bool ____contentsChanged_24;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_hasBeenSaved
	bool ____hasBeenSaved_25;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_TempFileFolder
	String_t* ____TempFileFolder_26;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_ReadStreamIsOurs
	bool ____ReadStreamIsOurs_27;
	// System.Object Pathfinding.Ionic.Zip.ZipFile::LOCK
	RuntimeObject * ___LOCK_28;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_saveOperationCanceled
	bool ____saveOperationCanceled_29;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_extractOperationCanceled
	bool ____extractOperationCanceled_30;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_addOperationCanceled
	bool ____addOperationCanceled_31;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::_Encryption
	int32_t ____Encryption_32;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_JustSaved
	bool ____JustSaved_33;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_locEndOfCDS
	int64_t ____locEndOfCDS_34;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory
	uint32_t ____OffsetOfCentralDirectory_35;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory64
	int64_t ____OffsetOfCentralDirectory64_36;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipFile::_OutputUsesZip64
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____OutputUsesZip64_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_inExtractAll
	bool ____inExtractAll_38;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_alternateEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____alternateEncoding_40;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_41;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_BufferSize
	int32_t ____BufferSize_42;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipFile::ParallelDeflater
	ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 * ___ParallelDeflater_43;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_44;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxBufferPairs
	int32_t ____maxBufferPairs_45;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::_zip64
	int32_t ____zip64_46;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_SavingSfx
	bool ____SavingSfx_47;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::SaveProgress
	EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C * ___SaveProgress_49;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ReadProgress
	EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 * ___ReadProgress_50;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ExtractProgress
	EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB * ___ExtractProgress_51;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::AddProgress
	EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 * ___AddProgress_52;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs> Pathfinding.Ionic.Zip.ZipFile::ZipError
	EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E * ___ZipError_53;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FullScan>k__BackingField
	bool ___U3CFullScanU3Ek__BackingField_54;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<SortEntriesBeforeSaving>k__BackingField
	bool ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<AddDirectoryWillTraverseReparsePoints>k__BackingField
	bool ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_57;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FlattenFoldersOnExtract>k__BackingField
	bool ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_59;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_60;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::<SetCompression>k__BackingField
	SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * ___U3CSetCompressionU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of__lengthOfReadStream_0() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____lengthOfReadStream_0)); }
	inline int64_t get__lengthOfReadStream_0() const { return ____lengthOfReadStream_0; }
	inline int64_t* get_address_of__lengthOfReadStream_0() { return &____lengthOfReadStream_0; }
	inline void set__lengthOfReadStream_0(int64_t value)
	{
		____lengthOfReadStream_0 = value;
	}

	inline static int32_t get_offset_of__StatusMessageTextWriter_1() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____StatusMessageTextWriter_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get__StatusMessageTextWriter_1() const { return ____StatusMessageTextWriter_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of__StatusMessageTextWriter_1() { return &____StatusMessageTextWriter_1; }
	inline void set__StatusMessageTextWriter_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		____StatusMessageTextWriter_1 = value;
		Il2CppCodeGenWriteBarrier((&____StatusMessageTextWriter_1), value);
	}

	inline static int32_t get_offset_of__CaseSensitiveRetrieval_2() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____CaseSensitiveRetrieval_2)); }
	inline bool get__CaseSensitiveRetrieval_2() const { return ____CaseSensitiveRetrieval_2; }
	inline bool* get_address_of__CaseSensitiveRetrieval_2() { return &____CaseSensitiveRetrieval_2; }
	inline void set__CaseSensitiveRetrieval_2(bool value)
	{
		____CaseSensitiveRetrieval_2 = value;
	}

	inline static int32_t get_offset_of__readstream_3() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____readstream_3)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__readstream_3() const { return ____readstream_3; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__readstream_3() { return &____readstream_3; }
	inline void set__readstream_3(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____readstream_3 = value;
		Il2CppCodeGenWriteBarrier((&____readstream_3), value);
	}

	inline static int32_t get_offset_of__writestream_4() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____writestream_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__writestream_4() const { return ____writestream_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__writestream_4() { return &____writestream_4; }
	inline void set__writestream_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____writestream_4 = value;
		Il2CppCodeGenWriteBarrier((&____writestream_4), value);
	}

	inline static int32_t get_offset_of__versionMadeBy_5() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____versionMadeBy_5)); }
	inline uint16_t get__versionMadeBy_5() const { return ____versionMadeBy_5; }
	inline uint16_t* get_address_of__versionMadeBy_5() { return &____versionMadeBy_5; }
	inline void set__versionMadeBy_5(uint16_t value)
	{
		____versionMadeBy_5 = value;
	}

	inline static int32_t get_offset_of__versionNeededToExtract_6() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____versionNeededToExtract_6)); }
	inline uint16_t get__versionNeededToExtract_6() const { return ____versionNeededToExtract_6; }
	inline uint16_t* get_address_of__versionNeededToExtract_6() { return &____versionNeededToExtract_6; }
	inline void set__versionNeededToExtract_6(uint16_t value)
	{
		____versionNeededToExtract_6 = value;
	}

	inline static int32_t get_offset_of__diskNumberWithCd_7() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____diskNumberWithCd_7)); }
	inline uint32_t get__diskNumberWithCd_7() const { return ____diskNumberWithCd_7; }
	inline uint32_t* get_address_of__diskNumberWithCd_7() { return &____diskNumberWithCd_7; }
	inline void set__diskNumberWithCd_7(uint32_t value)
	{
		____diskNumberWithCd_7 = value;
	}

	inline static int32_t get_offset_of__maxOutputSegmentSize_8() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____maxOutputSegmentSize_8)); }
	inline int32_t get__maxOutputSegmentSize_8() const { return ____maxOutputSegmentSize_8; }
	inline int32_t* get_address_of__maxOutputSegmentSize_8() { return &____maxOutputSegmentSize_8; }
	inline void set__maxOutputSegmentSize_8(int32_t value)
	{
		____maxOutputSegmentSize_8 = value;
	}

	inline static int32_t get_offset_of__numberOfSegmentsForMostRecentSave_9() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____numberOfSegmentsForMostRecentSave_9)); }
	inline uint32_t get__numberOfSegmentsForMostRecentSave_9() const { return ____numberOfSegmentsForMostRecentSave_9; }
	inline uint32_t* get_address_of__numberOfSegmentsForMostRecentSave_9() { return &____numberOfSegmentsForMostRecentSave_9; }
	inline void set__numberOfSegmentsForMostRecentSave_9(uint32_t value)
	{
		____numberOfSegmentsForMostRecentSave_9 = value;
	}

	inline static int32_t get_offset_of__zipErrorAction_10() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____zipErrorAction_10)); }
	inline int32_t get__zipErrorAction_10() const { return ____zipErrorAction_10; }
	inline int32_t* get_address_of__zipErrorAction_10() { return &____zipErrorAction_10; }
	inline void set__zipErrorAction_10(int32_t value)
	{
		____zipErrorAction_10 = value;
	}

	inline static int32_t get_offset_of__disposed_11() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____disposed_11)); }
	inline bool get__disposed_11() const { return ____disposed_11; }
	inline bool* get_address_of__disposed_11() { return &____disposed_11; }
	inline void set__disposed_11(bool value)
	{
		____disposed_11 = value;
	}

	inline static int32_t get_offset_of__entries_12() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____entries_12)); }
	inline Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA * get__entries_12() const { return ____entries_12; }
	inline Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA ** get_address_of__entries_12() { return &____entries_12; }
	inline void set__entries_12(Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA * value)
	{
		____entries_12 = value;
		Il2CppCodeGenWriteBarrier((&____entries_12), value);
	}

	inline static int32_t get_offset_of__zipEntriesAsList_13() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____zipEntriesAsList_13)); }
	inline List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E * get__zipEntriesAsList_13() const { return ____zipEntriesAsList_13; }
	inline List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E ** get_address_of__zipEntriesAsList_13() { return &____zipEntriesAsList_13; }
	inline void set__zipEntriesAsList_13(List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E * value)
	{
		____zipEntriesAsList_13 = value;
		Il2CppCodeGenWriteBarrier((&____zipEntriesAsList_13), value);
	}

	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier((&____name_14), value);
	}

	inline static int32_t get_offset_of__readName_15() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____readName_15)); }
	inline String_t* get__readName_15() const { return ____readName_15; }
	inline String_t** get_address_of__readName_15() { return &____readName_15; }
	inline void set__readName_15(String_t* value)
	{
		____readName_15 = value;
		Il2CppCodeGenWriteBarrier((&____readName_15), value);
	}

	inline static int32_t get_offset_of__Comment_16() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Comment_16)); }
	inline String_t* get__Comment_16() const { return ____Comment_16; }
	inline String_t** get_address_of__Comment_16() { return &____Comment_16; }
	inline void set__Comment_16(String_t* value)
	{
		____Comment_16 = value;
		Il2CppCodeGenWriteBarrier((&____Comment_16), value);
	}

	inline static int32_t get_offset_of__Password_17() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Password_17)); }
	inline String_t* get__Password_17() const { return ____Password_17; }
	inline String_t** get_address_of__Password_17() { return &____Password_17; }
	inline void set__Password_17(String_t* value)
	{
		____Password_17 = value;
		Il2CppCodeGenWriteBarrier((&____Password_17), value);
	}

	inline static int32_t get_offset_of__emitNtfsTimes_18() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____emitNtfsTimes_18)); }
	inline bool get__emitNtfsTimes_18() const { return ____emitNtfsTimes_18; }
	inline bool* get_address_of__emitNtfsTimes_18() { return &____emitNtfsTimes_18; }
	inline void set__emitNtfsTimes_18(bool value)
	{
		____emitNtfsTimes_18 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_19() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____emitUnixTimes_19)); }
	inline bool get__emitUnixTimes_19() const { return ____emitUnixTimes_19; }
	inline bool* get_address_of__emitUnixTimes_19() { return &____emitUnixTimes_19; }
	inline void set__emitUnixTimes_19(bool value)
	{
		____emitUnixTimes_19 = value;
	}

	inline static int32_t get_offset_of__Strategy_20() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Strategy_20)); }
	inline int32_t get__Strategy_20() const { return ____Strategy_20; }
	inline int32_t* get_address_of__Strategy_20() { return &____Strategy_20; }
	inline void set__Strategy_20(int32_t value)
	{
		____Strategy_20 = value;
	}

	inline static int32_t get_offset_of__compressionMethod_21() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____compressionMethod_21)); }
	inline int32_t get__compressionMethod_21() const { return ____compressionMethod_21; }
	inline int32_t* get_address_of__compressionMethod_21() { return &____compressionMethod_21; }
	inline void set__compressionMethod_21(int32_t value)
	{
		____compressionMethod_21 = value;
	}

	inline static int32_t get_offset_of__fileAlreadyExists_22() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____fileAlreadyExists_22)); }
	inline bool get__fileAlreadyExists_22() const { return ____fileAlreadyExists_22; }
	inline bool* get_address_of__fileAlreadyExists_22() { return &____fileAlreadyExists_22; }
	inline void set__fileAlreadyExists_22(bool value)
	{
		____fileAlreadyExists_22 = value;
	}

	inline static int32_t get_offset_of__temporaryFileName_23() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____temporaryFileName_23)); }
	inline String_t* get__temporaryFileName_23() const { return ____temporaryFileName_23; }
	inline String_t** get_address_of__temporaryFileName_23() { return &____temporaryFileName_23; }
	inline void set__temporaryFileName_23(String_t* value)
	{
		____temporaryFileName_23 = value;
		Il2CppCodeGenWriteBarrier((&____temporaryFileName_23), value);
	}

	inline static int32_t get_offset_of__contentsChanged_24() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____contentsChanged_24)); }
	inline bool get__contentsChanged_24() const { return ____contentsChanged_24; }
	inline bool* get_address_of__contentsChanged_24() { return &____contentsChanged_24; }
	inline void set__contentsChanged_24(bool value)
	{
		____contentsChanged_24 = value;
	}

	inline static int32_t get_offset_of__hasBeenSaved_25() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____hasBeenSaved_25)); }
	inline bool get__hasBeenSaved_25() const { return ____hasBeenSaved_25; }
	inline bool* get_address_of__hasBeenSaved_25() { return &____hasBeenSaved_25; }
	inline void set__hasBeenSaved_25(bool value)
	{
		____hasBeenSaved_25 = value;
	}

	inline static int32_t get_offset_of__TempFileFolder_26() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____TempFileFolder_26)); }
	inline String_t* get__TempFileFolder_26() const { return ____TempFileFolder_26; }
	inline String_t** get_address_of__TempFileFolder_26() { return &____TempFileFolder_26; }
	inline void set__TempFileFolder_26(String_t* value)
	{
		____TempFileFolder_26 = value;
		Il2CppCodeGenWriteBarrier((&____TempFileFolder_26), value);
	}

	inline static int32_t get_offset_of__ReadStreamIsOurs_27() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____ReadStreamIsOurs_27)); }
	inline bool get__ReadStreamIsOurs_27() const { return ____ReadStreamIsOurs_27; }
	inline bool* get_address_of__ReadStreamIsOurs_27() { return &____ReadStreamIsOurs_27; }
	inline void set__ReadStreamIsOurs_27(bool value)
	{
		____ReadStreamIsOurs_27 = value;
	}

	inline static int32_t get_offset_of_LOCK_28() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___LOCK_28)); }
	inline RuntimeObject * get_LOCK_28() const { return ___LOCK_28; }
	inline RuntimeObject ** get_address_of_LOCK_28() { return &___LOCK_28; }
	inline void set_LOCK_28(RuntimeObject * value)
	{
		___LOCK_28 = value;
		Il2CppCodeGenWriteBarrier((&___LOCK_28), value);
	}

	inline static int32_t get_offset_of__saveOperationCanceled_29() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____saveOperationCanceled_29)); }
	inline bool get__saveOperationCanceled_29() const { return ____saveOperationCanceled_29; }
	inline bool* get_address_of__saveOperationCanceled_29() { return &____saveOperationCanceled_29; }
	inline void set__saveOperationCanceled_29(bool value)
	{
		____saveOperationCanceled_29 = value;
	}

	inline static int32_t get_offset_of__extractOperationCanceled_30() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____extractOperationCanceled_30)); }
	inline bool get__extractOperationCanceled_30() const { return ____extractOperationCanceled_30; }
	inline bool* get_address_of__extractOperationCanceled_30() { return &____extractOperationCanceled_30; }
	inline void set__extractOperationCanceled_30(bool value)
	{
		____extractOperationCanceled_30 = value;
	}

	inline static int32_t get_offset_of__addOperationCanceled_31() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____addOperationCanceled_31)); }
	inline bool get__addOperationCanceled_31() const { return ____addOperationCanceled_31; }
	inline bool* get_address_of__addOperationCanceled_31() { return &____addOperationCanceled_31; }
	inline void set__addOperationCanceled_31(bool value)
	{
		____addOperationCanceled_31 = value;
	}

	inline static int32_t get_offset_of__Encryption_32() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Encryption_32)); }
	inline int32_t get__Encryption_32() const { return ____Encryption_32; }
	inline int32_t* get_address_of__Encryption_32() { return &____Encryption_32; }
	inline void set__Encryption_32(int32_t value)
	{
		____Encryption_32 = value;
	}

	inline static int32_t get_offset_of__JustSaved_33() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____JustSaved_33)); }
	inline bool get__JustSaved_33() const { return ____JustSaved_33; }
	inline bool* get_address_of__JustSaved_33() { return &____JustSaved_33; }
	inline void set__JustSaved_33(bool value)
	{
		____JustSaved_33 = value;
	}

	inline static int32_t get_offset_of__locEndOfCDS_34() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____locEndOfCDS_34)); }
	inline int64_t get__locEndOfCDS_34() const { return ____locEndOfCDS_34; }
	inline int64_t* get_address_of__locEndOfCDS_34() { return &____locEndOfCDS_34; }
	inline void set__locEndOfCDS_34(int64_t value)
	{
		____locEndOfCDS_34 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory_35() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____OffsetOfCentralDirectory_35)); }
	inline uint32_t get__OffsetOfCentralDirectory_35() const { return ____OffsetOfCentralDirectory_35; }
	inline uint32_t* get_address_of__OffsetOfCentralDirectory_35() { return &____OffsetOfCentralDirectory_35; }
	inline void set__OffsetOfCentralDirectory_35(uint32_t value)
	{
		____OffsetOfCentralDirectory_35 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory64_36() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____OffsetOfCentralDirectory64_36)); }
	inline int64_t get__OffsetOfCentralDirectory64_36() const { return ____OffsetOfCentralDirectory64_36; }
	inline int64_t* get_address_of__OffsetOfCentralDirectory64_36() { return &____OffsetOfCentralDirectory64_36; }
	inline void set__OffsetOfCentralDirectory64_36(int64_t value)
	{
		____OffsetOfCentralDirectory64_36 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_37() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____OutputUsesZip64_37)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__OutputUsesZip64_37() const { return ____OutputUsesZip64_37; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__OutputUsesZip64_37() { return &____OutputUsesZip64_37; }
	inline void set__OutputUsesZip64_37(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____OutputUsesZip64_37 = value;
	}

	inline static int32_t get_offset_of__inExtractAll_38() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____inExtractAll_38)); }
	inline bool get__inExtractAll_38() const { return ____inExtractAll_38; }
	inline bool* get_address_of__inExtractAll_38() { return &____inExtractAll_38; }
	inline void set__inExtractAll_38(bool value)
	{
		____inExtractAll_38 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_40() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____alternateEncoding_40)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__alternateEncoding_40() const { return ____alternateEncoding_40; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__alternateEncoding_40() { return &____alternateEncoding_40; }
	inline void set__alternateEncoding_40(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____alternateEncoding_40 = value;
		Il2CppCodeGenWriteBarrier((&____alternateEncoding_40), value);
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_41() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____alternateEncodingUsage_41)); }
	inline int32_t get__alternateEncodingUsage_41() const { return ____alternateEncodingUsage_41; }
	inline int32_t* get_address_of__alternateEncodingUsage_41() { return &____alternateEncodingUsage_41; }
	inline void set__alternateEncodingUsage_41(int32_t value)
	{
		____alternateEncodingUsage_41 = value;
	}

	inline static int32_t get_offset_of__BufferSize_42() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____BufferSize_42)); }
	inline int32_t get__BufferSize_42() const { return ____BufferSize_42; }
	inline int32_t* get_address_of__BufferSize_42() { return &____BufferSize_42; }
	inline void set__BufferSize_42(int32_t value)
	{
		____BufferSize_42 = value;
	}

	inline static int32_t get_offset_of_ParallelDeflater_43() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ParallelDeflater_43)); }
	inline ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 * get_ParallelDeflater_43() const { return ___ParallelDeflater_43; }
	inline ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 ** get_address_of_ParallelDeflater_43() { return &___ParallelDeflater_43; }
	inline void set_ParallelDeflater_43(ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 * value)
	{
		___ParallelDeflater_43 = value;
		Il2CppCodeGenWriteBarrier((&___ParallelDeflater_43), value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_44() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____ParallelDeflateThreshold_44)); }
	inline int64_t get__ParallelDeflateThreshold_44() const { return ____ParallelDeflateThreshold_44; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_44() { return &____ParallelDeflateThreshold_44; }
	inline void set__ParallelDeflateThreshold_44(int64_t value)
	{
		____ParallelDeflateThreshold_44 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_45() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____maxBufferPairs_45)); }
	inline int32_t get__maxBufferPairs_45() const { return ____maxBufferPairs_45; }
	inline int32_t* get_address_of__maxBufferPairs_45() { return &____maxBufferPairs_45; }
	inline void set__maxBufferPairs_45(int32_t value)
	{
		____maxBufferPairs_45 = value;
	}

	inline static int32_t get_offset_of__zip64_46() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____zip64_46)); }
	inline int32_t get__zip64_46() const { return ____zip64_46; }
	inline int32_t* get_address_of__zip64_46() { return &____zip64_46; }
	inline void set__zip64_46(int32_t value)
	{
		____zip64_46 = value;
	}

	inline static int32_t get_offset_of__SavingSfx_47() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____SavingSfx_47)); }
	inline bool get__SavingSfx_47() const { return ____SavingSfx_47; }
	inline bool* get_address_of__SavingSfx_47() { return &____SavingSfx_47; }
	inline void set__SavingSfx_47(bool value)
	{
		____SavingSfx_47 = value;
	}

	inline static int32_t get_offset_of_SaveProgress_49() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___SaveProgress_49)); }
	inline EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C * get_SaveProgress_49() const { return ___SaveProgress_49; }
	inline EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C ** get_address_of_SaveProgress_49() { return &___SaveProgress_49; }
	inline void set_SaveProgress_49(EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C * value)
	{
		___SaveProgress_49 = value;
		Il2CppCodeGenWriteBarrier((&___SaveProgress_49), value);
	}

	inline static int32_t get_offset_of_ReadProgress_50() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ReadProgress_50)); }
	inline EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 * get_ReadProgress_50() const { return ___ReadProgress_50; }
	inline EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 ** get_address_of_ReadProgress_50() { return &___ReadProgress_50; }
	inline void set_ReadProgress_50(EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 * value)
	{
		___ReadProgress_50 = value;
		Il2CppCodeGenWriteBarrier((&___ReadProgress_50), value);
	}

	inline static int32_t get_offset_of_ExtractProgress_51() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ExtractProgress_51)); }
	inline EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB * get_ExtractProgress_51() const { return ___ExtractProgress_51; }
	inline EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB ** get_address_of_ExtractProgress_51() { return &___ExtractProgress_51; }
	inline void set_ExtractProgress_51(EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB * value)
	{
		___ExtractProgress_51 = value;
		Il2CppCodeGenWriteBarrier((&___ExtractProgress_51), value);
	}

	inline static int32_t get_offset_of_AddProgress_52() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___AddProgress_52)); }
	inline EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 * get_AddProgress_52() const { return ___AddProgress_52; }
	inline EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 ** get_address_of_AddProgress_52() { return &___AddProgress_52; }
	inline void set_AddProgress_52(EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 * value)
	{
		___AddProgress_52 = value;
		Il2CppCodeGenWriteBarrier((&___AddProgress_52), value);
	}

	inline static int32_t get_offset_of_ZipError_53() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ZipError_53)); }
	inline EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E * get_ZipError_53() const { return ___ZipError_53; }
	inline EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E ** get_address_of_ZipError_53() { return &___ZipError_53; }
	inline void set_ZipError_53(EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E * value)
	{
		___ZipError_53 = value;
		Il2CppCodeGenWriteBarrier((&___ZipError_53), value);
	}

	inline static int32_t get_offset_of_U3CFullScanU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CFullScanU3Ek__BackingField_54)); }
	inline bool get_U3CFullScanU3Ek__BackingField_54() const { return ___U3CFullScanU3Ek__BackingField_54; }
	inline bool* get_address_of_U3CFullScanU3Ek__BackingField_54() { return &___U3CFullScanU3Ek__BackingField_54; }
	inline void set_U3CFullScanU3Ek__BackingField_54(bool value)
	{
		___U3CFullScanU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55)); }
	inline bool get_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() const { return ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return &___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline void set_U3CSortEntriesBeforeSavingU3Ek__BackingField_55(bool value)
	{
		___U3CSortEntriesBeforeSavingU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56)); }
	inline bool get_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() const { return ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return &___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline void set_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56(bool value)
	{
		___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CCodecBufferSizeU3Ek__BackingField_57)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_57() const { return ___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return &___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_57(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58)); }
	inline bool get_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() const { return ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline bool* get_address_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return &___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline void set_U3CFlattenFoldersOnExtractU3Ek__BackingField_58(bool value)
	{
		___U3CFlattenFoldersOnExtractU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionLevelU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CCompressionLevelU3Ek__BackingField_59)); }
	inline int32_t get_U3CCompressionLevelU3Ek__BackingField_59() const { return ___U3CCompressionLevelU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CCompressionLevelU3Ek__BackingField_59() { return &___U3CCompressionLevelU3Ek__BackingField_59; }
	inline void set_U3CCompressionLevelU3Ek__BackingField_59(int32_t value)
	{
		___U3CCompressionLevelU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CExtractExistingFileU3Ek__BackingField_60)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_60() const { return ___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_60() { return &___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_60(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CSetCompressionU3Ek__BackingField_61)); }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * get_U3CSetCompressionU3Ek__BackingField_61() const { return ___U3CSetCompressionU3Ek__BackingField_61; }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB ** get_address_of_U3CSetCompressionU3Ek__BackingField_61() { return &___U3CSetCompressionU3Ek__BackingField_61; }
	inline void set_U3CSetCompressionU3Ek__BackingField_61(SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * value)
	{
		___U3CSetCompressionU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSetCompressionU3Ek__BackingField_61), value);
	}
};

struct ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____defaultEncoding_39;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::BufferSizeDefault
	int32_t ___BufferSizeDefault_48;

public:
	inline static int32_t get_offset_of__defaultEncoding_39() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_StaticFields, ____defaultEncoding_39)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__defaultEncoding_39() const { return ____defaultEncoding_39; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__defaultEncoding_39() { return &____defaultEncoding_39; }
	inline void set__defaultEncoding_39(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____defaultEncoding_39 = value;
		Il2CppCodeGenWriteBarrier((&____defaultEncoding_39), value);
	}

	inline static int32_t get_offset_of_BufferSizeDefault_48() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_StaticFields, ___BufferSizeDefault_48)); }
	inline int32_t get_BufferSizeDefault_48() const { return ___BufferSizeDefault_48; }
	inline int32_t* get_address_of_BufferSizeDefault_48() { return &___BufferSizeDefault_48; }
	inline void set_BufferSizeDefault_48(int32_t value)
	{
		___BufferSizeDefault_48 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZIPFILE_TEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_H
#ifndef ZLIBCODEC_TD45F22AE4F4168629AF2ABC4816D14E7BBC06637_H
#define ZLIBCODEC_TD45F22AE4F4168629AF2ABC4816D14E7BBC06637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Ionic.Zlib.ZlibCodec
struct  ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___InputBuffer_0;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___OutputBuffer_4;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Pathfinding.Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Pathfinding.Ionic.Zlib.DeflateManager Pathfinding.Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A * ___dstate_9;
	// Pathfinding.Ionic.Zlib.InflateManager Pathfinding.Ionic.Zlib.ZlibCodec::istate
	InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 * ___istate_10;
	// System.UInt32 Pathfinding.Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___InputBuffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___InputBuffer_0), value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___OutputBuffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___OutputBuffer_4), value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((&___Message_8), value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___dstate_9)); }
	inline DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((&___dstate_9), value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___istate_10)); }
	inline InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((&___istate_10), value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBCODEC_TD45F22AE4F4168629AF2ABC4816D14E7BBC06637_H



extern "C" void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0;
extern "C" void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0;
extern "C" void DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579();
extern const RuntimeType Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0;
extern "C" void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0;
extern "C" void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0;
extern "C" void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0;
extern "C" void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0;
extern "C" void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0;
extern "C" void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0;
extern "C" void DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A();
extern const RuntimeType InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51();
extern const RuntimeType WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0;
extern "C" void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0;
extern "C" void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0;
extern "C" void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0;
extern "C" void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0;
extern "C" void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Delegate_t_0_0_0;
extern "C" void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0;
extern "C" void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0;
extern "C" void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0;
extern "C" void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Exception_t_0_0_0;
extern "C" void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0;
extern "C" void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0;
extern "C" void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0;
extern "C" void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0;
extern "C" void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0;
extern "C" void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0;
extern "C" void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0;
extern "C" void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0;
extern "C" void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0;
extern "C" void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_0_0_0;
extern "C" void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_0_0_0;
extern "C" void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_0_0_0;
extern "C" void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_0_0_0;
extern "C" void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48();
extern const RuntimeType ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C();
extern const RuntimeType WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0;
extern "C" void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0;
extern "C" void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0;
extern "C" void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0;
extern "C" void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0;
extern "C" void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MulticastDelegate_t_0_0_0;
extern "C" void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0;
extern "C" void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0;
extern "C" void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0;
extern "C" void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_0_0_0;
extern "C" void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Assembly_t_0_0_0;
extern "C" void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0;
extern "C" void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0;
extern "C" void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0;
extern "C" void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0;
extern "C" void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0;
extern "C" void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0;
extern "C" void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0;
extern "C" void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0;
extern "C" void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0;
extern "C" void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0;
extern "C" void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0;
extern "C" void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0;
extern "C" void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0;
extern "C" void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0;
extern "C" void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0;
extern "C" void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_0_0_0;
extern "C" void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_0_0_0;
extern "C" void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_0_0_0;
extern "C" void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0;
extern "C" void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0;
extern "C" void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0;
extern "C" void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F();
extern const RuntimeType CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0;
extern "C" void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0;
extern "C" void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0;
extern "C" void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0;
extern "C" void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0;
extern "C" void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0;
extern "C" void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0;
extern "C" void DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A();
extern const RuntimeType SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0;
extern "C" void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0;
extern "C" void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0;
extern "C" void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0;
extern "C" void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0;
extern "C" void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0;
extern "C" void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0;
extern "C" void DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF();
extern const RuntimeType ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0;
extern "C" void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0;
extern "C" void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0;
extern "C" void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0;
extern "C" void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0;
extern "C" void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0;
extern "C" void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0;
extern "C" void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0;
extern "C" void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0;
extern "C" void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9();
extern const RuntimeType unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1();
extern const RuntimeType unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB();
extern const RuntimeType unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7();
extern const RuntimeType unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B();
extern const RuntimeType unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB();
extern const RuntimeType unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7();
extern const RuntimeType unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2();
extern const RuntimeType unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D();
extern const RuntimeType unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2();
extern const RuntimeType unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0();
extern const RuntimeType unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14();
extern const RuntimeType unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D();
extern const RuntimeType unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D();
extern const RuntimeType unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2();
extern const RuntimeType unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6();
extern const RuntimeType unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937();
extern const RuntimeType unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE();
extern const RuntimeType unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A();
extern const RuntimeType unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B();
extern const RuntimeType unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C();
extern const RuntimeType unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856();
extern const RuntimeType unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C();
extern const RuntimeType unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF();
extern const RuntimeType unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3();
extern const RuntimeType unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09();
extern const RuntimeType unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986();
extern const RuntimeType unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5();
extern const RuntimeType unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D();
extern const RuntimeType unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6();
extern const RuntimeType unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_0_0_0;
extern "C" void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740();
extern const RuntimeType unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5();
extern const RuntimeType unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA();
extern const RuntimeType unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6();
extern const RuntimeType unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A();
extern const RuntimeType unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9();
extern const RuntimeType unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9_0_0_0;
extern "C" void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_0_0_0;
extern "C" void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_0_0_0;
extern "C" void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_0_0_0;
extern "C" void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0;
extern "C" void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0;
extern "C" void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_0_0_0;
extern "C" void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0;
extern "C" void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0;
extern "C" void DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778();
extern const RuntimeType LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0;
extern "C" void DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00();
extern const RuntimeType LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0;
extern "C" void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0;
extern "C" void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0;
extern "C" void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0;
extern "C" void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0;
extern "C" void DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161();
extern const RuntimeType StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90();
extern const RuntimeType DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4();
extern const RuntimeType UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0;
extern "C" void PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8();
extern const RuntimeType UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_0_0_0;
extern "C" void PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_0_0_0;
extern "C" void SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_0_0_0;
extern "C" void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0;
extern "C" void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0;
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0;
extern "C" void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0;
extern "C" void DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3();
extern const RuntimeType CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0;
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0;
extern "C" void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0;
extern "C" void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0;
extern "C" void HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_0_0_0;
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0;
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0;
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0;
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0;
extern "C" void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0;
extern "C" void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB();
extern const RuntimeType PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801();
extern const RuntimeType PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0;
extern "C" void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926();
extern const RuntimeType AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0;
extern "C" void DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D();
extern const RuntimeType ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D_0_0_0;
extern "C" void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0;
extern "C" void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0;
extern "C" void DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C();
extern const RuntimeType FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0;
extern "C" void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_0_0_0;
extern "C" void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_0_0_0;
extern "C" void IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_0_0_0;
extern "C" void IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_0_0_0;
extern "C" void FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_0_0_0;
extern "C" void MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_0_0_0;
extern "C" void PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_0_0_0;
extern "C" void PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_0_0_0;
extern "C" void PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_0_0_0;
extern "C" void PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_0_0_0;
extern "C" void SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_0_0_0;
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E();
extern const RuntimeType OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0;
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0;
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0;
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0;
extern "C" void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_0_0_0;
extern "C" void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_0_0_0;
extern "C" void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_0_0_0;
extern "C" void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_0_0_0;
extern "C" void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_0_0_0;
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100();
extern const RuntimeType WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0;
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0;
extern "C" void DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8();
extern const RuntimeType SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0;
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0;
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0;
extern "C" void DelegatePInvokeWrapper_NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5();
extern const RuntimeType NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5_0_0_0;
extern "C" void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0;
extern "C" void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_0_0_0;
extern "C" void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_0_0_0;
extern "C" void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_0_0_0;
extern "C" void DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE();
extern const RuntimeType WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0;
extern "C" void DelegatePInvokeWrapper_SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F();
extern const RuntimeType SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F_0_0_0;
extern "C" void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F();
extern const RuntimeType UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_0_0_0;
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_0_0_0;
extern "C" void DelegatePInvokeWrapper_SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB();
extern const RuntimeType SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB_0_0_0;
extern "C" void DelegatePInvokeWrapper_CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6();
extern const RuntimeType CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6_0_0_0;
extern const RuntimeType CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC_0_0_0;
extern const RuntimeType ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_0_0_0;
extern const RuntimeType BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F_0_0_0;
extern const RuntimeType ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513_0_0_0;
extern const RuntimeType BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6_0_0_0;
extern const RuntimeType BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A_0_0_0;
extern const RuntimeType BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405_0_0_0;
extern const RuntimeType ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_0_0_0;
extern const RuntimeType ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637_0_0_0;
extern const RuntimeType ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E_0_0_0;
extern "C" void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_0_0_0;
extern "C" void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_0_0_0;
extern "C" void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_0_0_0;
extern "C" void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0();
extern const RuntimeType OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0_0_0_0;
extern "C" void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095();
extern const RuntimeType GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4();
extern const RuntimeType GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D();
extern const RuntimeType GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D_0_0_0;
extern "C" void DelegatePInvokeWrapper_Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE();
extern const RuntimeType Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE_0_0_0;
extern "C" void DelegatePInvokeWrapper_Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F();
extern const RuntimeType Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F_0_0_0;
extern "C" void DelegatePInvokeWrapper_RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE();
extern const RuntimeType RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE_0_0_0;
extern "C" void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_0_0_0;
extern "C" void GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_0_0_0;
extern "C" void PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_0_0_0;
extern "C" void AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_0_0_0;
extern "C" void Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_0_0_0;
extern "C" void Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_0_0_0;
extern "C" void FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_0_0_0;
extern "C" void PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_0_0_0;
extern "C" void GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_0_0_0;
extern "C" void GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_0_0_0;
extern "C" void NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_0_0_0;
extern "C" void NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_0_0_0;
extern "C" void meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D();
extern const RuntimeType OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D_0_0_0;
extern "C" void GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_0_0_0;
extern "C" void Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_0_0_0;
extern "C" void Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_0_0_0;
extern "C" void Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_0_0_0;
extern "C" void MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_0_0_0;
extern "C" void DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_0_0_0;
extern "C" void IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_0_0_0;
extern "C" void U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_0_0_0;
extern "C" void Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_0_0_0;
extern "C" void CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_0_0_0;
extern "C" void FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_0_0_0;
extern "C" void ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_0_0_0;
extern "C" void BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_0_0_0;
extern "C" void MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_0_0_0;
extern "C" void ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_0_0_0;
extern "C" void WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_0_0_0;
extern "C" void InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_0_0_0;
extern "C" void BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_0_0_0;
extern "C" void CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_0_0_0;
extern "C" void ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_0_0_0;
extern "C" void ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_0_0_0;
extern "C" void Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_0_0_0;
extern "C" void InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_0_0_0;
extern "C" void InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_0_0_0;
extern "C" void InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_0_0_0;
extern "C" void ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_0_0_0;
extern "C" void PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_0_0_0;
extern "C" void InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_0_0_0;
extern "C" void DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_0_0_0;
extern "C" void MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_0_0_0;
extern "C" void Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_0_0_0;
extern "C" void Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_0_0_0;
extern "C" void SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_0_0_0;
extern "C" void DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_0_0_0;
extern "C" void InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_0_0_0;
extern "C" void AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_0_0_0;
extern "C" void StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_0_0_0;
extern "C" void StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_0_0_0;
extern "C" void StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_0_0_0;
extern "C" void Data_tDD54BB1282C833C4675C2C85573320783F2807B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Data_tDD54BB1282C833C4675C2C85573320783F2807B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Data_tDD54BB1282C833C4675C2C85573320783F2807B1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Data_tDD54BB1282C833C4675C2C85573320783F2807B1_0_0_0;
extern "C" void Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_0_0_0;
extern "C" void RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_0_0_0;
extern "C" void RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_0_0_0;
extern "C" void Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Builder_t2549C7EDAC67237F97015821103155122BF1797D_0_0_0;
extern "C" void ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_0_0_0;
extern "C" void BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_0_0_0;
extern "C" void Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_0_0_0;
extern "C" void Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_0_0_0;
extern "C" void LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_0_0_0;
extern "C" void ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_0_0_0;
extern "C" void LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_0_0_0;
extern "C" void LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_0_0_0;
extern "C" void NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_0_0_0;
extern "C" void ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_0_0_0;
extern "C" void InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_0_0_0;
extern "C" void DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_0_0_0;
extern "C" void InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_0_0_0;
extern "C" void MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_0_0_0;
extern "C" void Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_0_0_0;
extern "C" void IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_0_0_0;
extern "C" void InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_0_0_0;
extern "C" void QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_0_0_0;
extern "C" void QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_0_0_0;
extern "C" void HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_0_0_0;
extern "C" void HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_0_0_0;
extern "C" void HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_0_0_0;
extern "C" void HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_0_0_0;
extern "C" void HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_0_0_0;
extern "C" void OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_0_0_0;
extern "C" void JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_0_0_0;
extern "C" void MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_0_0_0;
extern "C" void InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_0_0_0;
extern "C" void MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_0_0_0;
extern "C" void InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_0_0_0;
extern "C" void TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_0_0_0;
extern "C" void InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_0_0_0;
extern "C" void TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_0_0_0;
extern "C" void InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_0_0_0;
extern "C" void RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_0_0_0;
extern "C" void TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_0_0_0;
extern "C" void TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_0_0_0;
extern "C" void CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_0_0_0;
extern "C" void OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_0_0_0;
extern "C" void UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_0_0_0;
extern "C" void InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_0_0_0;
extern "C" void BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_0_0_0;
extern "C" void UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_0_0_0;
extern "C" void XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_0_0_0;
extern "C" void InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_0_0_0;
extern "C" void JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_0_0_0;
extern "C" void PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_0_0_0;
extern "C" void PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_0_0_0;
extern "C" void Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_0_0_0;
extern "C" void TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_0_0_0;
extern "C" void WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_0_0_0;
extern "C" void AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_0_0_0;
extern "C" void Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_0_0_0;
extern "C" void CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_0_0_0;
extern "C" void Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_0_0_0;
extern "C" void CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_0_0_0;
extern "C" void DelegatePInvokeWrapper_AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE();
extern const RuntimeType AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_0_0_0;
extern "C" void EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_0_0_0;
extern "C" void CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_0_0_0;
extern "C" void Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_0_0_0;
extern "C" void Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_0_0_0;
extern "C" void AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_0_0_0;
extern "C" void ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_0_0_0;
extern "C" void TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_0_0_0;
extern "C" void LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_0_0_0;
extern "C" void NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_0_0_0;
extern "C" void TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_0_0_0;
extern "C" void ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72();
extern const RuntimeType OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72_0_0_0;
extern "C" void GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[362] = 
{
	{ NULL, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579, NULL, NULL, NULL, NULL, NULL, &Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0 } /* System.Action */,
	{ NULL, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0 } /* System.AppDomain */,
	{ NULL, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A, NULL, NULL, NULL, NULL, NULL, &InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0 } /* System.Console/InternalCancelHandler */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup, NULL, NULL, &DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0 } /* System.DTSubString */,
	{ NULL, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0 } /* System.DateTimeResult */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ NULL, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0 } /* System.Enum */,
	{ NULL, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup, NULL, NULL, &Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ NULL, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_back, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_back, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_back, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanToken */,
	{ NULL, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_back, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanTokenizer */,
	{ NULL, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0 } /* System.Guid/GuidResult */,
	{ DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0 } /* System.InputRecord */,
	{ NULL, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0 } /* System.MonoAsyncCall */,
	{ NULL, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0 } /* System.Number/NumberBuffer */,
	{ NULL, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0 } /* System.ParamsArray */,
	{ NULL, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_back, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_cleanup, NULL, NULL, &ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_0_0_0 } /* System.ParsingInfo */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup, NULL, NULL, &MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0 } /* System.Reflection.MethodBody */,
	{ NULL, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup, NULL, NULL, &Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0 } /* System.Reflection.Module */,
	{ NULL, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_back, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_0_0_0 } /* System.Runtime.CompilerServices.AsyncTaskMethodBuilder */,
	{ NULL, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_back, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */,
	{ NULL, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_back, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter */,
	{ NULL, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ NULL, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup, NULL, NULL, &Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ NULL, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ NULL, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup, NULL, NULL, &TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0 } /* System.TimeZoneInfo/TIME_ZONE_INFORMATION */,
	{ NULL, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup, NULL, NULL, &UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0 } /* System.UnSafeCharBuffer */,
	{ NULL, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0 } /* System.ValueType */,
	{ NULL, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup, NULL, NULL, &VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0 } /* System.Version/VersionResult */,
	{ NULL, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0 } /* System.__DTString */,
	{ NULL, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_back, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t */,
	{ DelegatePInvokeWrapper_unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB, NULL, NULL, NULL, NULL, NULL, &unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t */,
	{ DelegatePInvokeWrapper_unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7, NULL, NULL, NULL, NULL, NULL, &unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7, NULL, NULL, NULL, NULL, NULL, &unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t */,
	{ DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856, NULL, NULL, NULL, NULL, NULL, &unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t */,
	{ NULL, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_back, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_read_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_write_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_x509verify_callback */,
	{ NULL, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_back, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_0_0_0 } /* System.ComponentModel.AttributeCollection/AttributeEntry */,
	{ NULL, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor */,
	{ NULL, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_back, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor */,
	{ NULL, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_back, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778, NULL, NULL, NULL, NULL, NULL, &LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4, NULL, NULL, NULL, NULL, NULL, &UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke, PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_back, PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem */,
	{ DelegatePInvokeWrapper_UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke, PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_back, PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke, SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_back, SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteBone */,
	{ NULL, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup, NULL, NULL, &Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ NULL, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke, HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_back, HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D, NULL, NULL, NULL, NULL, NULL, &ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D_0_0_0 } /* UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction */,
	{ NULL, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_back, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_back, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke, IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_back, IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_0_0_0 } /* UnityEngine.Experimental.IntegratedSubsystem */,
	{ NULL, IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke, IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_back, IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_0_0_0 } /* UnityEngine.Experimental.IntegratedSubsystemDescriptor */,
	{ NULL, FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke, FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_back, FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_cleanup, NULL, NULL, &FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_0_0_0 } /* UnityEngine.Experimental.XR.FrameReceivedEventArgs */,
	{ NULL, MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke, MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_back, MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_cleanup, NULL, NULL, &MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_0_0_0 } /* UnityEngine.Experimental.XR.MeshGenerationResult */,
	{ NULL, PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke, PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_back, PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_cleanup, NULL, NULL, &PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_0_0_0 } /* UnityEngine.Experimental.XR.PlaneAddedEventArgs */,
	{ NULL, PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke, PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_back, PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_cleanup, NULL, NULL, &PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_0_0_0 } /* UnityEngine.Experimental.XR.PlaneRemovedEventArgs */,
	{ NULL, PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke, PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_back, PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_cleanup, NULL, NULL, &PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_0_0_0 } /* UnityEngine.Experimental.XR.PlaneUpdatedEventArgs */,
	{ NULL, PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke, PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_back, PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_cleanup, NULL, NULL, &PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_0_0_0 } /* UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs */,
	{ NULL, SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke, SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_back, SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_cleanup, NULL, NULL, &SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_0_0_0 } /* UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs */,
	{ NULL, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ NULL, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_back, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_back, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_back, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_back, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_back, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ NULL, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup, NULL, NULL, &Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ DelegatePInvokeWrapper_NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5, NULL, NULL, NULL, NULL, NULL, &NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5_0_0_0 } /* UnityEngineInternal.Input.NativeUpdateCallback */,
	{ NULL, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ NULL, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_back, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_cleanup, NULL, NULL, &MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_0_0_0 } /* UnityEngine.ParticleSystem/MainModule */,
	{ NULL, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_back, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ NULL, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_back, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_cleanup, NULL, NULL, &TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_0_0_0 } /* UnityEngine.Tilemaps.TileData */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ NULL, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_back, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ DelegatePInvokeWrapper_SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB, NULL, NULL, NULL, NULL, NULL, &SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB_0_0_0 } /* Pathfinding.Ionic.Zip.SetCompressionCallback */,
	{ DelegatePInvokeWrapper_CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6_0_0_0 } /* Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc */,
	{ NULL, NULL, NULL, NULL, NULL, &CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC::CLSID, &CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC_0_0_0 } /* Pathfinding.Ionic.Crc.CRC32 */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C::CLSID, &ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_0_0_0 } /* Pathfinding.Ionic.Zip.ZipEntry */,
	{ NULL, NULL, NULL, NULL, NULL, &BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F::CLSID, &BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F_0_0_0 } /* Pathfinding.Ionic.Zip.BadCrcException */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513::CLSID, &ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513_0_0_0 } /* Pathfinding.Ionic.Zip.ZipException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6::CLSID, &BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6_0_0_0 } /* Pathfinding.Ionic.Zip.BadPasswordException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A::CLSID, &BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A_0_0_0 } /* Pathfinding.Ionic.Zip.BadReadException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405::CLSID, &BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405_0_0_0 } /* Pathfinding.Ionic.Zip.BadStateException */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E::CLSID, &ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_0_0_0 } /* Pathfinding.Ionic.Zip.ZipFile */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637::CLSID, &ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibCodec */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E::CLSID, &ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibException */,
	{ NULL, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_back, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_back, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_back, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_back, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_back, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_back, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke, GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_back, GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_cleanup, NULL, NULL, &GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_0_0_0 } /* Pathfinding.AstarDebugger/GraphPoint */,
	{ NULL, PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke, PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_back, PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_cleanup, NULL, NULL, &PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_0_0_0 } /* Pathfinding.AstarDebugger/PathTypeDebug */,
	{ NULL, AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke, AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_back, AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_cleanup, NULL, NULL, &AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_0_0_0 } /* Pathfinding.AstarWorkItem */,
	{ NULL, Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke, Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_back, Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_cleanup, NULL, NULL, &Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_0_0_0 } /* Pathfinding.BinaryHeap/Tuple */,
	{ NULL, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_back, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_cleanup, NULL, NULL, &Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_0_0_0 } /* Pathfinding.Connection */,
	{ NULL, FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke, FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_back, FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_cleanup, NULL, NULL, &FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_0_0_0 } /* Pathfinding.Funnel/FunnelPortals */,
	{ NULL, PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke, PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_back, PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_cleanup, NULL, NULL, &PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_0_0_0 } /* Pathfinding.Funnel/PathPart */,
	{ NULL, GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke, GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_back, GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_cleanup, NULL, NULL, &GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_0_0_0 } /* Pathfinding.GraphHitInfo */,
	{ NULL, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_back, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_cleanup, NULL, NULL, &GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_0_0_0 } /* Pathfinding.GraphUpdateProcessor/GUOSingle */,
	{ NULL, NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke, NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_back, NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_cleanup, NULL, NULL, &NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_0_0_0 } /* Pathfinding.NNInfo */,
	{ NULL, NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke, NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_back, NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_cleanup, NULL, NULL, &NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_0_0_0 } /* Pathfinding.NNInfoInternal */,
	{ NULL, meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke, meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_back, meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_cleanup, NULL, NULL, &meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_0_0_0 } /* Pathfinding.ObjImporter/meshStruct */,
	{ DelegatePInvokeWrapper_OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D, NULL, NULL, NULL, NULL, NULL, &OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D_0_0_0 } /* Pathfinding.OnScanStatus */,
	{ NULL, GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke, GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_back, GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_cleanup, NULL, NULL, &GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_0_0_0 } /* Pathfinding.PathProcessor/GraphUpdateLock */,
	{ NULL, Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke, Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_back, Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_cleanup, NULL, NULL, &Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_0_0_0 } /* Pathfinding.PointKDTree/Node */,
	{ NULL, Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke, Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_back, Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_cleanup, NULL, NULL, &Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_0_0_0 } /* Pathfinding.Progress */,
	{ NULL, Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke, Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_back, Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_cleanup, NULL, NULL, &Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_0_0_0 } /* Pathfinding.Util.RetainedGizmos/Hasher */,
	{ NULL, MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke, MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_back, MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_cleanup, NULL, NULL, &MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_0_0_0 } /* Pathfinding.Util.RetainedGizmos/MeshWithHash */,
	{ NULL, DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_marshal_pinvoke, DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_marshal_pinvoke_back, DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_marshal_pinvoke_cleanup, NULL, NULL, &DynamicBitfield_tC36AC462344B189C5BE606C0BCD502515EE244F3_0_0_0 } /* UnityEngine.Experimental.Input.DynamicBitfield */,
	{ NULL, IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_marshal_pinvoke, IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_marshal_pinvoke_back, IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_marshal_pinvoke_cleanup, NULL, NULL, &IMECompositionString_t7EEF3EB3CA708F8D9450CB60F56BDA85149A2BD2_0_0_0 } /* UnityEngine.Experimental.Input.IMECompositionString */,
	{ NULL, U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_marshal_pinvoke, U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_marshal_pinvoke_back, U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_marshal_pinvoke_cleanup, NULL, NULL, &U3CbufferU3Ee__FixedBuffer_t30BBE10B5E9327B86EC558DB83F50A9286ACDEF5_0_0_0 } /* UnityEngine.Experimental.Input.IMECompositionString/<buffer>e__FixedBuffer */,
	{ NULL, Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_marshal_pinvoke, Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_marshal_pinvoke_back, Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_tADE473A11C5503ED3800562F40111046C05AAF75_0_0_0 } /* UnityEngine.Experimental.Input.IMECompositionString/Enumerator */,
	{ NULL, CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshal_pinvoke, CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshal_pinvoke_back, CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshal_pinvoke_cleanup, NULL, NULL, &CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_0_0_0 } /* UnityEngine.Experimental.Input.InputAction/CallbackContext */,
	{ NULL, FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_marshal_pinvoke, FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_marshal_pinvoke_back, FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_marshal_pinvoke_cleanup, NULL, NULL, &FileJson_t309A057B8304315170CF7860A7A8B5A0A8E2C678_0_0_0 } /* UnityEngine.Experimental.Input.InputActionAsset/FileJson */,
	{ NULL, ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_marshal_pinvoke, ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_marshal_pinvoke_back, ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_marshal_pinvoke_cleanup, NULL, NULL, &ActionJson_t8690EFC5B053410D042793CA6F7A8B2CD92C4DC7_0_0_0 } /* UnityEngine.Experimental.Input.InputActionMap/ActionJson */,
	{ NULL, BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_marshal_pinvoke, BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_marshal_pinvoke_back, BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_marshal_pinvoke_cleanup, NULL, NULL, &BindingJson_t7D37E1F66DA031EC2035C08EBC19D924E6419D25_0_0_0 } /* UnityEngine.Experimental.Input.InputActionMap/BindingJson */,
	{ NULL, MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_marshal_pinvoke, MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_marshal_pinvoke_back, MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_marshal_pinvoke_cleanup, NULL, NULL, &MapJson_tDCA689907D19A0A9C79F2EE97251F9080EE63373_0_0_0 } /* UnityEngine.Experimental.Input.InputActionMap/MapJson */,
	{ NULL, ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_marshal_pinvoke, ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_marshal_pinvoke_back, ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_marshal_pinvoke_cleanup, NULL, NULL, &ReadFileJson_t1787899AADC3F774B2FE7DF525CE3EB3EAD2D471_0_0_0 } /* UnityEngine.Experimental.Input.InputActionMap/ReadFileJson */,
	{ NULL, WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_marshal_pinvoke, WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_marshal_pinvoke_back, WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_marshal_pinvoke_cleanup, NULL, NULL, &WriteFileJson_t99279AAEA80A97D241CEE0CDF3E976B4D082013C_0_0_0 } /* UnityEngine.Experimental.Input.InputActionMap/WriteFileJson */,
	{ NULL, InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_marshal_pinvoke, InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_marshal_pinvoke_back, InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_marshal_pinvoke_cleanup, NULL, NULL, &InputActionProperty_t41F208056463976359FDFE7A3A1B3E0DBF8F9A7D_0_0_0 } /* UnityEngine.Experimental.Input.InputActionProperty */,
	{ NULL, BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshal_pinvoke, BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshal_pinvoke_back, BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshal_pinvoke_cleanup, NULL, NULL, &BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_0_0_0 } /* UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax */,
	{ NULL, CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_marshal_pinvoke, CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_marshal_pinvoke_back, CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_marshal_pinvoke_cleanup, NULL, NULL, &CompositeSyntax_t21D75422C7B768E5DDE6DC80DE748E6555172A5F_0_0_0 } /* UnityEngine.Experimental.Input.InputActionSetupExtensions/CompositeSyntax */,
	{ NULL, ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshal_pinvoke, ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshal_pinvoke_back, ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshal_pinvoke_cleanup, NULL, NULL, &ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_0_0_0 } /* UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax */,
	{ NULL, ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_marshal_pinvoke, ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_marshal_pinvoke_back, ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_marshal_pinvoke_cleanup, NULL, NULL, &ActionEventPtr_t74F32D070CE047FB4710AB10746CA182220B56CD_0_0_0 } /* UnityEngine.Experimental.Input.InputActionTrace/ActionEventPtr */,
	{ NULL, Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_marshal_pinvoke, Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_marshal_pinvoke_back, Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_t5E7C59D90541E8BAA1E38E7132C838D8847EEA86_0_0_0 } /* UnityEngine.Experimental.Input.InputActionTrace/Enumerator */,
	{ NULL, InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshal_pinvoke, InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshal_pinvoke_back, InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshal_pinvoke_cleanup, NULL, NULL, &InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_0_0_0 } /* UnityEngine.Experimental.Input.InputBinding */,
	{ NULL, InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshal_pinvoke, InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshal_pinvoke_back, InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshal_pinvoke_cleanup, NULL, NULL, &InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_0_0_0 } /* UnityEngine.Experimental.Input.InputBindingCompositeContext */,
	{ NULL, InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_marshal_pinvoke, InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_marshal_pinvoke_back, InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_marshal_pinvoke_cleanup, NULL, NULL, &InputBindingResolver_tC59FC5AC7C3C3C4595544A6817A698B36442DCF7_0_0_0 } /* UnityEngine.Experimental.Input.InputBindingResolver */,
	{ NULL, ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_marshal_pinvoke, ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_marshal_pinvoke_back, ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_marshal_pinvoke_cleanup, NULL, NULL, &ParsedPathComponent_t5F68885C9713B4F6EA43F4D426FE5E2B78DFE28C_0_0_0 } /* UnityEngine.Experimental.Input.InputControlPath/ParsedPathComponent */,
	{ NULL, PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_marshal_pinvoke, PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_marshal_pinvoke_back, PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_marshal_pinvoke_cleanup, NULL, NULL, &PathParser_t34BD85763A9E064FF6247C3CE952A1EC61A31E5C_0_0_0 } /* UnityEngine.Experimental.Input.InputControlPath/PathParser */,
	{ NULL, InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshal_pinvoke, InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshal_pinvoke_back, InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshal_pinvoke_cleanup, NULL, NULL, &InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_0_0_0 } /* UnityEngine.Experimental.Input.InputControlScheme */,
	{ NULL, DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshal_pinvoke, DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshal_pinvoke_back, DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshal_pinvoke_cleanup, NULL, NULL, &DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_0_0_0 } /* UnityEngine.Experimental.Input.InputControlScheme/DeviceRequirement */,
	{ NULL, MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshal_pinvoke, MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshal_pinvoke_back, MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshal_pinvoke_cleanup, NULL, NULL, &MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_0_0_0 } /* UnityEngine.Experimental.Input.InputControlScheme/MatchResult */,
	{ NULL, Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_marshal_pinvoke, Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_marshal_pinvoke_back, Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_t1EF10A194FE1E4ACE92473D58042A9FE222C8CF1_0_0_0 } /* UnityEngine.Experimental.Input.InputControlScheme/MatchResult/Enumerator */,
	{ NULL, Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_marshal_pinvoke, Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_marshal_pinvoke_back, Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_marshal_pinvoke_cleanup, NULL, NULL, &Match_tDB61BD2C69E1790C97816607B67080AAA1C936EA_0_0_0 } /* UnityEngine.Experimental.Input.InputControlScheme/MatchResult/Match */,
	{ NULL, SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_marshal_pinvoke, SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_marshal_pinvoke_back, SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_marshal_pinvoke_cleanup, NULL, NULL, &SchemeJson_tCFEBEF94FF3820D58DF21EF9B30B2943ABEEFBF7_0_0_0 } /* UnityEngine.Experimental.Input.InputControlScheme/SchemeJson */,
	{ NULL, DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_marshal_pinvoke, DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_marshal_pinvoke_back, DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_marshal_pinvoke_cleanup, NULL, NULL, &DeviceJson_t1AECCFD83EA8406C24D177273ADC4486CF29E8F0_0_0_0 } /* UnityEngine.Experimental.Input.InputControlScheme/SchemeJson/DeviceJson */,
	{ NULL, InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_marshal_pinvoke, InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_marshal_pinvoke_back, InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_marshal_pinvoke_cleanup, NULL, NULL, &InputInteractionContext_tED478E34D46BB15E1B32C8A80D68E4F4D13C6717_0_0_0 } /* UnityEngine.Experimental.Input.InputInteractionContext */,
	{ NULL, AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_marshal_pinvoke, AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_marshal_pinvoke_back, AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_marshal_pinvoke_cleanup, NULL, NULL, &AvailableDevice_t5A82173B517E192E98161F5C86D94D5C00EB54D9_0_0_0 } /* UnityEngine.Experimental.Input.InputManager/AvailableDevice */,
	{ NULL, StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_marshal_pinvoke, StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_marshal_pinvoke_back, StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_marshal_pinvoke_cleanup, NULL, NULL, &StateChangeMonitorListener_tD84DE36EBF1BCA38D7E04E9DF0ADA1CD839A633B_0_0_0 } /* UnityEngine.Experimental.Input.InputManager/StateChangeMonitorListener */,
	{ NULL, StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshal_pinvoke, StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshal_pinvoke_back, StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshal_pinvoke_cleanup, NULL, NULL, &StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_0_0_0 } /* UnityEngine.Experimental.Input.InputManager/StateChangeMonitorTimeout */,
	{ NULL, StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_marshal_pinvoke, StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_marshal_pinvoke_back, StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_marshal_pinvoke_cleanup, NULL, NULL, &StateChangeMonitorsForDevice_t53CD794AA9DFA309202CDA9AE6E807913135C67B_0_0_0 } /* UnityEngine.Experimental.Input.InputManager/StateChangeMonitorsForDevice */,
	{ NULL, Data_tDD54BB1282C833C4675C2C85573320783F2807B1_marshal_pinvoke, Data_tDD54BB1282C833C4675C2C85573320783F2807B1_marshal_pinvoke_back, Data_tDD54BB1282C833C4675C2C85573320783F2807B1_marshal_pinvoke_cleanup, NULL, NULL, &Data_tDD54BB1282C833C4675C2C85573320783F2807B1_0_0_0 } /* UnityEngine.Experimental.Input.InputRemoting/ChangeUsageMsg/Data */,
	{ NULL, Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_marshal_pinvoke, Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_marshal_pinvoke_back, Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_marshal_pinvoke_cleanup, NULL, NULL, &Data_t0B9C25DDE119952B947BA11F424C33E82CFA7976_0_0_0 } /* UnityEngine.Experimental.Input.InputRemoting/NewDeviceMsg/Data */,
	{ NULL, RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_marshal_pinvoke, RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_marshal_pinvoke_back, RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_marshal_pinvoke_cleanup, NULL, NULL, &RemoteInputDevice_t89934B6ED0283A6BD164A6D7EF7218F98D3E68F1_0_0_0 } /* UnityEngine.Experimental.Input.InputRemoting/RemoteInputDevice */,
	{ NULL, RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_marshal_pinvoke, RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_marshal_pinvoke_back, RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_marshal_pinvoke_cleanup, NULL, NULL, &RemoteSender_tC588A83EF0A52A7925E5D2462F0A355AAA5EF569_0_0_0 } /* UnityEngine.Experimental.Input.InputRemoting/RemoteSender */,
	{ NULL, Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshal_pinvoke, Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshal_pinvoke_back, Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshal_pinvoke_cleanup, NULL, NULL, &Builder_t2549C7EDAC67237F97015821103155122BF1797D_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder */,
	{ NULL, ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_marshal_pinvoke, ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_marshal_pinvoke_back, ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_marshal_pinvoke_cleanup, NULL, NULL, &ControlBuilder_tA6751EED23BD15EBA2A3E65C45291CE85A975C8F_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder/ControlBuilder */,
	{ NULL, BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_marshal_pinvoke, BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_marshal_pinvoke_back, BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_marshal_pinvoke_cleanup, NULL, NULL, &BuilderInfo_tC2040A07F025FE13B27DC0E016539AC5343AAF38_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/BuilderInfo */,
	{ NULL, Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshal_pinvoke, Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshal_pinvoke_back, Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshal_pinvoke_cleanup, NULL, NULL, &Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/Cache */,
	{ NULL, Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshal_pinvoke, Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshal_pinvoke_back, Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshal_pinvoke_cleanup, NULL, NULL, &Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/Collection */,
	{ NULL, LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_marshal_pinvoke, LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_marshal_pinvoke_back, LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_marshal_pinvoke_cleanup, NULL, NULL, &LayoutMatcher_t584286E931E05DDAB6DEA91D7F55B7B7DD6A378B_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/Collection/LayoutMatcher */,
	{ NULL, ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshal_pinvoke, ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshal_pinvoke_back, ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshal_pinvoke_cleanup, NULL, NULL, &ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/ControlItem */,
	{ NULL, LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_marshal_pinvoke, LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_marshal_pinvoke_back, LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_marshal_pinvoke_cleanup, NULL, NULL, &LayoutJson_t5996E7BFCCDEBEDF780E8D73087BA5555530408D_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/LayoutJson */,
	{ NULL, LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_marshal_pinvoke, LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_marshal_pinvoke_back, LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_marshal_pinvoke_cleanup, NULL, NULL, &LayoutJsonNameAndDescriptorOnly_tE6D2D9B9BD1FF3E5AF4ED5D68701A5CCA13AEBF7_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/LayoutJsonNameAndDescriptorOnly */,
	{ NULL, NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_marshal_pinvoke, NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_marshal_pinvoke_back, NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_marshal_pinvoke_cleanup, NULL, NULL, &NameAndParameters_t3BE83618016DC8E982DFF53D9CFD0F399032E16C_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/NameAndParameters */,
	{ NULL, ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_marshal_pinvoke, ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_marshal_pinvoke_back, ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_marshal_pinvoke_cleanup, NULL, NULL, &ParameterValue_t41CC01369782C3B30D7C856DD2B84A3674C9CBF1_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputControlLayout/ParameterValue */,
	{ NULL, InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshal_pinvoke, InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshal_pinvoke_back, InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshal_pinvoke_cleanup, NULL, NULL, &InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputDeviceDescription */,
	{ NULL, DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_marshal_pinvoke, DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_marshal_pinvoke_back, DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_marshal_pinvoke_cleanup, NULL, NULL, &DeviceDescriptionJson_t7855C00F255BD6838D9A4B3854C02DBADFCBD577_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputDeviceDescription/DeviceDescriptionJson */,
	{ NULL, InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshal_pinvoke, InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshal_pinvoke_back, InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshal_pinvoke_cleanup, NULL, NULL, &InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher */,
	{ NULL, MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_marshal_pinvoke, MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_marshal_pinvoke_back, MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_marshal_pinvoke_cleanup, NULL, NULL, &MatcherJson_t7867290303EE3742B5AB9C0D3722DAA8E68B59BF_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher/MatcherJson */,
	{ NULL, Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_marshal_pinvoke, Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_marshal_pinvoke_back, Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_marshal_pinvoke_cleanup, NULL, NULL, &Capability_tA8613F3F63B165D3BC48232F157949D13488BE76_0_0_0 } /* UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher/MatcherJson/Capability */,
	{ NULL, IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_marshal_pinvoke, IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_marshal_pinvoke_back, IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_marshal_pinvoke_cleanup, NULL, NULL, &IMECompositionEvent_t3D17E7F83F35BCEF7F71B90011D2B85E4AB4C9CD_0_0_0 } /* UnityEngine.Experimental.Input.LowLevel.IMECompositionEvent */,
	{ NULL, InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_marshal_pinvoke, InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_marshal_pinvoke_back, InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_marshal_pinvoke_cleanup, NULL, NULL, &InputEventBuffer_t8EF9865204128AF22E7CE4A0FAF0FC3B3D3328DC_0_0_0 } /* UnityEngine.Experimental.Input.LowLevel.InputEventBuffer */,
	{ NULL, QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_marshal_pinvoke, QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_marshal_pinvoke_back, QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_marshal_pinvoke_cleanup, NULL, NULL, &QueryCanRunInBackground_tFA7B6C7B1724891AD3AD51BD8592001793F30454_0_0_0 } /* UnityEngine.Experimental.Input.LowLevel.QueryCanRunInBackground */,
	{ NULL, QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_marshal_pinvoke, QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_marshal_pinvoke_back, QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_marshal_pinvoke_cleanup, NULL, NULL, &QueryEnabledStateCommand_tF7401FBD2D5C09D9C1F8C2107AA0953C6BF79ED4_0_0_0 } /* UnityEngine.Experimental.Input.LowLevel.QueryEnabledStateCommand */,
	{ NULL, HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_marshal_pinvoke, HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_marshal_pinvoke_back, HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_marshal_pinvoke_cleanup, NULL, NULL, &HIDDeviceDescriptor_tA07C71016527FD38FAEC377F61919D98C5F8997F_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.HID.HID/HIDDeviceDescriptor */,
	{ NULL, HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_marshal_pinvoke, HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_marshal_pinvoke_back, HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_marshal_pinvoke_cleanup, NULL, NULL, &HIDDeviceDescriptorBuilder_t4995D03D69A58E224BE5C765643C1D135EBED95D_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.HID.HID/HIDDeviceDescriptorBuilder */,
	{ NULL, HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_marshal_pinvoke, HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_marshal_pinvoke_back, HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_marshal_pinvoke_cleanup, NULL, NULL, &HIDElementDescriptor_tC35ABBA211A6D8F62C901F59C974B2141CF3169B_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.HID.HID/HIDElementDescriptor */,
	{ NULL, HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_marshal_pinvoke, HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_marshal_pinvoke_back, HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_marshal_pinvoke_cleanup, NULL, NULL, &HIDItemStateGlobal_t93A2149BE0EF446C1FED6A385610AC4BF23FAEBC_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.HID.HIDParser/HIDItemStateGlobal */,
	{ NULL, HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_marshal_pinvoke, HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_marshal_pinvoke_back, HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_marshal_pinvoke_cleanup, NULL, NULL, &HIDItemStateLocal_t6F53D9797F21B7286921D22DE67A2239E7458E90_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.HID.HIDParser/HIDItemStateLocal */,
	{ NULL, OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshal_pinvoke, OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshal_pinvoke_back, OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshal_pinvoke_cleanup, NULL, NULL, &OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl/OnScreenDeviceInfo */,
	{ NULL, JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_marshal_pinvoke, JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_marshal_pinvoke_back, JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_marshal_pinvoke_cleanup, NULL, NULL, &JoystickModel_tB46D991FDDA7E6CA4242409DA504526D825FB4EB_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.JoystickModel */,
	{ NULL, MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_marshal_pinvoke, MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_marshal_pinvoke_back, MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_marshal_pinvoke_cleanup, NULL, NULL, &MouseButtonModel_t332727BC8788A16941617A4AA1ECA283AA186699_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.MouseButtonModel */,
	{ NULL, InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_marshal_pinvoke, InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_marshal_pinvoke_back, InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_marshal_pinvoke_cleanup, NULL, NULL, &InternalData_t08F86A777917B5E708998CAF15CF2592D902FFDA_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.MouseButtonModel/InternalData */,
	{ NULL, MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_marshal_pinvoke, MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_marshal_pinvoke_back, MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_marshal_pinvoke_cleanup, NULL, NULL, &MouseModel_t06589C0F82C38E997B1AA26E97EA1488F609AC08_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.MouseModel */,
	{ NULL, InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_marshal_pinvoke, InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_marshal_pinvoke_back, InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_marshal_pinvoke_cleanup, NULL, NULL, &InternalData_t85354A294296BB101E934BED5301C1DA1F04F64A_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.MouseModel/InternalData */,
	{ NULL, TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_marshal_pinvoke, TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_marshal_pinvoke_back, TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_marshal_pinvoke_cleanup, NULL, NULL, &TouchModel_t2079300D157AAD1AAEFE3FC78DF9F73EE35B751E_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.TouchModel */,
	{ NULL, InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_marshal_pinvoke, InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_marshal_pinvoke_back, InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_marshal_pinvoke_cleanup, NULL, NULL, &InternalData_t5341D91625C44896752DCF89219235B4A4D4E0F8_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.TouchModel/InternalData */,
	{ NULL, TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_marshal_pinvoke, TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_marshal_pinvoke_back, TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_marshal_pinvoke_cleanup, NULL, NULL, &TrackedDeviceModel_tC343D71C04538E69BA60493B55C466896620CD0E_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.TrackedDeviceModel */,
	{ NULL, InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_marshal_pinvoke, InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_marshal_pinvoke_back, InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_marshal_pinvoke_cleanup, NULL, NULL, &InternalData_t2D81E71277813878C4990F9926B516920BAFA6B2_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.TrackedDeviceModel/InternalData */,
	{ NULL, RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_marshal_pinvoke, RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_marshal_pinvoke_back, RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_marshal_pinvoke_cleanup, NULL, NULL, &RaycastHitData_t39298BBADF73F7A32952A8CC1FA322CC3C37EBC1_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.TrackedDeviceRaycaster/RaycastHitData */,
	{ NULL, TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_marshal_pinvoke, TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_marshal_pinvoke_back, TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_marshal_pinvoke_cleanup, NULL, NULL, &TouchResponder_t2C0995721758CEABE26AF7AC5C1A1492A7EFF44D_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.UIActionInputModule/TouchResponder */,
	{ NULL, TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_marshal_pinvoke, TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_marshal_pinvoke_back, TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_marshal_pinvoke_cleanup, NULL, NULL, &TrackedDeviceResponder_t06B7367188A911893152E5EE41E860B5DA755791_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.UI.UIActionInputModule/TrackedDeviceResponder */,
	{ NULL, CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_marshal_pinvoke, CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_marshal_pinvoke_back, CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_marshal_pinvoke_cleanup, NULL, NULL, &CompareDevicesByUserAccount_t559694C9EBA92A0B46F4B954B410D10317D8AD8B_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.Users.InputUser/CompareDevicesByUserAccount */,
	{ NULL, OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshal_pinvoke, OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshal_pinvoke_back, OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshal_pinvoke_cleanup, NULL, NULL, &OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.Users.InputUser/OngoingAccountSelection */,
	{ NULL, UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_marshal_pinvoke, UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_marshal_pinvoke_back, UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_marshal_pinvoke_cleanup, NULL, NULL, &UserData_t0ED4869BE0D673B85AE4A5C093D6AAFBCB43D195_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.Users.InputUser/UserData */,
	{ NULL, InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_marshal_pinvoke, InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_marshal_pinvoke_back, InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_marshal_pinvoke_cleanup, NULL, NULL, &InputUserAccountHandle_t59A173C103889C4E586BA8A48EC2998A0A507A73_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.Users.InputUserAccountHandle */,
	{ NULL, BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_marshal_pinvoke, BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_marshal_pinvoke_back, BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_marshal_pinvoke_cleanup, NULL, NULL, &BufferedRumble_t7A941BB453F741E815107FD8E695139B3D83C9F1_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.XR.Haptics.BufferedRumble */,
	{ NULL, UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_marshal_pinvoke, UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_marshal_pinvoke_back, UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_marshal_pinvoke_cleanup, NULL, NULL, &UsageHint_tB3262EA272DF78A9AD2AC59FFDCB656A96B321CE_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.XR.UsageHint */,
	{ NULL, XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_marshal_pinvoke, XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_marshal_pinvoke_back, XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_marshal_pinvoke_cleanup, NULL, NULL, &XRFeatureDescriptor_tD0BAC2B841A5C3A7898EEE09016449E03C33D5FF_0_0_0 } /* UnityEngine.Experimental.Input.Plugins.XR.XRFeatureDescriptor */,
	{ NULL, InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshal_pinvoke, InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshal_pinvoke_back, InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshal_pinvoke_cleanup, NULL, NULL, &InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_0_0_0 } /* UnityEngine.Experimental.Input.Utilities.InternedString */,
	{ NULL, JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_marshal_pinvoke, JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_marshal_pinvoke_back, JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_marshal_pinvoke_cleanup, NULL, NULL, &JsonGraph_tE1C95CC29A4F220583877A791E3C127AB798CD34_0_0_0 } /* UnityEngine.Experimental.Input.Utilities.JsonGraph */,
	{ NULL, PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshal_pinvoke, PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshal_pinvoke_back, PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshal_pinvoke_cleanup, NULL, NULL, &PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_0_0_0 } /* UnityEngine.Experimental.Input.Utilities.PrimitiveValue */,
	{ NULL, PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshal_pinvoke, PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshal_pinvoke_back, PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshal_pinvoke_cleanup, NULL, NULL, &PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_0_0_0 } /* UnityEngine.Experimental.Input.Utilities.PrimitiveValueOrArray */,
	{ NULL, Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_marshal_pinvoke, Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_marshal_pinvoke_back, Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_marshal_pinvoke_cleanup, NULL, NULL, &Substring_t5F8038587E4EAC41924A2039731FD80E4A8E9AB6_0_0_0 } /* UnityEngine.Experimental.Input.Utilities.Substring */,
	{ NULL, TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshal_pinvoke, TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshal_pinvoke_back, TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshal_pinvoke_cleanup, NULL, NULL, &TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_0_0_0 } /* UnityEngine.Experimental.Input.Utilities.TypeTable */,
	{ NULL, WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke, WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_back, WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_cleanup, NULL, NULL, &WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_0_0_0 } /* UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo */,
	{ NULL, AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke, AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_back, AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_cleanup, NULL, NULL, &AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_0_0_0 } /* Cinemachine.AxisState */,
	{ NULL, Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke, Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_back, Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_cleanup, NULL, NULL, &Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_0_0_0 } /* Cinemachine.AxisState/Recentering */,
	{ NULL, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_back, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_cleanup, NULL, NULL, &CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_0_0_0 } /* Cinemachine.CameraState */,
	{ NULL, Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke, Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_back, Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_cleanup, NULL, NULL, &Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_0_0_0 } /* Cinemachine.CinemachineBlendListCamera/Instruction */,
	{ NULL, CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke, CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_back, CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_cleanup, NULL, NULL, &CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_0_0_0 } /* Cinemachine.CinemachineBlenderSettings/CustomBlend */,
	{ DelegatePInvokeWrapper_AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE, NULL, NULL, NULL, NULL, NULL, &AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_0_0_0 } /* Cinemachine.CinemachineCore/AxisInputDelegate */,
	{ NULL, EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke, EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_back, EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_cleanup, NULL, NULL, &EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_0_0_0 } /* Cinemachine.CinemachineImpulseManager/EnvelopeDefinition */,
	{ NULL, CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke, CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_back, CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_cleanup, NULL, NULL, &CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_0_0_0 } /* Cinemachine.CinemachineInputAxisDriver */,
	{ NULL, Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke, Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_back, Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_cleanup, NULL, NULL, &Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_0_0_0 } /* Cinemachine.CinemachineStateDrivenCamera/Instruction */,
	{ NULL, Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke, Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_back, Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_cleanup, NULL, NULL, &Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_0_0_0 } /* Cinemachine.CinemachineTargetGroup/Target */,
	{ NULL, AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke, AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_back, AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_cleanup, NULL, NULL, &AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_0_0_0 } /* Cinemachine.CinemachineTrackedDolly/AutoDolly */,
	{ NULL, ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke, ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_back, ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_cleanup, NULL, NULL, &ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_0_0_0 } /* Cinemachine.CinemachineTriggerAction/ActionSettings */,
	{ NULL, TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke, TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_back, TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_cleanup, NULL, NULL, &TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_0_0_0 } /* Cinemachine.CinemachineVirtualCameraBase/TransitionParams */,
	{ NULL, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_back, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_cleanup, NULL, NULL, &LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_0_0_0 } /* Cinemachine.LensSettings */,
	{ NULL, NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke, NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_back, NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_cleanup, NULL, NULL, &NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_0_0_0 } /* Cinemachine.NoiseSettings/NoiseParams */,
	{ NULL, TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke, TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_back, TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_cleanup, NULL, NULL, &TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_0_0_0 } /* Cinemachine.NoiseSettings/TransformNoiseParams */,
	{ NULL, ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_marshal_pinvoke, ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_marshal_pinvoke_back, ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_marshal_pinvoke_cleanup, NULL, NULL, &ClipInfo_t2EA047769A7D6463E1FF095E1A065445A4B7CE91_0_0_0 } /* Cinemachine.Timeline.CinemachineMixer/ClipInfo */,
	{ DelegatePInvokeWrapper_OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72, NULL, NULL, NULL, NULL, NULL, &OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72_0_0_0 } /* Cinemachine.Utility.CinemachineDebug/OnGUIDelegate */,
	{ NULL, GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_marshal_pinvoke, GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_marshal_pinvoke_back, GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_marshal_pinvoke_cleanup, NULL, NULL, &GameplayActions_t83A77E8F3D2F0EF0E4052CAEC923E09529B735D8_0_0_0 } /* Player_controls/GameplayActions */,
	NULL,
};
