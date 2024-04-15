#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000000E System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000000F TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000011 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000015 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001C TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000020 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000024 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000025 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000026 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000028 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002E System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000047 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000048 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000049 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004A System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000004B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000004D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000050 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000051 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000052 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000053 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000054 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000055 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000056 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000057 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000058 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000059 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000005A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000005B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000005C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000005D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000060 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000061 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000062 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000066 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000069 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000006A System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000006B System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000006C System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000006D System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006E System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006F System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000072 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000075 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000076 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000077 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000078 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000079 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000007A System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000007B System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000007C System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000007D T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007E System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[127] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[127] = 
{
	4413,
	4603,
	4603,
	4603,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[47] = 
{
	{ 0x02000004, { 81, 4 } },
	{ 0x02000005, { 85, 9 } },
	{ 0x02000006, { 96, 7 } },
	{ 0x02000007, { 105, 10 } },
	{ 0x02000008, { 117, 11 } },
	{ 0x02000009, { 131, 9 } },
	{ 0x0200000A, { 143, 12 } },
	{ 0x0200000B, { 158, 1 } },
	{ 0x0200000C, { 159, 2 } },
	{ 0x0200000D, { 161, 2 } },
	{ 0x0200000F, { 163, 3 } },
	{ 0x02000010, { 168, 5 } },
	{ 0x02000011, { 173, 7 } },
	{ 0x02000012, { 180, 3 } },
	{ 0x02000013, { 183, 7 } },
	{ 0x02000014, { 190, 4 } },
	{ 0x02000015, { 194, 21 } },
	{ 0x02000017, { 215, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 2 } },
	{ 0x0600000A, { 32, 1 } },
	{ 0x0600000B, { 33, 3 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 1 } },
	{ 0x0600000E, { 39, 7 } },
	{ 0x0600000F, { 46, 4 } },
	{ 0x06000010, { 50, 3 } },
	{ 0x06000011, { 53, 4 } },
	{ 0x06000012, { 57, 4 } },
	{ 0x06000013, { 61, 3 } },
	{ 0x06000014, { 64, 1 } },
	{ 0x06000015, { 65, 1 } },
	{ 0x06000016, { 66, 3 } },
	{ 0x06000017, { 69, 3 } },
	{ 0x06000018, { 72, 2 } },
	{ 0x06000019, { 74, 2 } },
	{ 0x0600001A, { 76, 5 } },
	{ 0x0600002A, { 94, 2 } },
	{ 0x0600002F, { 103, 2 } },
	{ 0x06000034, { 115, 2 } },
	{ 0x0600003A, { 128, 3 } },
	{ 0x0600003F, { 140, 3 } },
	{ 0x06000044, { 155, 3 } },
	{ 0x0600004F, { 166, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[217] = 
{
	{ (Il2CppRGCTXDataType)2, 2161 },
	{ (Il2CppRGCTXDataType)3, 9270 },
	{ (Il2CppRGCTXDataType)2, 3449 },
	{ (Il2CppRGCTXDataType)2, 2940 },
	{ (Il2CppRGCTXDataType)3, 15961 },
	{ (Il2CppRGCTXDataType)2, 2261 },
	{ (Il2CppRGCTXDataType)2, 2947 },
	{ (Il2CppRGCTXDataType)3, 16001 },
	{ (Il2CppRGCTXDataType)2, 2942 },
	{ (Il2CppRGCTXDataType)3, 15973 },
	{ (Il2CppRGCTXDataType)2, 2162 },
	{ (Il2CppRGCTXDataType)3, 9271 },
	{ (Il2CppRGCTXDataType)2, 3482 },
	{ (Il2CppRGCTXDataType)2, 2952 },
	{ (Il2CppRGCTXDataType)3, 16016 },
	{ (Il2CppRGCTXDataType)2, 2278 },
	{ (Il2CppRGCTXDataType)2, 2960 },
	{ (Il2CppRGCTXDataType)3, 16189 },
	{ (Il2CppRGCTXDataType)2, 2956 },
	{ (Il2CppRGCTXDataType)3, 16095 },
	{ (Il2CppRGCTXDataType)2, 758 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)3, 6402 },
	{ (Il2CppRGCTXDataType)2, 760 },
	{ (Il2CppRGCTXDataType)3, 50 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)2, 1320 },
	{ (Il2CppRGCTXDataType)3, 6410 },
	{ (Il2CppRGCTXDataType)2, 2664 },
	{ (Il2CppRGCTXDataType)3, 14395 },
	{ (Il2CppRGCTXDataType)3, 7142 },
	{ (Il2CppRGCTXDataType)2, 882 },
	{ (Il2CppRGCTXDataType)3, 1049 },
	{ (Il2CppRGCTXDataType)3, 1050 },
	{ (Il2CppRGCTXDataType)2, 2262 },
	{ (Il2CppRGCTXDataType)3, 9963 },
	{ (Il2CppRGCTXDataType)3, 19332 },
	{ (Il2CppRGCTXDataType)2, 990 },
	{ (Il2CppRGCTXDataType)3, 1798 },
	{ (Il2CppRGCTXDataType)2, 1619 },
	{ (Il2CppRGCTXDataType)2, 1718 },
	{ (Il2CppRGCTXDataType)3, 6408 },
	{ (Il2CppRGCTXDataType)3, 6409 },
	{ (Il2CppRGCTXDataType)3, 1799 },
	{ (Il2CppRGCTXDataType)2, 1933 },
	{ (Il2CppRGCTXDataType)2, 1491 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)2, 1709 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)2, 1710 },
	{ (Il2CppRGCTXDataType)3, 6403 },
	{ (Il2CppRGCTXDataType)2, 1934 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)2, 1711 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)2, 1493 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)2, 1712 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)2, 1713 },
	{ (Il2CppRGCTXDataType)3, 6404 },
	{ (Il2CppRGCTXDataType)2, 1140 },
	{ (Il2CppRGCTXDataType)2, 1590 },
	{ (Il2CppRGCTXDataType)2, 1591 },
	{ (Il2CppRGCTXDataType)2, 1707 },
	{ (Il2CppRGCTXDataType)3, 6401 },
	{ (Il2CppRGCTXDataType)2, 1589 },
	{ (Il2CppRGCTXDataType)2, 1706 },
	{ (Il2CppRGCTXDataType)3, 6400 },
	{ (Il2CppRGCTXDataType)2, 1490 },
	{ (Il2CppRGCTXDataType)2, 1597 },
	{ (Il2CppRGCTXDataType)2, 1489 },
	{ (Il2CppRGCTXDataType)3, 19259 },
	{ (Il2CppRGCTXDataType)3, 5715 },
	{ (Il2CppRGCTXDataType)2, 1208 },
	{ (Il2CppRGCTXDataType)2, 1593 },
	{ (Il2CppRGCTXDataType)2, 1708 },
	{ (Il2CppRGCTXDataType)2, 1807 },
	{ (Il2CppRGCTXDataType)3, 9272 },
	{ (Il2CppRGCTXDataType)3, 9274 },
	{ (Il2CppRGCTXDataType)2, 564 },
	{ (Il2CppRGCTXDataType)3, 9273 },
	{ (Il2CppRGCTXDataType)3, 9282 },
	{ (Il2CppRGCTXDataType)2, 2165 },
	{ (Il2CppRGCTXDataType)2, 2943 },
	{ (Il2CppRGCTXDataType)3, 15974 },
	{ (Il2CppRGCTXDataType)3, 9283 },
	{ (Il2CppRGCTXDataType)2, 1646 },
	{ (Il2CppRGCTXDataType)2, 1741 },
	{ (Il2CppRGCTXDataType)3, 6417 },
	{ (Il2CppRGCTXDataType)3, 19224 },
	{ (Il2CppRGCTXDataType)2, 2957 },
	{ (Il2CppRGCTXDataType)3, 16096 },
	{ (Il2CppRGCTXDataType)3, 9275 },
	{ (Il2CppRGCTXDataType)2, 2164 },
	{ (Il2CppRGCTXDataType)2, 2941 },
	{ (Il2CppRGCTXDataType)3, 15962 },
	{ (Il2CppRGCTXDataType)3, 6416 },
	{ (Il2CppRGCTXDataType)3, 9276 },
	{ (Il2CppRGCTXDataType)3, 19223 },
	{ (Il2CppRGCTXDataType)2, 2953 },
	{ (Il2CppRGCTXDataType)3, 16017 },
	{ (Il2CppRGCTXDataType)3, 9289 },
	{ (Il2CppRGCTXDataType)2, 2166 },
	{ (Il2CppRGCTXDataType)2, 2948 },
	{ (Il2CppRGCTXDataType)3, 16002 },
	{ (Il2CppRGCTXDataType)3, 10007 },
	{ (Il2CppRGCTXDataType)3, 4464 },
	{ (Il2CppRGCTXDataType)3, 6418 },
	{ (Il2CppRGCTXDataType)3, 4463 },
	{ (Il2CppRGCTXDataType)3, 9290 },
	{ (Il2CppRGCTXDataType)3, 19225 },
	{ (Il2CppRGCTXDataType)2, 2961 },
	{ (Il2CppRGCTXDataType)3, 16190 },
	{ (Il2CppRGCTXDataType)3, 9303 },
	{ (Il2CppRGCTXDataType)2, 2168 },
	{ (Il2CppRGCTXDataType)2, 2959 },
	{ (Il2CppRGCTXDataType)3, 16098 },
	{ (Il2CppRGCTXDataType)3, 9304 },
	{ (Il2CppRGCTXDataType)2, 1649 },
	{ (Il2CppRGCTXDataType)2, 1744 },
	{ (Il2CppRGCTXDataType)3, 6422 },
	{ (Il2CppRGCTXDataType)3, 6421 },
	{ (Il2CppRGCTXDataType)2, 2945 },
	{ (Il2CppRGCTXDataType)3, 15976 },
	{ (Il2CppRGCTXDataType)3, 19231 },
	{ (Il2CppRGCTXDataType)2, 2958 },
	{ (Il2CppRGCTXDataType)3, 16097 },
	{ (Il2CppRGCTXDataType)3, 9296 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)2, 2955 },
	{ (Il2CppRGCTXDataType)3, 16019 },
	{ (Il2CppRGCTXDataType)3, 6420 },
	{ (Il2CppRGCTXDataType)3, 6419 },
	{ (Il2CppRGCTXDataType)3, 9297 },
	{ (Il2CppRGCTXDataType)2, 2944 },
	{ (Il2CppRGCTXDataType)3, 15975 },
	{ (Il2CppRGCTXDataType)3, 19230 },
	{ (Il2CppRGCTXDataType)2, 2954 },
	{ (Il2CppRGCTXDataType)3, 16018 },
	{ (Il2CppRGCTXDataType)3, 9310 },
	{ (Il2CppRGCTXDataType)2, 2169 },
	{ (Il2CppRGCTXDataType)2, 2963 },
	{ (Il2CppRGCTXDataType)3, 16192 },
	{ (Il2CppRGCTXDataType)3, 10008 },
	{ (Il2CppRGCTXDataType)3, 4466 },
	{ (Il2CppRGCTXDataType)3, 6424 },
	{ (Il2CppRGCTXDataType)3, 6423 },
	{ (Il2CppRGCTXDataType)3, 4465 },
	{ (Il2CppRGCTXDataType)3, 9311 },
	{ (Il2CppRGCTXDataType)2, 2946 },
	{ (Il2CppRGCTXDataType)3, 15977 },
	{ (Il2CppRGCTXDataType)3, 19232 },
	{ (Il2CppRGCTXDataType)2, 2962 },
	{ (Il2CppRGCTXDataType)3, 16191 },
	{ (Il2CppRGCTXDataType)3, 6414 },
	{ (Il2CppRGCTXDataType)3, 6415 },
	{ (Il2CppRGCTXDataType)3, 6428 },
	{ (Il2CppRGCTXDataType)2, 3489 },
	{ (Il2CppRGCTXDataType)2, 1141 },
	{ (Il2CppRGCTXDataType)2, 763 },
	{ (Il2CppRGCTXDataType)3, 108 },
	{ (Il2CppRGCTXDataType)3, 14382 },
	{ (Il2CppRGCTXDataType)2, 2665 },
	{ (Il2CppRGCTXDataType)3, 14396 },
	{ (Il2CppRGCTXDataType)2, 883 },
	{ (Il2CppRGCTXDataType)3, 1051 },
	{ (Il2CppRGCTXDataType)3, 14388 },
	{ (Il2CppRGCTXDataType)3, 4441 },
	{ (Il2CppRGCTXDataType)2, 593 },
	{ (Il2CppRGCTXDataType)3, 14383 },
	{ (Il2CppRGCTXDataType)2, 2661 },
	{ (Il2CppRGCTXDataType)3, 1164 },
	{ (Il2CppRGCTXDataType)2, 917 },
	{ (Il2CppRGCTXDataType)2, 1177 },
	{ (Il2CppRGCTXDataType)3, 4447 },
	{ (Il2CppRGCTXDataType)3, 14384 },
	{ (Il2CppRGCTXDataType)3, 4436 },
	{ (Il2CppRGCTXDataType)3, 4437 },
	{ (Il2CppRGCTXDataType)3, 4435 },
	{ (Il2CppRGCTXDataType)3, 4438 },
	{ (Il2CppRGCTXDataType)2, 1173 },
	{ (Il2CppRGCTXDataType)2, 3536 },
	{ (Il2CppRGCTXDataType)3, 6412 },
	{ (Il2CppRGCTXDataType)3, 4440 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)3, 4439 },
	{ (Il2CppRGCTXDataType)2, 1495 },
	{ (Il2CppRGCTXDataType)2, 3485 },
	{ (Il2CppRGCTXDataType)2, 1620 },
	{ (Il2CppRGCTXDataType)2, 1719 },
	{ (Il2CppRGCTXDataType)3, 5733 },
	{ (Il2CppRGCTXDataType)2, 1217 },
	{ (Il2CppRGCTXDataType)3, 6949 },
	{ (Il2CppRGCTXDataType)3, 6950 },
	{ (Il2CppRGCTXDataType)3, 6955 },
	{ (Il2CppRGCTXDataType)2, 1815 },
	{ (Il2CppRGCTXDataType)3, 6952 },
	{ (Il2CppRGCTXDataType)3, 19951 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)3, 4454 },
	{ (Il2CppRGCTXDataType)1, 1567 },
	{ (Il2CppRGCTXDataType)2, 3497 },
	{ (Il2CppRGCTXDataType)3, 6951 },
	{ (Il2CppRGCTXDataType)1, 3497 },
	{ (Il2CppRGCTXDataType)1, 1815 },
	{ (Il2CppRGCTXDataType)2, 3552 },
	{ (Il2CppRGCTXDataType)2, 3497 },
	{ (Il2CppRGCTXDataType)3, 6956 },
	{ (Il2CppRGCTXDataType)3, 6954 },
	{ (Il2CppRGCTXDataType)3, 6953 },
	{ (Il2CppRGCTXDataType)2, 445 },
	{ (Il2CppRGCTXDataType)3, 4467 },
	{ (Il2CppRGCTXDataType)2, 573 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	127,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	47,
	s_rgctxIndices,
	217,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
