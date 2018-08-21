/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UIView.h>

@class UISegmentedControl, UIView, UIControl;

@interface _HKReportSegmentControl : UIView {

	UISegmentedControl* _segmentControl;
	UIView* _dividerView;
	UIControl* _rightControl;

}

@property (nonatomic,readonly) UISegmentedControl * segmentControl;              //@synthesize segmentControl=_segmentControl - In the implementation block
@property (nonatomic,readonly) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,readonly) UIControl * rightControl;                         //@synthesize rightControl=_rightControl - In the implementation block
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(BOOL)isOpaque;
-(UISegmentedControl *)segmentControl;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4 ;
-(UIView *)dividerView;
-(UIControl *)rightControl;
@end

