/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate;

@interface GEOEventRecorderInstrumentation : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSString* _filepath;
	NSString* _geoFilepath;
	NSString* _movieFilepath;
	NSDate* _startDate;

}
+(id)defaultInstrumentation;
+(id)initializeDefaultInstrumentation;
+(void)endInstrumentation;
-(id)getRecordedFilePaths;
-(void)_setupLogging;
-(void)captureUIEvent:(id)arg1 ;
-(void)captureUserActionLogMessageEvent:(id)arg1 ;
-(void)writeString:(id)arg1 ToFilepath:(id)arg2 ;
-(void)captureEventRecorderScreenVideo;
-(void)_captureScreenVideo:(id)arg1 ;
-(void)initializeFilepaths;
-(id)init;
@end

