/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface HUColorSwatchView : UIView {

	unsigned long long _selectionState;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) unsigned long long selectionState;              //@synthesize selectionState=_selectionState - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(unsigned long long)selectionState;
-(void)_updateShapePath;
-(void)setSelectionState:(unsigned long long)arg1 ;
@end

