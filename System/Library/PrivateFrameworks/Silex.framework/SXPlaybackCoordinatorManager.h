/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXPlaybackCoordinatorProviding.h>
#import <libobjc.A.dylib/SXVolumeObserving.h>

@protocol SXPlaybackCoordinatorFactory;
@class NSMapTable, NSString;

@interface SXPlaybackCoordinatorManager : NSObject <SXPlaybackCoordinatorProviding, SXVolumeObserving> {

	id<SXPlaybackCoordinatorFactory> _factory;
	NSMapTable* _playbackCoordinators;

}

@property (nonatomic,readonly) id<SXPlaybackCoordinatorFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) NSMapTable * playbackCoordinators;                     //@synthesize playbackCoordinators=_playbackCoordinators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXPlaybackCoordinatorFactory>)factory;
-(void)muteStateChanged:(id)arg1 ;
-(id)playbackCoordinatorForVideo:(id)arg1 ;
-(NSMapTable *)playbackCoordinators;
-(id)initWithPlaybackCoordinatorFactory:(id)arg1 ;
@end
