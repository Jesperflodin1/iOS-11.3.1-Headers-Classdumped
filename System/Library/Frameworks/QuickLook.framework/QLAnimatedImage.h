/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject {

	QLImageData* _imageData;
	unsigned long long _durationsCount;
	QLFrameDurationInformation* _durations;
	double _duration;
	UIImage* _lastImage;
	unsigned long long _lastImageIndex;

}
-(void)dealloc;
-(double)duration;
-(unsigned long long)frameCount;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)generateDurations;
-(BOOL)time:(double)arg1 belongsToIndex:(unsigned long long)arg2 ;
-(long long)indexForTime:(double)arg1 ;
-(id)frameAtTime:(double)arg1 ;
@end
