/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBKKeyValuePayloadPair.h>

@class NSString, NSData;

@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair> {

	NSString* _kvsKey;
	NSData* _kvsPayload;

}

@property (nonatomic,readonly) NSString * kvsKey;                   //@synthesize kvsKey=_kvsKey - In the implementation block
@property (nonatomic,readonly) NSData * kvsPayload;                 //@synthesize kvsPayload=_kvsPayload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2 ;
-(double)timestamp;
-(id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2 ;
-(NSString *)kvsKey;
-(NSData *)kvsPayload;
-(id)kvsValueDescription;
@end

