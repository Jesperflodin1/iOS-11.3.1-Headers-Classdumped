/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@protocol NSSNewsAnalyticsSessionManager, NUExternalAnalyticsEventStreamObserver;
@class NSString;

@interface NUExternalAnalyticsVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker> {

	id<NSSNewsAnalyticsSessionManager> _sessionManager;
	id<NUExternalAnalyticsEventStreamObserver> _observer;
	NSString* _referrer;

}

@property (nonatomic,readonly) id<NSSNewsAnalyticsSessionManager> sessionManager;                       //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,__weak,readonly) id<NUExternalAnalyticsEventStreamObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrer;                                                //@synthesize referrer=_referrer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)referrer;
-(id)init;
-(id<NUExternalAnalyticsEventStreamObserver>)observer;
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(id)_articleViewEventWithQueryParametersForVideoItem:(id)arg1 ;
-(void)_submitEventWithQueryParameters:(id)arg1 ;
-(id)_videoPlaybackEventQueryParametersForVideoItem:(id)arg1 streamUserAction:(id)arg2 ;
-(id)_eventWithQueryParameters:(id)arg1 ;
-(id)_defaultQueryParametersWithEventType:(id)arg1 ;
-(void)_populateQueryParameters:(id)arg1 withVideoItem:(id)arg2 ;
-(id)initWithSessionManager:(id)arg1 observer:(id)arg2 referrer:(id)arg3 ;
@end
