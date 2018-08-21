/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVRCMRTelevisionWrapper, TVRCDevice;

@interface _TVRDeviceAggregate : NSObject {

	_TVRCMRTelevisionWrapper* _mediaRemote;
	TVRCDevice* _publicDevice;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * mediaRemote;              //@synthesize mediaRemote=_mediaRemote - In the implementation block
@property (nonatomic,retain) TVRCDevice * publicDevice;                           //@synthesize publicDevice=_publicDevice - In the implementation block
-(BOOL)isEmpty;
-(id)bestImpl;
-(TVRCDevice *)publicDevice;
-(void)setPublicDevice:(TVRCDevice *)arg1 ;
-(_TVRCMRTelevisionWrapper *)mediaRemote;
-(void)setMediaRemote:(_TVRCMRTelevisionWrapper *)arg1 ;
@end

