/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface UISwipeActionDeleteScanlineView : UIView {

	UIView* _bottomLineWrapper;
	UIView* _topLine;
	UIView* _bottomLine;

}

@property (nonatomic,copy) UIColor * deleteLineColor; 
+(double)lineHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDeleteLineColor:(UIColor *)arg1 ;
-(UIColor *)deleteLineColor;
@end
