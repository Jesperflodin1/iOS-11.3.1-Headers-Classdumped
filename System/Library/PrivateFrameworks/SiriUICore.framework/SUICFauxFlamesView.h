/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKit/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	double _width;
	SCD_Struct_SU1 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU1)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isAnimating;
-(id)initWithStyle:(long long)arg1 ;
-(void)start:(BOOL)arg1 ;
-(void)stop:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
@end

