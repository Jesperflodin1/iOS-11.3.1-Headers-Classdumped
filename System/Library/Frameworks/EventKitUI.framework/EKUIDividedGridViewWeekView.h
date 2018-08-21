/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, NSLayoutConstraint;

@interface EKUIDividedGridViewWeekView : UIView {

	NSMutableArray* _buttonViews;
	NSLayoutConstraint* _heightConstraint;

}

@property (retain) NSMutableArray * buttonViews;                       //@synthesize buttonViews=_buttonViews - In the implementation block
@property (__weak) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(id)init;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSMutableArray *)buttonViews;
-(void)setButtonViews:(NSMutableArray *)arg1 ;
@end
