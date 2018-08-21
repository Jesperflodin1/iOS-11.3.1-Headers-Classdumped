/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXPlaybackCoordinatorFactory.h>

@protocol SXPlaybackCoordinatorFactory <NSObject>
@required
-(id)createPlaybackCoordinatorForVideo:(id)arg1;

@end


@protocol SXVolumeProviding, SXVideoProviderProviding, SXAVPlayerFactoryProviding;
@class NSString;

@interface SXPlaybackCoordinatorFactory : NSObject <SXPlaybackCoordinatorFactory> {

	id<SXVolumeProviding> _volumeProvider;
	id<SXVideoProviderProviding> _videoProviderProvider;
	id<SXAVPlayerFactoryProviding> _playerFactoryProvider;

}

@property (nonatomic,readonly) id<SXVolumeProviding> volumeProvider;                              //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (nonatomic,readonly) id<SXVideoProviderProviding> videoProviderProvider;                //@synthesize videoProviderProvider=_videoProviderProvider - In the implementation block
@property (nonatomic,readonly) id<SXAVPlayerFactoryProviding> playerFactoryProvider;              //@synthesize playerFactoryProvider=_playerFactoryProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPlaybackCoordinatorForVideo:(id)arg1 ;
-(id<SXVolumeProviding>)volumeProvider;
-(id<SXVideoProviderProviding>)videoProviderProvider;
-(id<SXAVPlayerFactoryProviding>)playerFactoryProvider;
-(id)initWithVolumeProvider:(id)arg1 videoProviderProvider:(id)arg2 playerFactoryProvider:(id)arg3 ;
@end

