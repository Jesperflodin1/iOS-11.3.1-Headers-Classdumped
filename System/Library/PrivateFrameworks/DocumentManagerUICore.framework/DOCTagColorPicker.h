/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKit/UIView.h>

@class UIGestureRecognizer, NSArray, NSNumber, UIStackView;

@interface DOCTagColorPicker : UIView {

	long long _selectedTagColor;
	UIGestureRecognizer* _changeColorTapGestureRecognizer;
	UIGestureRecognizer* _changeColorPanGestureRecognizer;
	NSArray* _dotViews;
	NSNumber* _previousSelectedTagColor;
	UIStackView* _stackView;

}

@property (nonatomic,readonly) NSArray * dotViews;                                                 //@synthesize dotViews=_dotViews - In the implementation block
@property (nonatomic,retain) NSNumber * previousSelectedTagColor;                                  //@synthesize previousSelectedTagColor=_previousSelectedTagColor - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                              //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) long long selectedTagColor;                                           //@synthesize selectedTagColor=_selectedTagColor - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * changeColorTapGestureRecognizer;              //@synthesize changeColorTapGestureRecognizer=_changeColorTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * changeColorPanGestureRecognizer;              //@synthesize changeColorPanGestureRecognizer=_changeColorPanGestureRecognizer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(long long)selectedTagColor;
-(UIGestureRecognizer *)changeColorPanGestureRecognizer;
-(void)handleChangeColor:(id)arg1 ;
-(void)setSelectedTagColor:(long long)arg1 ;
-(UIGestureRecognizer *)changeColorTapGestureRecognizer;
-(id)selectedTagDotView;
-(NSArray *)dotViews;
-(void)setColorDotSpacing;
-(void)setPreviousSelectedTagColor:(NSNumber *)arg1 ;
-(void)setSelectedTagColorForLocation:(CGPoint)arg1 ;
-(NSNumber *)previousSelectedTagColor;
@end

