/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>
#import <libobjc.A.dylib/SXVideoAdActionAvailabilityObserver.h>

@protocol SXVideoAdActionAvailabilityObserver <NSObject>
@property (nonatomic,readonly) BOOL hasActionAvailable; 
@property (setter=onAvailabilityChanged:,nonatomic,copy) id availabilityChangedBlock; 
@required
-(id)availabilityChangedBlock;
-(BOOL)hasActionAvailable;
-(void)onAvailabilityChanged:(/*^block*/id)arg1;

@end


@class SXPlaybackCoordinator, NSString;

@interface SXVideoAdActionAvailabilityObserver : NSObject <SXVideoPlaybackObserver, SXVideoAdActionAvailabilityObserver> {

	BOOL _hasActionAvailable;
	/*^block*/id _availabilityChangedBlock;
	SXPlaybackCoordinator* _playbackCoordinator;

}

@property (assign,nonatomic,__weak) SXPlaybackCoordinator * playbackCoordinator;                   //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (assign,nonatomic) BOOL hasActionAvailable;                                              //@synthesize hasActionAvailable=_hasActionAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onAvailabilityChanged:,nonatomic,copy) id availabilityChangedBlock;              //@synthesize availabilityChangedBlock=_availabilityChangedBlock - In the implementation block
-(void)setHasActionAvailable:(BOOL)arg1 ;
-(id)availabilityChangedBlock;
-(void)playbackCoordinatorStateChanged:(id)arg1 ;
-(BOOL)hasActionAvailable;
-(void)onAvailabilityChanged:(/*^block*/id)arg1 ;
-(id)initWithPlaybackCoordinator:(id)arg1 ;
-(SXPlaybackCoordinator *)playbackCoordinator;
-(void)setPlaybackCoordinator:(SXPlaybackCoordinator *)arg1 ;
@end

