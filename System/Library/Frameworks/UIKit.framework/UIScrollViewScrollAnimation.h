/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@class CABasicAnimation;

@interface UIScrollViewScrollAnimation : UIAnimation {

	CGPoint _originalOffset;
	CGPoint _targetOffset;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;
	CABasicAnimation* _customAnimation;

}
-(void)dealloc;
-(float)progressForFraction:(float)arg1 ;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
-(void)setProgress:(float)arg1 ;
@end

