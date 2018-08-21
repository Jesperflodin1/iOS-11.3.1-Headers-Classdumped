/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DATestAutomation : NSObject {

	BOOL _testAutomationEnabled;

}

@property (assign,nonatomic) BOOL testAutomationEnabled;              //@synthesize testAutomationEnabled=_testAutomationEnabled - In the implementation block
+(id)sharedInstance;
+(void)postConfiguration:(id)arg1 ;
+(void)postInteractiveTestEvent:(id)arg1 info:(id)arg2 ;
-(id)init;
-(BOOL)testAutomationEnabled;
-(void)setTestAutomationEnabled:(BOOL)arg1 ;
@end

