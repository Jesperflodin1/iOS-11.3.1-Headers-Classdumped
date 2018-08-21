/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class HFTemperatureIconDescriptor;

@interface HUTemperatureIconContentView : HUIconContentView

@property (nonatomic,readonly) HFTemperatureIconDescriptor * iconDescriptor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
@end

