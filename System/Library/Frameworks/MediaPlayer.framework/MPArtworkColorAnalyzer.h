/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject {

	long long _algorithm;
	UIImage* _image;

}

@property (nonatomic,readonly) long long algorithm;              //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) UIImage * image;                  //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(id)initWithImage:(id)arg1 algorithm:(long long)arg2 ;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_fallbackColorAnalysis;
-(long long)algorithm;
@end

