/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReferencingDelegateStorage, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, NSArray;

@interface AVCapturePhotoRequest : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	unsigned _photoCallbackFlavor;
	AVCapturePhotoSettings* _unresolvedSettings;
	AVCaptureResolvedPhotoSettings* _resolvedSettings;
	NSArray* _expectedPhotoManifest;
	unsigned _firedCallbackFlags;
	unsigned long long _firedPhotoCallbacksCount;
	IOSurfaceRef _previewSurface;
	opaqueCMSampleBufferRef _previewSampleBuffer;

}

@property (readonly) unsigned photoCallbackFlavor;                                           //@synthesize photoCallbackFlavor=_photoCallbackFlavor - In the implementation block
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;                     //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) AVCapturePhotoSettings * unresolvedSettings;                            //@synthesize unresolvedSettings=_unresolvedSettings - In the implementation block
@property (nonatomic,retain) AVCaptureResolvedPhotoSettings * resolvedSettings; 
@property (nonatomic,readonly) NSArray * expectedPhotoManifest;                              //@synthesize expectedPhotoManifest=_expectedPhotoManifest - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedPhotoCount; 
@property (assign,nonatomic) unsigned firedCallbackFlags;                                    //@synthesize firedCallbackFlags=_firedCallbackFlags - In the implementation block
@property (assign,nonatomic) unsigned long long firedPhotoCallbacksCount;                    //@synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount - In the implementation block
@property (nonatomic,retain) IOSurfaceRef previewSurface;                                    //@synthesize previewSurface=_previewSurface - In the implementation block
@property (nonatomic,retain) opaqueCMSampleBufferRef previewSampleBuffer;                    //@synthesize previewSampleBuffer=_previewSampleBuffer - In the implementation block
+(id)requestWithDelegate:(id)arg1 settings:(id)arg2 ;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(id)initWithDelegate:(id)arg1 settings:(id)arg2 ;
-(void)_resolveExpectedPhotoManifest;
-(unsigned long long)expectedPhotoCount;
-(void)setResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg1 ;
-(unsigned)photoCallbackFlavor;
-(AVCapturePhotoSettings *)unresolvedSettings;
-(NSArray *)expectedPhotoManifest;
-(unsigned)firedCallbackFlags;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(unsigned long long)firedPhotoCallbacksCount;
-(void)setFiredPhotoCallbacksCount:(unsigned long long)arg1 ;
-(IOSurfaceRef)previewSurface;
-(void)setPreviewSurface:(IOSurfaceRef)arg1 ;
-(opaqueCMSampleBufferRef)previewSampleBuffer;
-(void)setPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
@end

