/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface UIWebDragDotView : UIView {

	UIColor* m_insertionPointColor;
	UIColor* m_selectionBarColor;
	UIImageView* m_dot;
	long long m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}

@property (assign,nonatomic) BOOL showsBall; 
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setEdge:(CGRect)arg1 ;
-(BOOL)isVertical;
-(BOOL)isPointedDown;
-(BOOL)isPointedRight;
-(BOOL)isPointedUp;
-(BOOL)isPointedLeft;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(long long)arg3 ;
-(void)setShowsBall:(BOOL)arg1 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
-(BOOL)showsBall;
@end

