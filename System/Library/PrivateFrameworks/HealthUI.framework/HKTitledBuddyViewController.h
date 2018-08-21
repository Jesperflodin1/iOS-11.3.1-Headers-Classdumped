/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKTitledBuddyHeaderViewDelegate.h>

@class UIScrollView, UIStackView, UIVisualEffectView, HKTitledLogoBuddyHeaderView, NSArray, UIActivityIndicatorView, NSString;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate> {

	UIScrollView* _scrollView;
	UIStackView* _bodyStackView;
	UIVisualEffectView* _anchoredButtonContainerView;
	UIStackView* _containerStackView;
	HKTitledLogoBuddyHeaderView* _header;
	NSArray* _buttons;
	NSArray* _buttonStackConstraints;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(UIEdgeInsets)arg2 ;
-(id)titleString;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)headerView;
-(id)titleImage;
-(NSArray *)buttons;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)_updateForCurrentSizeCategory;
-(id)_createHeaderView;
-(id)subsequentViews;
-(id)bottomAnchoredButtons;
-(void)_createAnchoredButtons;
-(BOOL)shouldCustomizeNavigationBar;
-(BOOL)shouldHideNavigationBar;
-(id)linkButtonTitle;
-(id)bodyString;
-(long long)bodyTextAlignment;
-(void)linkButtonTapped:(id)arg1 ;
-(void)_anchoredButtonTapped:(id)arg1 ;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1 ;
-(void)updateBodyTextAttributesWithMutableString:(id)arg1 ;
-(void)reloadViews;
@end

