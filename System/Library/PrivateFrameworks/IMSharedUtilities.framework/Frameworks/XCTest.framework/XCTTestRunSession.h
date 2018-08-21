/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XCTTestRunSessionDelegate;
@class XCTestConfiguration;

@interface XCTTestRunSession : NSObject {

	XCTestConfiguration* _testConfiguration;
	id<XCTTestRunSessionDelegate> _delegate;

}

@property (retain) XCTestConfiguration * testConfiguration;              //@synthesize testConfiguration=_testConfiguration - In the implementation block
@property (assign) id<XCTTestRunSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(XCTestConfiguration *)testConfiguration;
-(id)initWithTestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(BOOL)runTestsAndReturnError:(id*)arg1 ;
-(void)setTestConfiguration:(XCTestConfiguration *)arg1 ;
-(id)suspendAppSleep;
-(BOOL)_preTestingInitialization;
-(void)resumeAppSleep:(id)arg1 ;
-(id<XCTTestRunSessionDelegate>)delegate;
-(void)setDelegate:(id<XCTTestRunSessionDelegate>)arg1 ;
@end

