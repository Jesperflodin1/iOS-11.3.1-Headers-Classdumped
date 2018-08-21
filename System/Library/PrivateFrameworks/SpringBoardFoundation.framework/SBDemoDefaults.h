/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBDemoDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL usesStoreDemoPlugin; 
@property (getter=isStoreDemoApplicationLockEnabled,nonatomic,readonly) BOOL storeDemoApplicationLockEnabled; 
-(void)setStoreDemoApplicationLockEnabled:(BOOL)arg1 ;
-(BOOL)isStoreDemoApplicationLockEnabled;
-(void)setUsesStoreDemoPlugin:(BOOL)arg1 ;
-(BOOL)usesStoreDemoPlugin;
-(void)_bindAndRegisterDefaults;
@end

