/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView {

	UIView* _placeholderView;
	double _offset;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                            //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) double offset;                         //@synthesize offset=_offset - In the implementation block
-(void)layoutSubviews;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(void)setIsPad:(BOOL)arg1 ;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(BOOL)isPad;
-(UIView *)placeholderView;
@end

