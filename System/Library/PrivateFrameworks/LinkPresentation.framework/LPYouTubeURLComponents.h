/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPYouTubeURLComponents : NSObject {

	NSString* _videoID;
	double _startTime;

}

@property (nonatomic,copy) NSString * videoID;              //@synthesize videoID=_videoID - In the implementation block
@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
+(BOOL)parseYouTubeTimeFormat:(id)arg1 outTime:(double*)arg2 ;
+(id)formatAsYouTubeTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
@end
