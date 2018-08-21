/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TURemoteVideoClient.h>

@protocol TURemoteVideoClient <NSObject>
@required
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2;

@end


@class CALayer, NSString;

@interface TURemoteVideoClient : NSObject <TURemoteVideoClient> {

	long long _videoContextSlotIdentifier;
	CALayer* _videoLayer;

}

@property (nonatomic,readonly) long long videoContextSlotIdentifier;              //@synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier - In the implementation block
@property (nonatomic,retain) CALayer * videoLayer;                                //@synthesize videoLayer=_videoLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CALayer *)videoLayer;
-(void)cleanUpSubLayerForLayer:(id)arg1 ;
-(void)setVideoLayer:(CALayer *)arg1 ;
-(long long)videoContextSlotIdentifier;
-(void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2 ;
-(id)nameForSubLayer;
-(id)initWithVideoContextSlotIdentifier:(long long)arg1 ;
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2 ;
@end

