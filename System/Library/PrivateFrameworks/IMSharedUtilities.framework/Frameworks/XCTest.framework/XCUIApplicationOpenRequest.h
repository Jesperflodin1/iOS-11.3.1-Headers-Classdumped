/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface XCUIApplicationOpenRequest : NSObject {

	BOOL _activateIfRunning;
	BOOL _terminateIfRunning;
	BOOL _usePlatformLauncher;
	NSArray* _launchArguments;
	NSDictionary* _environmentVariables;

}

@property (assign) BOOL activateIfRunning;                         //@synthesize activateIfRunning=_activateIfRunning - In the implementation block
@property (assign) BOOL terminateIfRunning;                        //@synthesize terminateIfRunning=_terminateIfRunning - In the implementation block
@property (assign) BOOL usePlatformLauncher;                       //@synthesize usePlatformLauncher=_usePlatformLauncher - In the implementation block
@property (copy) NSArray * launchArguments;                        //@synthesize launchArguments=_launchArguments - In the implementation block
@property (copy) NSDictionary * environmentVariables;              //@synthesize environmentVariables=_environmentVariables - In the implementation block
+(id)activationRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(BOOL)arg3 ;
+(id)launchRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(BOOL)arg3 ;
+(id)activationRequestFromLaunchRequest:(id)arg1 ;
-(void)setActivateIfRunning:(BOOL)arg1 ;
-(void)setTerminateIfRunning:(BOOL)arg1 ;
-(void)setUsePlatformLauncher:(BOOL)arg1 ;
-(void)setLaunchArguments:(NSArray *)arg1 ;
-(void)setEnvironmentVariables:(NSDictionary *)arg1 ;
-(NSArray *)launchArguments;
-(BOOL)usePlatformLauncher;
-(BOOL)activateIfRunning;
-(BOOL)terminateIfRunning;
-(NSDictionary *)environmentVariables;
@end
