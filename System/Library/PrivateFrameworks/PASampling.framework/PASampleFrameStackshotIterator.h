/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleFrameIterator.h>

@class PAStackshotThread, PASampleKernelFrame, PASampleUserFrame, NSString;

@interface PASampleFrameStackshotIterator : NSObject <PASampleFrameIterator> {

	PAStackshotThread* _stackshotThread;
	PASampleKernelFrame* _kernel;
	PASampleUserFrame* _user;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;

}

@property (retain) PAStackshotThread * stackshotThread;              //@synthesize stackshotThread=_stackshotThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(PAStackshotThread *)stackshotThread;
-(void)setStackshotThread:(PAStackshotThread *)arg1 ;
@end

