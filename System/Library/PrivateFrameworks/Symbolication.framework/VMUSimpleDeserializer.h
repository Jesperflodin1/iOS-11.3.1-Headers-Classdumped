/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	NSData* _data;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned)deserialize32;
-(unsigned long long)deserialize64;
-(id)copyDeserializedString;
-(id)copyDeserializedStringWithID:(unsigned)arg1 ;
-(void)skipFields:(unsigned)arg1 ;
-(const char*)copyDeserializedNullTerminatedBytes;
-(unsigned*)_deserializeValues:(unsigned)arg1 ;
@end

