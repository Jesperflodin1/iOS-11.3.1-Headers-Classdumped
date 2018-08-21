/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HUQuickControlViewProfile;


@protocol HUQuickControlControllableView <NSObject>
@property (nonatomic,retain) id value; 
@property (nonatomic,copy) HUQuickControlViewProfile * profile; 
@property (nonatomic,retain) id secondaryValue; 
@optional
-(id)secondaryValue;
-(void)setSecondaryValue:(id)arg1;

@required
-(void)setValue:(id)arg1;
-(id)value;
-(id)initWithProfile:(id)arg1;
-(HUQuickControlViewProfile *)profile;
-(void)setProfile:(id)arg1;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;

@end
