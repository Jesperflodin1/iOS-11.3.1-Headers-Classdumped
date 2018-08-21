/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol HDWatchAppStateMonitorDelegate;
@class NSString;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver> {

	BOOL _appIsActive;
	id<HDWatchAppStateMonitorDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL appIsActive;                                              //@synthesize appIsActive=_appIsActive - In the implementation block
@property (assign,nonatomic,__weak) id<HDWatchAppStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1 ;
-(id<HDWatchAppStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<HDWatchAppStateMonitorDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)appIsActive;
-(id)initWithFirstPartyWorkoutApp;
@end

