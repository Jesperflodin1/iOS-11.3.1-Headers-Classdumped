/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraStream;

@interface HMCameraStream : HMCameraSource {

	_HMCameraStream* _stream;

}

@property (nonatomic,retain) _HMCameraStream * stream;                             //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) unsigned long long audioStreamSetting; 
-(void)setStream:(_HMCameraStream *)arg1 ;
-(void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)audioStreamSetting;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(_HMCameraStream *)stream;
@end

