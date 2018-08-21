/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIContentModuleContentViewController <NSObject>
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@optional
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(double)preferredExpandedContentWidth;
-(BOOL)providesOwnPlatter;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;

@required
-(double)preferredExpandedContentHeight;

@end

