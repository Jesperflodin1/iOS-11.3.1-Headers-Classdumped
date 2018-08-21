/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/TVAppBundles/VideoSubscriberAccountTVApp.bundle/VideoSubscriberAccountTVApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountTVApp/VideoSubscriberAccountTVApp-Structs.h>
#import <UIKit/UIView.h>

@protocol VSTVAppViewDelegate;
@class NSString, UIScrollView, VSFontCenter, NSLayoutConstraint, UILabel, UIImageView, UIButton;

@interface VSTVAppView : UIView {

	BOOL _shouldShowAppsButton;
	id<VSTVAppViewDelegate> _delegate;
	NSString* _privacyButtonTitle;
	UIScrollView* _scrollView;
	VSFontCenter* _fontCenter;
	NSLayoutConstraint* _firstBaselineConstraint;
	NSLayoutConstraint* _headerDescriptionSpacing;
	NSLayoutConstraint* _privacyLinkBottomPadding;
	NSLayoutConstraint* _privacyLinkTopPadding;
	NSLayoutConstraint* _providerImageBaseline;
	NSLayoutConstraint* _signInBottomSpacing;
	NSLayoutConstraint* _skipBottomPadding;
	NSLayoutConstraint* _supportedAppsBottomPadding;
	NSLayoutConstraint* _supportedAppsLinkSpacing;
	UILabel* _headerLabel;
	UIImageView* _providerImageView;
	UIButton* _signInButton;
	UIButton* _supportedAppsButton;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                    //@synthesize fontCenter=_fontCenter - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * firstBaselineConstraint;                 //@synthesize firstBaselineConstraint=_firstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerDescriptionSpacing;                //@synthesize headerDescriptionSpacing=_headerDescriptionSpacing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * privacyLinkBottomPadding;                //@synthesize privacyLinkBottomPadding=_privacyLinkBottomPadding - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * privacyLinkTopPadding;                   //@synthesize privacyLinkTopPadding=_privacyLinkTopPadding - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * providerImageBaseline;                   //@synthesize providerImageBaseline=_providerImageBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * signInBottomSpacing;                     //@synthesize signInBottomSpacing=_signInBottomSpacing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * skipBottomPadding;                       //@synthesize skipBottomPadding=_skipBottomPadding - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * supportedAppsBottomPadding;              //@synthesize supportedAppsBottomPadding=_supportedAppsBottomPadding - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * supportedAppsLinkSpacing;                //@synthesize supportedAppsLinkSpacing=_supportedAppsLinkSpacing - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                        //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIImageView * providerImageView;                              //@synthesize providerImageView=_providerImageView - In the implementation block
@property (nonatomic,retain) UIButton * signInButton;                                      //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIButton * supportedAppsButton;                               //@synthesize supportedAppsButton=_supportedAppsButton - In the implementation block
@property (assign,nonatomic,__weak) id<VSTVAppViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * headerText; 
@property (assign,nonatomic) BOOL shouldShowAppsButton;                                    //@synthesize shouldShowAppsButton=_shouldShowAppsButton - In the implementation block
@property (nonatomic,copy) NSString * privacyButtonTitle;                                  //@synthesize privacyButtonTitle=_privacyButtonTitle - In the implementation block
-(void)setPrivacyButtonTitle:(NSString *)arg1 ;
-(void)_didSelectPrivacy:(id)arg1 ;
-(void)_didSelectSupportedApps:(id)arg1 ;
-(void)_didSelectSignIn:(id)arg1 ;
-(void)_didSelectDismiss:(id)arg1 ;
-(NSLayoutConstraint *)providerImageBaseline;
-(NSLayoutConstraint *)firstBaselineConstraint;
-(id)_newHeaderLabel;
-(NSLayoutConstraint *)headerDescriptionSpacing;
-(NSLayoutConstraint *)supportedAppsLinkSpacing;
-(NSLayoutConstraint *)privacyLinkBottomPadding;
-(NSLayoutConstraint *)privacyLinkTopPadding;
-(NSLayoutConstraint *)signInBottomSpacing;
-(NSLayoutConstraint *)skipBottomPadding;
-(NSLayoutConstraint *)supportedAppsBottomPadding;
-(void)setProviderImageView:(UIImageView *)arg1 ;
-(id)_newSupportedAppsButton;
-(void)setSupportedAppsButton:(UIButton *)arg1 ;
-(id)_newSignInButtonOfSize:(CGSize)arg1 ;
-(id)_newDismissButton;
-(id)_newPrivacyLink;
-(void)setProviderImageBaseline:(NSLayoutConstraint *)arg1 ;
-(void)setFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeaderDescriptionSpacing:(NSLayoutConstraint *)arg1 ;
-(void)setSupportedAppsLinkSpacing:(NSLayoutConstraint *)arg1 ;
-(void)setSupportedAppsBottomPadding:(NSLayoutConstraint *)arg1 ;
-(void)setSkipBottomPadding:(NSLayoutConstraint *)arg1 ;
-(void)setSignInBottomSpacing:(NSLayoutConstraint *)arg1 ;
-(void)setPrivacyLinkBottomPadding:(NSLayoutConstraint *)arg1 ;
-(void)setPrivacyLinkTopPadding:(NSLayoutConstraint *)arg1 ;
-(UIButton *)supportedAppsButton;
-(UIImageView *)providerImageView;
-(NSString *)privacyButtonTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VSTVAppViewDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<VSTVAppViewDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)updateConstraints;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)flashScrollIndicators;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(id)_newDescriptionLabel;
-(id)_newImageView;
-(UIButton *)signInButton;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(BOOL)shouldShowAppsButton;
-(void)setShouldShowAppsButton:(BOOL)arg1 ;
-(void)setSignInButton:(UIButton *)arg1 ;
@end
