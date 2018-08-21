/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributeDescription;

@interface NSSQLBindVariable : NSObject {

	int _cd_rc;
	unsigned char _sqlType;
	unsigned _index;
	unsigned _flags;
	id _value;
	NSAttributeDescription* _attributeDescription;
	long long _int64;

}
-(id)attributeDescription;
-(unsigned char)sqlType;
-(id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2 ;
-(id)initWithUnsignedInt:(unsigned)arg1 sqlType:(unsigned char)arg2 ;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3 ;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3 allowCoercion:(BOOL)arg4 ;
-(void)setInt64:(long long)arg1 ;
-(void)setUnsignedInt:(unsigned)arg1 ;
-(long long)int64;
-(unsigned)unsignedInt;
-(void)setSQLType:(unsigned char)arg1 ;
-(BOOL)hasObjectValue;
-(BOOL)allowsCoercion;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(void)setValue:(id)arg1 ;
-(id)value;
-(BOOL)_isDeallocating;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)index;
-(BOOL)_tryRetain;
@end

