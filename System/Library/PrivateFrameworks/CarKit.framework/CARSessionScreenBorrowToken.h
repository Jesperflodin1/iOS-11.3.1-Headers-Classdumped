/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CARSession, NSString;

@interface CARSessionScreenBorrowToken : NSObject {

	CARSession* _session;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,__weak,readonly) CARSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * client;                   //@synthesize client=_client - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(CARSession *)session;
-(NSString *)reason;
-(id)initWithSession:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
-(NSString *)client;
@end

