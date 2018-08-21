/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardAssertionManagerDelegate.h>
#import <libobjc.A.dylib/TIKeyboardActivityControlling.h>

@protocol OS_dispatch_source;
@class NSObject, NSTimer, NSHashTable, NSString;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling> {

	BOOL _isDirty;
	BOOL _hadRecentActivity;
	BOOL _hasBackgroundActivity;
	unsigned long long _activityState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	long long _inactiveMemoryPressureCount;
	NSTimer* _inactivityTimer;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSTimer * inactivityTimer;                       //@synthesize inactivityTimer=_inactivityTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                       //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long activityState; 
+(id)sharedController;
+(void)setSharedController:(id)arg1 ;
+(id)singletonInstance;
+(double)keyboardIdleTimeoutInterval;
+(double)defaultKeyboardIdleTimeoutInterval;
+(void)setKeyboardIdleTimeoutInterval:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(NSHashTable *)observers;
-(void)addActivityObserver:(id)arg1 ;
-(void)removeActivityObserver:(id)arg1 ;
-(unsigned long long)activityState;
-(void)keyboardAssertionsDidChange;
-(void)backgroundActivityAssertionsDidChange;
-(void)notifyTransitionWithContext:(id)arg1 ;
-(void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(id)createMemoryPressureSource;
-(void)handleMemoryStatusPressure:(unsigned long long)arg1 ;
-(unsigned long long)getExcessMemoryInBytes;
-(void)updateActivityState;
-(void)keyboardAssertionsDidChange:(id)arg1 ;
-(void)keyboardBackgroundActivityAssertionsDidChange:(id)arg1 ;
-(void)touchInactivityTimer;
-(void)inactivityTimerFired:(id)arg1 ;
-(void)setKeyboardDirtyIfNecessary;
-(BOOL)shouldBecomeDirty;
-(void)setKeyboardCleanIfNecessary;
-(BOOL)shouldBecomeClean;
-(NSTimer *)inactivityTimer;
-(void)setInactivityTimer:(NSTimer *)arg1 ;
@end

