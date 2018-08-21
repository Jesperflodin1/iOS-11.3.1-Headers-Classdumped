/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TKTLVRecord : NSObject {

	unsigned long long _tag;
	NSData* _value;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned long long tag;              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSData * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
+(id)recordFromData:(id)arg1 ;
+(id)parseFromDataSource:(id)arg1 ;
+(id)sequenceOfRecordsFromData:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(NSData *)value;
-(unsigned long long)tag;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3 ;
@end

