/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:58:02 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
#import <AccessibilityUtilities/AXEventProcessor.h>

@protocol OS_dispatch_queue, GAXEventProcessorDelegate;
@class AXDispatchTimer, NSObject, AXEventRepresentation;

@interface GAXEventProcessor : AXEventProcessor {

	BOOL _sentCancelEventForSnarfedTouch;
	AXDispatchTimer* _sideButtonActionTimer;
	BOOL _lockButtonIsDown;
	BOOL _homeButtonIsDown;
	double _lastPrevalidatedLockButtonUpTime;
	double _lastPrevalidatedHomeButtonUpTime;
	BOOL _blockedLastLockButtonDownEvent;
	BOOL _blockedLastHomeButtonDownEvent;
	BOOL _forceDisableLockButton;
	NSObject*<OS_dispatch_queue> _sideButtonActionQueue;
	double _lastD2XSideButtonUpTime;
	unsigned long long _sideButtonPresses;
	AXEventRepresentation* _savedSideDown;
	id<GAXEventProcessorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GAXEventProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)_handleSystemEvent:(id)arg1 ;
-(void)_updateLocalEventStateWithEvent:(id)arg1 ;
-(BOOL)_prevalidateEvent:(id)arg1 ;
-(BOOL)_handleGAXWorkspaceSystemEvent:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_handleGAXActiveSystemEvent:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEventIsForAccessibilityFeatures:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(void)_postLockButtonPressWithDown:(id)arg1 up:(id)arg2 ;
-(BOOL)_eventLooksLikeVolumeButtonPress:(id)arg1 ;
-(BOOL)_shouldSwallowTouchEvent:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEventIsForAssistiveTouch:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEventIsForTripleClickSheet:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEventIsForVoiceOverItemChooser:(id)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_touchEvent:(id)arg1 isForWindowWithContextID:(unsigned)arg2 gaxState:(SCD_Struct_GA1)arg3 ;
-(BOOL)_allowingAllTouchByOverride:(SCD_Struct_GA1)arg1 ;
-(BOOL)_ignoringAllTouchByOverride:(SCD_Struct_GA1)arg1 ;
-(void)beginBlockingHID;
-(void)endBlockingHID;
-(void)cancelCurrentTouches;
-(void)setForceDisableLockButton:(BOOL)arg1 ;
-(id)init;
-(id<GAXEventProcessorDelegate>)delegate;
-(void)setDelegate:(id<GAXEventProcessorDelegate>)arg1 ;
@end
