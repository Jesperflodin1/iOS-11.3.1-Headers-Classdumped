/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVItemAccessLogEventInternal, NSDate, NSString;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {

	AVItemAccessLogEventInternal* _playerItemAccessLogEvent;

}

@property (nonatomic,readonly) long long numberOfSegmentsDownloaded; 
@property (nonatomic,readonly) NSDate * playbackStartDate; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) long long numberOfServerAddressChanges; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) double playbackStartOffset; 
@property (nonatomic,readonly) double segmentsDownloadedDuration; 
@property (nonatomic,readonly) double durationWatched; 
@property (nonatomic,readonly) long long numberOfStalls; 
@property (nonatomic,readonly) long long numberOfBytesTransferred; 
@property (nonatomic,readonly) double observedBitrate; 
@property (nonatomic,readonly) double indicatedBitrate; 
@property (nonatomic,readonly) long long numberOfDroppedVideoFrames; 
-(double)averageVideoBitrate;
-(double)averageAudioBitrate;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)playbackStartDate;
-(NSString *)serverAddress;
-(long long)numberOfServerAddressChanges;
-(NSString *)playbackSessionID;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(long long)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(long long)numberOfDroppedVideoFrames;
-(long long)numberOfSegmentsDownloaded;
-(double)durationWatched;
-(void)finalize;
-(NSString *)URI;
@end

