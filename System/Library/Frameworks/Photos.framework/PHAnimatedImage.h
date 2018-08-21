/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISAnimatedImage;

@interface PHAnimatedImage : NSObject {

	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	ISAnimatedImage* _is_animatedImage;

}

@property (nonatomic,readonly) unsigned long long frameCount;                   //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;                    //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                   //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                  //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) ISAnimatedImage * is_animatedImage;              //@synthesize is_animatedImage=_is_animatedImage - In the implementation block
+(long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)cancelAnimatedImageRequest:(long long)arg1 ;
+(long long)requestAnimatedImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)loopCount;
-(double)duration;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)frameCount;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(void)_initializePropertiesWithAnimatedImage:(id)arg1 ;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(ISAnimatedImage *)is_animatedImage;
@end

