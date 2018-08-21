/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIMotionEffectEventConsumer.h>

@class _UIAssociationTable, _UILazyMapTable, NSMapTable, _UIMotionEffectEventProvider, _UIMotionEffectEvent, CADisplayLink, NSMutableSet, _UIMotionEffectEngineLogger, NSArray, NSString;

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {

	_UIAssociationTable* _effectViewAssociationTable;
	_UILazyMapTable* _analyzerSettingsToAnalyzers;
	NSMapTable* _analyzersToEffects;
	NSMapTable* _suspendedViewsToEffectSets;
	_UIMotionEffectEventProvider* _eventProvider;
	BOOL _hasReceivedAtLeastOneEventSinceStarting;
	_UIMotionEffectEvent* _pendingEvent;
	os_unfair_lock_s _pendingEventLock;
	CADisplayLink* _displayLink;
	BOOL _generatingUpdates;
	NSMutableSet* _suspendReasons;
	_UIMotionEffectEvent* _lastEvent;
	BOOL _slowUpdatesEnabled;
	BOOL _pendingSlowDown;
	long long _eventProviderStatus;
	BOOL _allAnalyzersAreCentered;
	BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
	BOOL _isPendingReset;
	_UIMotionEffectEngineLogger* _motionLogger;
	int _thermalNotificationToken;
	int _screenDimmingNotificationToken;
	long long _targetInterfaceOrientation;

}

@property (assign,setter=_setTargetInterfaceOrientation:,nonatomic) long long _targetInterfaceOrientation;              //@synthesize targetInterfaceOrientation=_targetInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * suspensionReasons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_motionEffectsSupported;
+(BOOL)_motionEffectsEnabled;
+(Class)_eventProviderClass;
+(Class)_analyzerClass;
-(id)init;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)beginSuspendingMotionEffectsForView:(id)arg1 ;
-(void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(BOOL)_motionEffect:(id)arg1 belongsToView:(id)arg2 ;
-(void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2 ;
-(BOOL)_hasMotionEffectsForView:(id)arg1 ;
-(void)endSuspendingMotionEffectsForView:(id)arg1 ;
-(void)_unregisterAllMotionEffectsForView:(id)arg1 ;
-(void)beginSuspendingForReason:(id)arg1 ;
-(void)endSuspendingForReason:(id)arg1 ;
-(void)resetMotionAnalysis;
-(id)_motionEffectsForView:(id)arg1 ;
-(BOOL)_motionEffectsAreSuspendedForView:(id)arg1 ;
-(void)_setTargetInterfaceOrientation:(long long)arg1 ;
-(long long)_targetInterfaceOrientation;
-(NSArray *)suspensionReasons;
-(BOOL)_isSuspended;
-(void)updateWithEvent:(id)arg1 ;
-(void)_startOrStopGeneratingUpdates;
-(void)_stopGeneratingUpdates;
-(void)_unapplyAllEffects;
-(void)_updateDisplayLinkInterval;
-(void)_toggleSlowUpdates;
-(void)_applyEffectsFromAnalyzer:(id)arg1 ;
-(void)_handleLatestDeviceMotion;
-(BOOL)_shouldGenerateUpdates;
-(void)_startGeneratingUpdates;
-(void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2 ;
-(void)updateEventProviderStatus:(long long)arg1 ;
@end

