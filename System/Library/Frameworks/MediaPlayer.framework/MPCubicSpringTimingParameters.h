/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UISpringTimingParameters.h>

@class UICubicTimingParameters;

@interface MPCubicSpringTimingParameters : UISpringTimingParameters {

	UICubicTimingParameters* _springCubicTimingParameters;

}

@property (nonatomic,copy) UICubicTimingParameters * springCubicTimingParameters;              //@synthesize springCubicTimingParameters=_springCubicTimingParameters - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cubicTimingParameters;
-(void)setSpringCubicTimingParameters:(UICubicTimingParameters *)arg1 ;
-(UICubicTimingParameters *)springCubicTimingParameters;
@end

