/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/ICQUpgradeFlowManagerDelegate.h>

@protocol ICQBannerViewDelegate;
@class ICQOffer, UIFont, UIColor, ICQUpgradeFlowOptions, _ICQTextView, NSArray, ICQUpgradeFlowManager, NSString;

@interface ICQBannerView : UIView <UITextViewDelegate, ICQUpgradeFlowManagerDelegate> {

	ICQOffer* _offer;
	id<ICQBannerViewDelegate> _delegate;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	double _textLineSpacing;
	UIFont* _linkTextFont;
	UIColor* _linkTextColor;
	ICQUpgradeFlowOptions* _flowOptions;
	_ICQTextView* _textView;
	NSArray* _activeConstraints;
	ICQUpgradeFlowManager* _upgradeFlowManager;
	NSDirectionalEdgeInsets _textMargins;

}

@property (nonatomic,readonly) _ICQTextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                             //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) ICQUpgradeFlowManager * upgradeFlowManager;              //@synthesize upgradeFlowManager=_upgradeFlowManager - In the implementation block
@property (nonatomic,retain) ICQOffer * offer; 
@property (assign,nonatomic,__weak) id<ICQBannerViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                     //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets textMargins;                     //@synthesize textMargins=_textMargins - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                 //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) double textLineSpacing;                                  //@synthesize textLineSpacing=_textLineSpacing - In the implementation block
@property (nonatomic,copy) UIFont * linkTextFont;                                     //@synthesize linkTextFont=_linkTextFont - In the implementation block
@property (nonatomic,copy) UIColor * linkTextColor;                                   //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (nonatomic,copy) ICQUpgradeFlowOptions * flowOptions;                       //@synthesize flowOptions=_flowOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowForOffer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id<ICQBannerViewDelegate>)delegate;
-(void)setDelegate:(id<ICQBannerViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)userInterfaceLayoutDirection;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)updateConstraints;
-(long long)semanticContentAttribute;
-(UIFont *)font;
-(UIColor *)textColor;
-(id)attributedText;
-(long long)textAlignment;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(_ICQTextView *)textView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(ICQOffer *)offer;
-(void)setTextMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)setLinkTextFont:(UIFont *)arg1 ;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(id)initWithOffer:(id)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(UIColor *)linkTextColor;
-(void)setFlowOptions:(ICQUpgradeFlowOptions *)arg1 ;
-(ICQUpgradeFlowOptions *)flowOptions;
-(void)upgradeFlowManagerDidCancel:(id)arg1 ;
-(void)upgradeFlowManagerDidComplete:(id)arg1 ;
-(id)messageAttributes;
-(void)setOffer:(ICQOffer *)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 ;
-(double)textLineSpacing;
-(id)textParagraphStyle;
-(id)textParagraphStyleAttributes;
-(UIFont *)linkTextFont;
-(void)_applyTextStorageAttributes;
-(void)_applyTextParagraphAttributes;
-(void)setUpgradeFlowManager:(ICQUpgradeFlowManager *)arg1 ;
-(ICQUpgradeFlowManager *)upgradeFlowManager;
-(long long)_delegateActionForAction:(long long)arg1 ;
-(BOOL)_legacyDelegateMethodHandlesAction:(long long)arg1 ;
-(BOOL)_performLink:(id)arg1 ;
-(void)setTextLineSpacing:(double)arg1 ;
-(NSDirectionalEdgeInsets)textMargins;
@end

