/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusCommand : CAMCaptureCommand {

	BOOL __shouldUseSmoothFocus;
	long long __focusMode;
	CGPoint __focusPointOfInterest;

}

@property (nonatomic,readonly) long long _focusMode;                       //@synthesize _focusMode=__focusMode - In the implementation block
@property (nonatomic,readonly) CGPoint _focusPointOfInterest;              //@synthesize _focusPointOfInterest=__focusPointOfInterest - In the implementation block
@property (nonatomic,readonly) BOOL _shouldUseSmoothFocus;                 //@synthesize _shouldUseSmoothFocus=__shouldUseSmoothFocus - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(long long)_focusMode;
-(id)initWithFocusMode:(long long)arg1 smooth:(BOOL)arg2 ;
-(id)initWithFocusMode:(long long)arg1 ;
-(id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 smooth:(BOOL)arg3 ;
-(BOOL)_shouldUseSmoothFocus;
-(CGPoint)_focusPointOfInterest;
-(id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 ;
@end

