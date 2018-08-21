/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigSmartcam.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface FigSmartcamAsync : FigSmartcam {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _inputImageRunning;
	BOOL _inputImageReady;
	BOOL _hasValidHints;
	opaqueCMSampleBufferRef _localSampleBuffer;

}
-(BOOL)inputImage:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)hasValidHints;
-(id)initWithQueue:(id)arg1 ;
@end
