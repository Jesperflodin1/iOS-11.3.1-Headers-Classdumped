/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUAbstractStorage.h>

@interface _NUAbstractBufferStorage : _NUAbstractStorage {

	long long _rowBytes;
	const void* _bytes;
	void* _mutableBytes;

}

@property (readonly) long long sizeInBytes; 
@property (readonly) long long rowBytes;                 //@synthesize rowBytes=_rowBytes - In the implementation block
@property (readonly) const void* bytes;                  //@synthesize bytes=_bytes - In the implementation block
@property (readonly) void* mutableBytes;                 //@synthesize mutableBytes=_mutableBytes - In the implementation block
-(const void*)bytes;
-(void*)mutableBytes;
-(const void*)bytesAtPoint:(SCD_Struct_NU5)arg1 ;
-(void*)mutableBytesAtPoint:(SCD_Struct_NU5)arg1 ;
-(long long)rowBytes;
-(long long)copyFromStorage:(id)arg1 region:(id)arg2 ;
-(long long)sizeInBytes;
@end

