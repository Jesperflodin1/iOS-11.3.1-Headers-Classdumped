/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSArray, _TVCommonSenseFooterView;

@interface _TVCommonSenseView : UIView {

	UIView* _containerView;
	UIView* _headerView;
	NSArray* _infoViews;
	_TVCommonSenseFooterView* _footerView;

}

@property (nonatomic,retain) UIView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * infoViews;                                //@synthesize infoViews=_infoViews - In the implementation block
@property (nonatomic,retain) _TVCommonSenseFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(_TVCommonSenseFooterView *)footerView;
-(void)setFooterView:(_TVCommonSenseFooterView *)arg1 ;
-(NSArray *)infoViews;
-(void)setInfoViews:(NSArray *)arg1 ;
@end

