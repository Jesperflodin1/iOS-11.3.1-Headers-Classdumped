/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIKeyboardUsageTracking : NSObject
+(void)appAutofillDetectedIncrement;
+(void)showLowercaseKeyplanePreference:(BOOL)arg1 ;
+(void)keyboardExtensionPrimaryLanguageChanged;
+(void)appAutofillDetectedDecrement;
+(void)appAutofillFilled;
+(void)appAutofillExtraKeyTapped;
+(void)appAutofillCredentialFromSafariUI;
+(void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2 ;
+(void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2 ;
+(void)keyboardGestureTwoFingerTap:(BOOL)arg1 withTapCount:(int)arg2 ;
+(void)keyboardGestureOneFingerForcePan:(BOOL)arg1 ;
+(void)keyboardGestureOneFingerForcePress:(BOOL)arg1 withPressCount:(int)arg2 ;
+(void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(BOOL)arg2 index:(unsigned long long)arg3 ;
+(void)keyboardGestureSelectedPredictiveInputCandidate;
+(void)showCharacterPreviewPreference:(BOOL)arg1 ;
+(void)panAlternateKeyFlickDownCount;
+(void)dualStringsKeyFlickUpCount;
+(void)singleStringKeyFlickUpCount;
+(void)keyboardReachabilityDistribution:(double)arg1 ;
+(void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1 ;
+(void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1 ;
+(void)normalPunctuationKeyCount;
+(void)undoKeyCount;
+(void)redoKeyCount;
+(void)restAndTypeTriggered;
+(void)predictionViewState:(BOOL)arg1 forInputMode:(id)arg2 ;
+(void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2 ;
+(void)keyboardExtensionCrashed;
+(void)keyboardExtensionsOnDevice;
+(void)inputSwitcherSetPredictionPreference:(BOOL)arg1 ;
+(void)keyboardGestureSetPredictionPreference:(BOOL)arg1 ;
+(void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2 ;
@end

