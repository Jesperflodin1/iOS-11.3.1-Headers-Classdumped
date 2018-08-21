/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureCommand : CAMCaptureCommand {

	long long __exposureMode;
	CGPoint __exposurePointOfInterest;

}

@property (nonatomic,readonly) long long _exposureMode;                       //@synthesize _exposureMode=__exposureMode - In the implementation block
@property (nonatomic,readonly) CGPoint _exposurePointOfInterest;              //@synthesize _exposurePointOfInterest=__exposurePointOfInterest - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(long long)_exposureMode;
-(CGPoint)_exposurePointOfInterest;
-(id)initWithExposureMode:(long long)arg1 ;
-(id)initWithExposureMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 ;
@end
