/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNClustererContextBase.h>
#import <libobjc.A.dylib/VNClustererModelQuerying.h>

@protocol VNClusteringReadOnly;
@interface VNClustererReadOnlyContext : VNClustererContextBase <VNClustererModelQuerying> {

	id<VNClusteringReadOnly> _clusterer;

}
+(id)representativenessForFaces:(id)arg1 error:(id*)arg2 ;
+(id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id*)arg3 ;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1 ;
-(BOOL)_createGreedyClustererWith:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 error:(id*)arg5 ;
-(id)allClusteredFaceIdsAndReturnError:(id*)arg1 ;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2 ;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2 ;
-(id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3 ;
-(id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
@end
