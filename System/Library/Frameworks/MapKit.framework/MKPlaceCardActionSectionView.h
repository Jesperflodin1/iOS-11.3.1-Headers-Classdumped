/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKPlaceCardActionSectionViewDelegate;
@class NSLayoutConstraint, MKPlaceCardActionItem, UIButton, MKPlatterView;

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {

	BOOL _useMarginLayout;
	BOOL _usingSmallFonts;
	NSLayoutConstraint* _heightAnchor;
	NSLayoutConstraint* _leftButtonYConstraint;
	NSLayoutConstraint* _rightButtonYConstraint;
	NSLayoutConstraint* _platterSizeConstraint;
	BOOL _singleItemIsFullWidth;
	MKPlaceCardActionItem* _leftItem;
	MKPlaceCardActionItem* _rightItem;
	UIButton* _rightButton;
	UIButton* _leftButton;
	id<MKPlaceCardActionSectionViewDelegate> _delegate;
	MKPlatterView* _platterView;

}

@property (nonatomic,retain) MKPlaceCardActionItem * leftItem;                                      //@synthesize leftItem=_leftItem - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * rightItem;                                     //@synthesize rightItem=_rightItem - In the implementation block
@property (assign,nonatomic) BOOL singleItemIsFullWidth;                                            //@synthesize singleItemIsFullWidth=_singleItemIsFullWidth - In the implementation block
@property (nonatomic,retain) UIButton * leftButton;                                                 //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                                //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) MKPlatterView * platterView;                                           //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardActionSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_setButtonString:(id)arg1 forActionItem:(id)arg2 isLeftItem:(BOOL)arg3 ;
+(id)_font:(BOOL)arg1 ;
-(id<MKPlaceCardActionSectionViewDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceCardActionSectionViewDelegate>)arg1 ;
-(void)dealloc;
-(MKPlatterView *)platterView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPlatterView:(MKPlatterView *)arg1 ;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)setTopHairlineHidden:(BOOL)arg1 ;
-(id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(BOOL)arg3 singleItemIsFullWidth:(BOOL)arg4 ;
-(id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(BOOL)arg3 singleItemIsFullWidth:(BOOL)arg4 useMarginLayout:(BOOL)arg5 ;
-(id)currentLeftItem;
-(void)_setUpViewWithButtons;
-(id)glyphFont;
-(id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(BOOL)arg2 useSmallFonts:(BOOL)arg3 ;
-(void)_leftButtonIsPressed:(id)arg1 ;
-(void)_rightButtonIsPressed:(id)arg1 ;
-(MKPlaceCardActionItem *)leftItem;
-(void)setLeftItem:(MKPlaceCardActionItem *)arg1 ;
-(MKPlaceCardActionItem *)rightItem;
-(void)setRightItem:(MKPlaceCardActionItem *)arg1 ;
-(BOOL)singleItemIsFullWidth;
-(void)setSingleItemIsFullWidth:(BOOL)arg1 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(void)setLeftButton:(UIButton *)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
@end

