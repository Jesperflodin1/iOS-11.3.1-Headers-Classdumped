/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITapGestureRecognizer.h>

@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer {

	BOOL _failWhenTappingInBars;
	long long _tapCategory;

}

@property (nonatomic,readonly) long long tapCategory;                 //@synthesize tapCategory=_tapCategory - In the implementation block
@property (assign,nonatomic) BOOL failWhenTappingInBars;              //@synthesize failWhenTappingInBars=_failWhenTappingInBars - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_setDelegate:(id)arg1 ;
-(long long)tapCategory;
-(long long)_categoryForTapLocation:(CGPoint)arg1 ;
-(BOOL)failWhenTappingInBars;
-(void)setFailWhenTappingInBars:(BOOL)arg1 ;
@end
