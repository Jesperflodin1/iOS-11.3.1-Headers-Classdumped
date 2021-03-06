/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NTKAVListing.h>

@class CLKVideo, UIImage, NSString, UIColor;

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing> {

	CLKVideo* _video;
	UIImage* _image;
	NSString* _name;
	NSString* _videoName;
	NSString* _transitionImageName;
	UIColor* _overlayColor;
	unsigned long long _theme;
	long long _variant;
	long long _clip;
	unsigned long long _tags;

}

@property (nonatomic,readonly) UIColor * overlayColor;                //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,readonly) unsigned long long theme;              //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) long long variant;                     //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) long long clip;                        //@synthesize clip=_clip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)clip;
-(UIColor *)overlayColor;
-(long long)variant;
-(unsigned long long)theme;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(void)_setHasAssets;
-(BOOL)hasTag:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 videoName:(id)arg2 transitionImageName:(id)arg3 overlayColor:(id)arg4 theme:(unsigned long long)arg5 variant:(long long)arg6 clip:(long long)arg7 tags:(unsigned long long)arg8 ;
-(CLKVideo *)video;
@end

