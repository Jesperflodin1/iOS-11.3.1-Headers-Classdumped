/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UITapGestureRecognizer;

@interface _WGBrokenWidgetView : UIView {

	UILabel* _label;
	UITapGestureRecognizer* _tapGesture;

}
+(void)_configureLabelForCurrentGraphicsQuality:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
@end
