/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray, UIView, NSAttributedString, NSString, UIColor;

@interface BFFLinkLabelFooterView : UIView {

	UILabel* _label;
	UILabel* _subtitleLabel;
	NSMutableArray* _linkHandlers;
	UIView* _topLine;
	BOOL _wantsSideBySideLayout;
	BOOL _wantsFromBottomLayout;
	double _flexibleHeight;
	NSAttributedString* _attributedSubtitleText;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) double flexibleHeight;                                    //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                     //@synthesize margins=_margins - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (nonatomic,retain) NSAttributedString * attributedSubtitleText;              //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
@property (assign,nonatomic) BOOL wantsSideBySideLayout;                               //@synthesize wantsSideBySideLayout=_wantsSideBySideLayout - In the implementation block
@property (assign,nonatomic) BOOL wantsFromBottomLayout;                               //@synthesize wantsFromBottomLayout=_wantsFromBottomLayout - In the implementation block
@property (nonatomic,retain) UIColor * topLineColor; 
+(void)initialize;
-(NSString *)labelText;
-(void)removeAllLinks;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(double)flexibleHeight;
-(void)setFlexibleHeight:(double)arg1 ;
-(unsigned long long)numberOfLinks;
-(void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeLinkAtIndex:(unsigned long long)arg1 ;
-(BOOL)wantsSideBySideLayout;
-(BOOL)wantsFromBottomLayout;
-(UIColor *)topLineColor;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
-(void)addLinkWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setTopLineColor:(UIColor *)arg1 ;
-(void)setWantsSideBySideLayout:(BOOL)arg1 ;
-(void)setWantsFromBottomLayout:(BOOL)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
@end

