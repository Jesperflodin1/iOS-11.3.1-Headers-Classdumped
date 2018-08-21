/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class BFFPaneHeaderView_RemoteUI, UIButton, _UIBackdropView, UIView, UIScrollView, RUIChoiceViewElement, RUIElement, RUISubHeaderElement;

@interface RUIChoiceView : UIView {

	BFFPaneHeaderView_RemoteUI* _headerView;
	UIButton* _bigChoice;
	UIButton* _smallChoice;
	_UIBackdropView* _trayBackdrop;
	UIView* _buttonTray;
	UIScrollView* _scrollView;
	BOOL _usesTwoButtonLayout;
	RUIChoiceViewElement* _target;
	RUIElement* _header;
	RUISubHeaderElement* _subHeader;

}

@property (assign,nonatomic,__weak) RUIChoiceViewElement * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) RUIElement * header;                               //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUISubHeaderElement * subHeader;                   //@synthesize subHeader=_subHeader - In the implementation block
@property (nonatomic,readonly) UIView*<RUIHeader> headerView; 
@property (assign,nonatomic) BOOL usesTwoButtonLayout;                          //@synthesize usesTwoButtonLayout=_usesTwoButtonLayout - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(id)titleLabel;
-(RUIChoiceViewElement *)target;
-(void)setTarget:(RUIChoiceViewElement *)arg1 ;
-(UIView*<RUIHeader>)headerView;
-(void)setHeader:(RUIElement *)arg1 ;
-(RUIElement *)header;
-(void)setHeaderTitle:(id)arg1 ;
-(void)choiceTapped:(id)arg1 ;
-(BOOL)usesTwoButtonLayout;
-(void)setFirstChoiceTitle:(id)arg1 ;
-(void)setSecondChoiceTitle:(id)arg1 ;
-(void)setHelpLinkTitle:(id)arg1 ;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(void)setUsesTwoButtonLayout:(BOOL)arg1 ;
-(RUISubHeaderElement *)subHeader;
@end
