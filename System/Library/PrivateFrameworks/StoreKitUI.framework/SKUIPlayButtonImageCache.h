/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSBundle, NSString, UIImage;

@interface SKUIPlayButtonImageCache : NSObject {

	os_unfair_lock_s _imageLock;
	NSBundle* _bundle;
	NSString* _playImageName;
	UIImage* _playImage;
	NSString* _pauseImageName;
	UIImage* _pauseImage;
	NSString* _stopImageName;
	UIImage* _stopImage;

}

@property (readonly) UIImage * playImage; 
@property (readonly) UIImage * pauseImage; 
@property (readonly) UIImage * stopImage; 
+(id)imageCacheForStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIImage *)playImage;
-(UIImage *)stopImage;
-(UIImage *)pauseImage;
-(void)preloadImages;
@end
