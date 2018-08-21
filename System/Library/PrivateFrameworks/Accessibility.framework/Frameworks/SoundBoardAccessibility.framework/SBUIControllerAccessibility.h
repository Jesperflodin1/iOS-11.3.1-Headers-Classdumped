/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/SoundBoardAccessibility.framework/SoundBoardAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundBoardAccessibility/__SBUIControllerAccessibility_super.h>

@interface SBUIControllerAccessibility : __SBUIControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_updateVoiceOverVisualizationState;
-(BOOL)hidInterfaceButton:(unsigned long long)arg1 changedDownState:(BOOL)arg2 heldState:(BOOL)arg3 timestamp:(unsigned long long)arg4 ;
-(void)hidInterfaceButton:(unsigned long long)arg1 touchMightHaveBegunAtTime:(unsigned long long)arg2 ;
-(void)hidInterfaceButton:(unsigned long long)arg1 registeredTapAtTime:(unsigned long long)arg2 ;
-(void)hidInterfaceButton:(unsigned long long)arg1 beganHoldAtTime:(unsigned long long)arg2 ;
-(void)hidInterfaceButton:(unsigned long long)arg1 endedHoldAtTime:(unsigned long long)arg2 ;
-(void)hidInterfaceCancelledEventAtTime:(unsigned long long)arg1 ;
-(id)_accessibilityHysteresisTimer;
-(void)_accessibilitySetHysteresisTimer:(id)arg1 ;
-(void)_accessibilitySetHysteresisLongPressTimer:(id)arg1 ;
-(void)_accessibilitySetCoalesceTimer:(id)arg1 ;
-(void)_accessibilitySetTapAssistanceTimer:(id)arg1 ;
-(unsigned long long)_accessibilityTapAssistanceButton;
-(void)_accessibilitySetTapAssistanceButton:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityHoldButton;
-(void)_accessibilitySetHoldButton:(unsigned long long)arg1 ;
-(void)_accessibilitySetButtonLongHeld:(BOOL)arg1 ;
-(unsigned long long)_accessibilitySelectedButton;
-(BOOL)_accessibilityButtonLongHeld;
-(void)_accessibilitySetButtonHeld:(BOOL)arg1 ;
-(id)_accessibilityHysteresisLongPressTimer;
-(BOOL)_accessibilityButtonHeld;
-(id)_accessibilityCoalesceTimer;
-(void)_accessibilitySetSelectedButton:(unsigned long long)arg1 ;
-(BOOL)SBUIStateStructValidated;
-(void)updateLEDBehavior:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)_accessibilityButtonTapCount;
-(void)_accessibilitySetButtonTapCount:(unsigned long long)arg1 ;
-(id)_accessibilityTapAssistanceTimer;
-(void)_accessibilityHidInterfaceButton:(unsigned long long)arg1 changedAtTimestamp:(unsigned long long)arg2 ;
@end

