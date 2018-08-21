/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFColorProfile;
@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile {

	BOOL _supportsRGBColor;
	id<HFColorProfile> _colorProfile;

}

@property (assign,nonatomic) BOOL supportsRGBColor;                        //@synthesize supportsRGBColor=_supportsRGBColor - In the implementation block
@property (nonatomic,retain) id<HFColorProfile> colorProfile;              //@synthesize colorProfile=_colorProfile - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFColorProfile>)colorProfile;
-(void)setColorProfile:(id<HFColorProfile>)arg1 ;
-(BOOL)supportsRGBColor;
-(void)setSupportsRGBColor:(BOOL)arg1 ;
@end

