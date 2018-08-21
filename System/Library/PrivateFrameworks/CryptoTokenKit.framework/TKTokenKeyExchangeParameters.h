/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject {

	long long _requestedSize;
	NSData* _sharedInfo;

}

@property (readonly) long long requestedSize;               //@synthesize requestedSize=_requestedSize - In the implementation block
@property (copy,readonly) NSData * sharedInfo;              //@synthesize sharedInfo=_sharedInfo - In the implementation block
-(id)initWithXpcDictionary:(id)arg1 ;
-(long long)requestedSize;
-(NSData *)sharedInfo;
@end

