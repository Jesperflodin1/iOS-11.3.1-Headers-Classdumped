/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCListener, DiagnosticsServiceImpl, NSObject;

@interface DiagnosticsTransport : NSObject {

	NSXPCListener* listener;
	DiagnosticsServiceImpl* service;
	NSObject*<OS_dispatch_queue> transport_queue;

}
+(id)sharedInstance;
+(void)shutdown;
+(void)setListeningPort:(const char*)arg1 ;
-(id)init;
-(void)shutdown;
-(void)setListeningPort:(const char*)arg1 ;
@end

