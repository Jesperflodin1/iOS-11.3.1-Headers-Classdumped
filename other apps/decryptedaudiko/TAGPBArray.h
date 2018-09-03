//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface TAGPBArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    int _valueType;
    unsigned long long _capacity;
    unsigned long long _count;
    char *_data;
}

+ (id)arrayWithInt32s:(int)arg1;
+ (id)arrayWithInt32:(int)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithArray:(id)arg1 valueType:(int)arg2;
+ (id)arrayWithValues:(const void *)arg1 count:(unsigned long long)arg2 valueType:(int)arg3;
+ (id)arrayWithValueType:(int)arg1;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) int valueType; // @synthesize valueType=_valueType;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)initWithInt32:(int)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithArray:(id)arg1 valueType:(int)arg2;
- (id)initWithValues:(const void *)arg1 count:(unsigned long long)arg2 valueType:(int)arg3;
- (id)initWithValueType:(int)arg1;
- (id)arrayByAppendingArray:(id)arg1;
- (id)arrayWithConversion:(CDUnknownBlockType)arg1;
- (id)array;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (float)floatAtIndex:(unsigned long long)arg1;
- (unsigned long long)uint64AtIndex:(unsigned long long)arg1;
- (long long)int64AtIndex:(unsigned long long)arg1;
- (unsigned int)uint32AtIndex:(unsigned long long)arg1;
- (int)int32AtIndex:(unsigned long long)arg1;
- (_Bool)boolAtIndex:(unsigned long long)arg1;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)enumerateInt32sUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) const void *data;
- (unsigned long long)hash;
- (id)initWithCount:(unsigned long long)arg1 valueType:(int)arg2;
- (CDUnion_c05604a2)valueAtIndex:(unsigned long long)arg1;

@end

