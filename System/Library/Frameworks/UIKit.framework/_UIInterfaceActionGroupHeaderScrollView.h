/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIAlertControllerShadowedScrollView.h>

@class NSArray, UIView;

@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView {

	NSArray* _constraints;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)updateConstraints;
-(void)accessoryInsetsDidChange:(UIEdgeInsets)arg1 ;
-(double)_contentFitCanScrollThreshold;
@end

