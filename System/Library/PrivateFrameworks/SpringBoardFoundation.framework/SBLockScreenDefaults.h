/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL limitFeaturesForRemoteLock; 
@property (nonatomic,readonly) BOOL showLegalText; 
@property (assign,nonatomic) BOOL showAuthenticationEngineeringUI; 
@property (assign,nonatomic) BOOL showSupervisionText; 
@property (assign,nonatomic) BOOL showQuickNoteFingerGestureRecognizer; 
@property (assign,nonatomic) BOOL forceWakeToMaps; 
@property (assign,nonatomic) double nowPlayingTimeout; 
@property (assign,nonatomic) BOOL weDontNeedNoEducation; 
-(void)setShowLegalText:(BOOL)arg1 ;
-(BOOL)showLegalText;
-(void)setShowSupervisionText:(BOOL)arg1 ;
-(BOOL)showSupervisionText;
-(void)setNowPlayingTimeout:(double)arg1 ;
-(double)nowPlayingTimeout;
-(void)setShowQuickNoteFingerGestureRecognizer:(BOOL)arg1 ;
-(BOOL)showQuickNoteFingerGestureRecognizer;
-(void)setShowAuthenticationEngineeringUI:(BOOL)arg1 ;
-(BOOL)showAuthenticationEngineeringUI;
-(void)setLimitFeaturesForRemoteLock:(BOOL)arg1 ;
-(BOOL)limitFeaturesForRemoteLock;
-(void)setForceWakeToMaps:(BOOL)arg1 ;
-(BOOL)forceWakeToMaps;
-(void)setWeDontNeedNoEducation:(BOOL)arg1 ;
-(BOOL)weDontNeedNoEducation;
-(void)_bindAndRegisterDefaults;
@end
