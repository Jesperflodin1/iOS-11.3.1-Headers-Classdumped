/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) double backgroundMultitaskingWatchdogTimeout; 
@property (nonatomic,readonly) BOOL forcesMedusaAdoption; 
@property (nonatomic,readonly) BOOL ignoresDeclaredNetworkUsage; 
@property (nonatomic,readonly) BOOL shouldAllowScreenshotsInLoginWindow; 
@property (nonatomic,readonly) BOOL shouldShowInternalApplications; 
@property (nonatomic,readonly) BOOL shouldShowNonDefaultSystemApplications; 
-(void)setShouldShowNonDefaultSystemApplications:(BOOL)arg1 ;
-(BOOL)shouldShowNonDefaultSystemApplications;
-(void)setForcesMedusaAdoption:(BOOL)arg1 ;
-(BOOL)forcesMedusaAdoption;
-(void)setShouldAllowScreenshotsInLoginWindow:(BOOL)arg1 ;
-(BOOL)shouldAllowScreenshotsInLoginWindow;
-(void)setIgnoresDeclaredNetworkUsage:(BOOL)arg1 ;
-(BOOL)ignoresDeclaredNetworkUsage;
-(void)setBackgroundMultitaskingWatchdogTimeout:(double)arg1 ;
-(double)backgroundMultitaskingWatchdogTimeout;
-(void)setShouldShowInternalApplications:(BOOL)arg1 ;
-(BOOL)shouldShowInternalApplications;
-(void)_bindAndRegisterDefaults;
@end

