/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureVideoDataOutput.h>

@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput {

	long long _photoEncodingBehavior;
	CAMCaptureEngine* __engine;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _engine;              //@synthesize _engine=__engine - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior;                //@synthesize photoEncodingBehavior=_photoEncodingBehavior - In the implementation block
-(long long)photoEncodingBehavior;
-(void)changeToEncodingBehavior:(long long)arg1 ;
-(void)changeToDirection:(long long)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(CAMCaptureEngine *)_engine;
@end
