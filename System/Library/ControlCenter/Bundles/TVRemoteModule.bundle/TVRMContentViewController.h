/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteModule/TVRemoteModule-Structs.h>
#import <UIKit/UIViewController.h>
#import <TVRemoteModule/TVRMRemoteControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewController, CCUIContentModuleContext, CCUIButtonModuleViewController, TVRMRemoteViewController, NSString;

@interface TVRMContentViewController : UIViewController <TVRMRemoteControllerDelegate, CCUIContentModuleContentViewController> {

	BOOL _expanded;
	UIViewController* _backgroundViewController;
	CCUIContentModuleContext* _contentModuleContext;
	CCUIButtonModuleViewController* _buttonModuleViewController;
	TVRMRemoteViewController* _remoteViewController;

}

@property (nonatomic,retain) CCUIButtonModuleViewController * buttonModuleViewController;              //@synthesize buttonModuleViewController=_buttonModuleViewController - In the implementation block
@property (nonatomic,retain) TVRMRemoteViewController * remoteViewController;                          //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                            //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIViewController * backgroundViewController;                              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                          //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
-(CGAffineTransform)_defaultScaledTransformForSize:(CGSize)arg1 ;
-(void)_expand:(id)arg1 ;
-(CCUIButtonModuleViewController *)buttonModuleViewController;
-(void)setButtonModuleViewController:(CCUIButtonModuleViewController *)arg1 ;
-(void)remoteControllerRequestedDismissal:(id)arg1 ;
-(id)init;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(TVRMRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(TVRMRemoteViewController *)arg1 ;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)preferredExpandedContentWidth;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)setBackgroundViewController:(UIViewController *)arg1 ;
-(UIViewController *)backgroundViewController;
@end
