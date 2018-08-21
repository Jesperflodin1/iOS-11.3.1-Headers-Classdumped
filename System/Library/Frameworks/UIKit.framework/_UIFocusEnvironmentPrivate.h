/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>
@property (getter=_parentFocusEnvironment,nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@optional
-(void)_setNeedsNonDeferredFocusUpdate;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_reversesLinearFocusWrapping;
-(long long)_preferredFocusMovementStyle;
-(id)_linearFocusMovementSequences;

@required
-(id)_parentFocusEnvironment;

@end

