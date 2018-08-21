/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>

@protocol AKSignatureCreationControllerDelegate;
@class UINavigationBar, AKSmoothPathView, AKInkSignatureView, AKSignatureBaselineView, UILabel, AKController, NSString;

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate> {

	id<AKSignatureCreationControllerDelegate> _delegate;
	UINavigationBar* _navBar;
	AKSmoothPathView* _pathView;
	AKInkSignatureView* _signatureView;
	AKSignatureBaselineView* _baselineView;
	UILabel* _label;
	AKController* _controller;

}

@property (nonatomic,retain) UINavigationBar * navBar;                              //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) AKSmoothPathView * pathView;                           //@synthesize pathView=_pathView - In the implementation block
@property (nonatomic,retain) AKInkSignatureView * signatureView;                    //@synthesize signatureView=_signatureView - In the implementation block
@property (nonatomic,retain) AKSignatureBaselineView * baselineView;                //@synthesize baselineView=_baselineView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) AKController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (__weak) id<AKSignatureCreationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKSignatureCreationControllerDelegate>)delegate;
-(void)setDelegate:(id<AKSignatureCreationControllerDelegate>)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(long long)positionForBar:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)prefersStatusBarHidden;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(void)setBaselineView:(AKSignatureBaselineView *)arg1 ;
-(AKSignatureBaselineView *)baselineView;
-(void)_cancel:(id)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(void)_clear:(id)arg1 ;
-(void)setSignatureView:(AKInkSignatureView *)arg1 ;
-(AKInkSignatureView *)signatureView;
-(void)_validateButtons;
-(AKSmoothPathView *)pathView;
-(void)setPathView:(AKSmoothPathView *)arg1 ;
-(void)_done:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
@end

