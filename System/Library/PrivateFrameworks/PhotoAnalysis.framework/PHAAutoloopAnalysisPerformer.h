/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PHAAutoloopAnalysisPerformer : NSObject {

	NSObject*<OS_dispatch_queue> _workerQueue;
	int _imageRequestID;
	AB _cancelled;

}
-(void)cancel;
-(id)initWithQueue:(id)arg1 ;
-(void)startAnalysisWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRequestResultForAsset:(id)arg1 withPlayerItem:(id)arg2 info:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_runAutoloopPipelineForAsset:(id)arg1 withAVAsset:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_gatherOutputInfoFromAnalysisResult:(void*)arg1 recipeFlavor:(int)arg2 outputInfo:(id)arg3 ;
@end

