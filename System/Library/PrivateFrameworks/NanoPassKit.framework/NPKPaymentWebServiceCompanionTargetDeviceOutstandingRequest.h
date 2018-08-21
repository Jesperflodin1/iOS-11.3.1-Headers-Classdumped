/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface NPKPaymentWebServiceCompanionTargetDeviceOutstandingRequest : NSObject {

	NSString* _messageIdentifier;
	id _completionHandler;
	/*^block*/id _errorHandler;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (nonatomic,copy) NSString * messageIdentifier;                              //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
@end

