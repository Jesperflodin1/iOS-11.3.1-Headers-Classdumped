//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OSDCamera, OSDCaptureDevice;

@interface OSDCameraCenter : NSObject
{
    OSDCaptureDevice *_device;
    OSDCamera *_backCamera;
    OSDCamera *_frontCamera;
    OSDCamera *_telephotoCamera;
}

+ (_Bool)syncCameras:(id)arg1 slave:(id)arg2 skipSlaveFrames:(_Bool)arg3 enableSlaveOutput:(_Bool)arg4 error:(id *)arg5;
+ (id)ispVersion;
+ (id)sharedCenter;
@property(retain, nonatomic) OSDCamera *telephotoCamera; // @synthesize telephotoCamera=_telephotoCamera;
@property(retain, nonatomic) OSDCamera *frontCamera; // @synthesize frontCamera=_frontCamera;
@property(retain, nonatomic) OSDCamera *backCamera; // @synthesize backCamera=_backCamera;
@property(retain, nonatomic) OSDCaptureDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)_telephotoCameraWithDevice:(id)arg1 error:(id *)arg2;
- (id)_frontCameraWithDevice:(id)arg1 error:(id *)arg2;
- (id)_backCamera:(id *)arg1;
- (id)cameraForSource:(unsigned long long)arg1 error:(id *)arg2;

@end
