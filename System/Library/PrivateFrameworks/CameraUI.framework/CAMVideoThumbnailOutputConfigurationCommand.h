/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMVideoThumbnailOutputConfiguration;

@interface CAMVideoThumbnailOutputConfigurationCommand : CAMCaptureCommand {

	CAMVideoThumbnailOutputConfiguration* _configuration;

}

@property (nonatomic,readonly) CAMVideoThumbnailOutputConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CAMVideoThumbnailOutputConfiguration *)configuration;
-(void)executeWithContext:(id)arg1 ;
@end

