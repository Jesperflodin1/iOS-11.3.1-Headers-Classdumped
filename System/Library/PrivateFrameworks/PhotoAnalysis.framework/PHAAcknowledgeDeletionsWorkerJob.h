/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@interface PHAAcknowledgeDeletionsWorkerJob : PHAAssetProcessingJob
-(void)prepare;
-(void)finish;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(void)_deleteStateRecordsForLocalUUIDs:(id)arg1 ;
-(void)_deleteStateRecordsForSuccessfulResults;
@end
