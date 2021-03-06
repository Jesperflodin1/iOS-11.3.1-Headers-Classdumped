/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol,PLPhotoAnalysisGraphServiceProtocol,PLPhotoAnalysisVisionServiceTaxonomyProtocol,PLPhotoAnalysisVisionServiceSceneClassificationProtocol,PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
@required
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3;

@end

