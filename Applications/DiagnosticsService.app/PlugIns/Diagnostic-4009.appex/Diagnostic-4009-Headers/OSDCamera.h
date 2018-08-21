//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSDCamera : NSObject
{
    id <_OSDCameraInterface> _cameraImp;
}

+ (_Bool)checkProtocol:(id)arg1 obj:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) id <_OSDCameraInterface> cameraImp; // @synthesize cameraImp=_cameraImp;
- (void).cxx_destruct;
- (_Bool)_checkSelector:(SEL)arg1 error:(id *)arg2;
- (_Bool)_checkProtocol:(id)arg1 error:(id *)arg2;
- (_Bool)_checkProtocol:(id)arg1 obj:(id)arg2 error:(id *)arg3;
- (_Bool)implementorActive:(id *)arg1;
- (id)useMaxAvailableDataRate:(id *)arg1;
- (_Bool)enableAgileClocking:(_Bool)arg1 error:(id *)arg2;
- (_Bool)enableTestPatternPN9:(_Bool)arg1 error:(id *)arg2;
- (id)supportedFormats:(id *)arg1;
- (id)formatIndex:(id *)arg1;
- (_Bool)setFormatIndex:(id)arg1 error:(id *)arg2;
- (_Bool)setFrameRate:(id)arg1 error:(id *)arg2;
- (id)errorCountForType:(unsigned long long)arg1 error:(id *)arg2;
- (id)frameCount:(id *)arg1;
- (unsigned long long)streamingOptions:(id *)arg1;
- (_Bool)isStreaming;
- (_Bool)stopStreaming:(id *)arg1;
- (_Bool)startStreamingWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)name:(id *)arg1;
- (void)deactivate;
- (void)setFrameHandler:(CDUnknownBlockType)arg1;
- (void)setPreviewLayer:(id)arg1;
- (_Bool)activate:(id *)arg1;
- (id)initWithCaptureDevice:(id)arg1 cameraSource:(unsigned long long)arg2 error:(id *)arg3;

@end
