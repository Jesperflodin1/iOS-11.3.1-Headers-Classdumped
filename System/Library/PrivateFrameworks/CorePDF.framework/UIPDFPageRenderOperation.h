/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {

	UIPDFPageRenderJob* _job;
	BOOL executing;
	BOOL finished;

}

@property (retain) UIPDFPageRenderJob * job;              //@synthesize job=_job - In the implementation block
-(void)dealloc;
-(void)start;
-(void)completeOperation;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setJob:(UIPDFPageRenderJob *)arg1 ;
-(id)initWithJob:(id)arg1 ;
-(BOOL)isConcurrent;
-(UIPDFPageRenderJob *)job;
@end
