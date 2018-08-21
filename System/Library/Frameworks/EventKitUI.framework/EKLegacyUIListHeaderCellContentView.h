/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView {

	double _date;
	BOOL _indentsForDots;
	BOOL _showWeekNumber;

}

@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
@property (assign,nonatomic) double date; 
@property (assign,nonatomic) BOOL indentsForDots; 
-(void)drawRect:(CGRect)arg1 ;
-(double)date;
-(void)setDate:(double)arg1 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(BOOL)indentsForDots;
-(BOOL)showWeekNumber;
-(CGRect)_rectForOffetTextShadow:(CGRect)arg1 ;
-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(CGRect)arg4 ;
-(id)_weekNumberFont;
@end

