/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class NSString;

@interface SBSAssertion : NSObject {

	NSString* _assertionName;
	NSString* _reason;
	unsigned _port;
	opaque_pthread_mutex_t _lock;

}

@property (nonatomic,copy,readonly) NSString * assertionName;              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
-(NSString *)assertionName;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(NSString *)reason;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned)arg3 ;
@end

