/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIForceLevelClassifierDelegate.h>
#import <UIKit/_UIExcludable.h>
#import <UIKit/_UITouchable.h>
#import <UIKit/_UIDraggable.h>

@protocol UIGestureRecognizerDelegate;
@class NSMutableArray, UIView, NSMutableSet, _UIForceLevelClassifier, _UITouchForceObservable, NSObservation, NSObservationSource, NSArray, NSString, UIGestureEnvironment, NSSet;

@interface UIGestureRecognizer : NSObject <_UIForceLevelClassifierDelegate, _UIExcludable, _UITouchable, _UIDraggable> {

	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldReceivePress : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateCanPrevent : 1;
		unsigned privateDelegateCanBePrevented : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned privateDelegateShouldReceivePress : 1;
		unsigned privateDelegateShouldRequireFailure : 1;
		unsigned privateDelegateShouldBeRequiredToFail : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned subclassShouldBeRequiredToFail : 1;
		unsigned hasSubclassDynamicFailureRequirements : 1;
		unsigned hasDelegateDynamicFailureRequirements : 1;
		unsigned subclassTouchesEstimatedPropertiesUpdated : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned delivered : 1;
		unsigned deliveredEndedOrCancelled : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
		unsigned willBeginAfterSatisfyingFailureRequirements : 1;
		unsigned requiresSystemGesturesToFail : 1;
		unsigned acceptsFailureRequirements : 1;
		unsigned requiresExclusiveTouchType : 1;
		unsigned initialTouchTypeIsValid : 1;
		unsigned forceRequirementSatisfied : 1;
		unsigned wantsDragEvents : 1;
		unsigned isDynamicGesture : 1;
		unsigned canExcludeWithActiveRequirements : 1;
	}  _gestureFlags;
	NSMutableArray* _targets;
	NSMutableArray* _delayedTouches;
	NSMutableArray* _delayedPresses;
	UIView* _view;
	double _lastTouchTimestamp;
	double _firstEventTimestamp;
	long long _state;
	long long _allowedTouchTypes;
	long long _initialTouchType;
	NSMutableSet* _internalActiveTouches;
	_UIForceLevelClassifier* _forceClassifier;
	long long _requiredPreviewForceState;
	_UITouchForceObservable* _touchForceObservable;
	NSObservation* _touchForceObservableAndClassifierObservation;
	NSMutableArray* _forceTargets;
	unsigned long long _forcePressCount;
	NSObservationSource* _beganObservable;
	NSMutableSet* _failureRequirements;
	NSMutableSet* _failureDependents;
	NSMutableSet* _activeEvents;
	BOOL _keepTouchesOnContinuation;
	id<UIGestureRecognizerDelegate> _delegate;
	NSArray* _allowedPressTypes;
	NSString* _name;
	UIGestureEnvironment* _gestureEnvironment;

}

@property (nonatomic,readonly) NSMutableSet * _pairedGestureIdentifiers; 
@property (assign,nonatomic) UIGestureEnvironment * gestureEnvironment;                                                                                    //@synthesize gestureEnvironment=_gestureEnvironment - In the implementation block
@property (nonatomic,readonly) NSSet * _failureRequirements; 
@property (nonatomic,readonly) NSSet * _failureDependents; 
@property (assign,setter=_setRequiresSystemGesturesToFail:,getter=_requiresSystemGesturesToFail,nonatomic) BOOL requiresSystemGesturesToFail; 
@property (nonatomic,readonly) double lastTouchTimestamp; 
@property (assign,setter=_setKeepTouchesOnContinuation:,nonatomic) BOOL _keepTouchesOnContinuation;                                                        //@synthesize keepTouchesOnContinuation=_keepTouchesOnContinuation - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic,__weak) id<UIGestureRecognizerDelegate> delegate;                                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) BOOL cancelsTouchesInView; 
@property (assign,nonatomic) BOOL delaysTouchesBegan; 
@property (assign,nonatomic) BOOL delaysTouchesEnded; 
@property (nonatomic,copy) NSArray * allowedTouchTypes; 
@property (nonatomic,copy) NSArray * allowedPressTypes;                                                                                                    //@synthesize allowedPressTypes=_allowedPressTypes - In the implementation block
@property (assign,nonatomic) BOOL requiresExclusiveTouchType; 
@property (nonatomic,readonly) unsigned long long numberOfTouches; 
@property (nonatomic,copy) NSString * name;                                                                                                                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldDefaultToTouches;
+(BOOL)_supportsTouchContinuation;
+(BOOL)_shouldUseLinearForceLevelClassifier;
+(BOOL)_shouldSupportStylusTouches;
-(id)init;
-(CGPoint)locationInView:(id)arg1 ;
-(id<UIGestureRecognizerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIGestureRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(UIView *)view;
-(void)setDelaysTouchesBegan:(BOOL)arg1 ;
-(long long)state;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setRequiresSystemGesturesToFail:(BOOL)arg1 ;
-(NSSet *)_failureDependents;
-(NSSet *)_failureRequirements;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(void)setState:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_isActive;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)ignoreTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)ignorePress:(id)arg1 forEvent:(id)arg2 ;
-(void)reset;
-(void)setView:(UIView *)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(void)setAllowedTouchTypes:(NSArray *)arg1 ;
-(void)setAllowedPressTypes:(NSArray *)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_requiresSystemGesturesToFail;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelaysTouchesEnded:(BOOL)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(unsigned long long)numberOfTouches;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(BOOL)_isRecognized;
-(BOOL)_isDirty;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)_forcePressCount;
-(long long)currentPreviewForceState;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(id)stringValue;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(UIGestureEnvironment *)gestureEnvironment;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(id)_allActiveTouches;
-(id)_defaultAllowedTouchTypes;
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2 ;
-(long long)_currentForceLevel;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(BOOL)_delegateShouldReceivePress:(id)arg1 ;
-(NSArray *)allowedPressTypes;
-(void)_setForceLevelClassifier:(id)arg1 ;
-(void)setRequiredPreviewForceState:(long long)arg1 ;
-(void)_addForceTarget:(id)arg1 action:(SEL)arg2 ;
-(long long)requiredPreviewForceState;
-(id)_touchForceObservable;
-(void)_resetGestureRecognizer;
-(void)_setAcceptsFailureRequiments:(BOOL)arg1 ;
-(BOOL)delaysTouchesBegan;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)_pairedGestureIdentifiersAndCreate:(BOOL)arg1 ;
-(NSMutableSet *)_pairedGestureIdentifiers;
-(void)_removeForceTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_cancelRecognition;
-(id)_briefDescription;
-(void)_requiredGestureRecognizerCompleted:(id)arg1 ;
-(void)setGestureEnvironment:(UIGestureEnvironment *)arg1 ;
-(void)_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_keepTouchesOnContinuation;
-(void)_removeTouch:(id)arg1 forEvent:(id)arg2 byCancellingTouches:(BOOL)arg3 ;
-(void)_addTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2 ;
-(void)_setDirty;
-(void)_enqueueDelayedTouchToSend:(id)arg1 ;
-(void)_enqueueDelayedPressToSend:(id)arg1 ;
-(id)_delayedTouches;
-(long long)_depthFirstViewCompare:(id)arg1 ;
-(BOOL)_requiresGestureRecognizerToFail:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_needsDynamicFailureRequirementForGestureRecognizer:(id)arg1 ;
-(BOOL)_needsDynamicDependentRequirementForGestureRecognizer:(id)arg1 ;
-(void)_touchWasCancelled:(id)arg1 ;
-(void)_pressWasCancelled:(id)arg1 ;
-(void)_enqueueDelayedTouchesAndPressesToSend;
-(void)_invalidateInitialTouchType;
-(BOOL)_inForceCapableEnvironment;
-(void)_ensureForceObservationChain;
-(BOOL)_wantsPartialTouchSequences;
-(BOOL)_shouldBegin;
-(void)_updateForceClassifierWithEvent:(id)arg1 ;
-(void)_registerTouches:(id)arg1 forEstimationUpdatesWithEvent:(id)arg2 ;
-(void)_removeTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)_delayTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)_delayPress:(id)arg1 forEvent:(id)arg2 ;
-(void)_delayTouchesForEvent:(id)arg1 inPhase:(long long)arg2 ;
-(void)_delayPressesForEvent:(id)arg1 inPhase:(long long)arg2 ;
-(void)_enqueueDelayedTouchesToSend;
-(void)_enqueueDelayedPressesToSend;
-(void)_clearDelayedTouches;
-(void)_clearDelayedPresses;
-(BOOL)_forceRequirementSatisfied;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)_delayTouchesForEventIfNeeded:(id)arg1 ;
-(void)_delayPressesForEventIfNeeded:(id)arg1 ;
-(void)_ignoreActiveEvents;
-(BOOL)requiresExclusiveTouchType;
-(BOOL)_touchTypeIsAllowed:(id)arg1 ;
-(BOOL)_delegateShouldReceiveTouch:(id)arg1 ;
-(void)_setInitialTouchType:(long long)arg1 ;
-(BOOL)_hasUnmetRequirementsPreventingExclusion;
-(BOOL)_delegateCanBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_delegateCanPreventGestureRecognizer:(id)arg1 ;
-(void)_addFailureDependent:(id)arg1 ;
-(void)_removeFailureDependent:(id)arg1 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)_requiredPreviewForceStateSatisfiedByForceLevel:(long long)arg1 ;
-(id)_rawBriefDescription;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(BOOL)arg3 ;
-(BOOL)cancelsTouchesInView;
-(BOOL)delaysTouchesEnded;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4 ;
-(BOOL)_canExcludeOtherExcludables;
-(BOOL)_isExcludedByExcludable:(id)arg1 ;
-(void)_exclude;
-(void)_draggingEnteredWithEvent:(id)arg1 ;
-(void)_draggingUpdatedWithEvent:(id)arg1 ;
-(void)_draggingExitedWithEvent:(id)arg1 ;
-(void)_draggingEndedWithEvent:(id)arg1 ;
-(BOOL)_wantsDragEvents;
-(void)_setWantsDragEvents:(BOOL)arg1 ;
-(void)setRequiresExclusiveTouchType:(BOOL)arg1 ;
-(double)lastTouchTimestamp;
-(long long)_exclusiveDirectionalPressAxis;
-(void)transferTouchesFromGestureRecognizer:(id)arg1 ;
-(void)addTouchesFromGestureRecognizer:(id)arg1 ;
-(CGPoint)_centroidOfTouches:(id)arg1 excludingEnded:(BOOL)arg2 ;
-(double)_distanceBetweenTouches:(id)arg1 ;
-(BOOL)_shouldReceiveDragEvent:(id)arg1 ;
-(id)_beganObservable;
-(void)removeFailureRequirement:(id)arg1 ;
-(BOOL)_acceptsFailureRequirements;
-(void)_setCanExcludeWithActiveRequirements:(BOOL)arg1 ;
-(BOOL)_canExcludeWithActiveRequirements;
-(long long)_requiredForceLevel;
-(void)_setRequiredForceLevel:(long long)arg1 ;
-(id)_forceLevelClassifier;
-(NSArray *)allowedTouchTypes;
-(id)_defaultAllowedPressTypes;
-(void)_setKeepTouchesOnContinuation:(BOOL)arg1 ;
-(void)_detach;
@end

