/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, MPUContentSizeLayoutConstraint, NSLayoutConstraint, MPUArtworkView, UILabel, UIView;

@interface _VideosExtrasGridHeaderView : UIView {

	NSArray* _artworkSizeConstraints;
	NSArray* _textLeadingConstraints;
	MPUContentSizeLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;
	MPUContentSizeLayoutConstraint* _bottomLabelSpacerHeight;
	MPUArtworkView* _artworkView;
	UILabel* _subtitleLabel;
	UIView* _bottomLabelSpacer;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4 ;
@end

