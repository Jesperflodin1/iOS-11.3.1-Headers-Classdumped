/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoInteractionHandlerFactory.h>

@protocol SXPlaybackCoordinatorProviding, SXVideoPlaybackController;
@class NSString;

@interface SXLearnMoreInteractionHandlerFactory : NSObject <SXVideoInteractionHandlerFactory> {

	id<SXPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
	id<SXVideoPlaybackController> _playbackController;

}

@property (nonatomic,readonly) id<SXPlaybackCoordinatorProviding> playbackCoordinatorProvider;              //@synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider - In the implementation block
@property (nonatomic,readonly) id<SXVideoPlaybackController> playbackController;                            //@synthesize playbackController=_playbackController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXPlaybackCoordinatorProviding>)playbackCoordinatorProvider;
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SXVideoPlaybackController>)playbackController;
-(id)initWithPlaybackCoordinatorProvider:(id)arg1 playbackController:(id)arg2 ;
@end

