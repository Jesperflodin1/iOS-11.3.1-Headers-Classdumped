/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAVPlayerFactoryProviding.h>

@protocol SXAVPlayerFactory;
@class NSString;

@interface SXAVPlayerFactoryManager : NSObject <SXAVPlayerFactoryProviding> {

	id<SXAVPlayerFactory> _videoAVPlayerFactory;
	id<SXAVPlayerFactory> _adAVPlayerFactory;

}

@property (nonatomic,readonly) id<SXAVPlayerFactory> videoAVPlayerFactory;              //@synthesize videoAVPlayerFactory=_videoAVPlayerFactory - In the implementation block
@property (nonatomic,readonly) id<SXAVPlayerFactory> adAVPlayerFactory;                 //@synthesize adAVPlayerFactory=_adAVPlayerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)playerFactoryForVideo:(id)arg1 ;
-(id<SXAVPlayerFactory>)videoAVPlayerFactory;
-(id<SXAVPlayerFactory>)adAVPlayerFactory;
-(id)initWithVideoAVPlayerFactory:(id)arg1 adAVPlayerFactory:(id)arg2 ;
@end

