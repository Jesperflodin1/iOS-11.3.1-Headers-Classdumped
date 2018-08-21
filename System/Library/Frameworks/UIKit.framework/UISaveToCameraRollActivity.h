/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@interface UISaveToCameraRollActivity : UIActivity {

	long long _imageCount;
	long long _livePhotoCount;
	long long _videoCount;

}

@property (assign,nonatomic) long long imageCount;                  //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) long long livePhotoCount;              //@synthesize livePhotoCount=_livePhotoCount - In the implementation block
@property (assign,nonatomic) long long videoCount;                  //@synthesize videoCount=_videoCount - In the implementation block
+(unsigned long long)_xpcAttributes;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_activityImage;
-(long long)imageCount;
-(void)setImageCount:(long long)arg1 ;
-(long long)livePhotoCount;
-(void)setLivePhotoCount:(long long)arg1 ;
-(long long)videoCount;
-(void)setVideoCount:(long long)arg1 ;
@end

