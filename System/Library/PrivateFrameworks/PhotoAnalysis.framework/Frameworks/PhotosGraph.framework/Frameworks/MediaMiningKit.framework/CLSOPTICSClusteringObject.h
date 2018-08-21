/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSInvestigationItem;
@class NSMutableArray, NSArray;

@interface CLSOPTICSClusteringObject : NSObject {

	unsigned long long _order;
	NSMutableArray* _neighbors;
	double _coreDistance;
	double _reachabilityDistance;
	BOOL _processed;
	id<CLSInvestigationItem> _object;
	unsigned long long _index;

}

@property (nonatomic,readonly) id<CLSInvestigationItem> object;              //@synthesize object=_object - In the implementation block
@property (assign) unsigned long long index;                                 //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned long long order;                       //@synthesize order=_order - In the implementation block
@property (nonatomic,retain,readonly) NSArray * neighbors;                   //@synthesize neighbors=_neighbors - In the implementation block
@property (assign,nonatomic) double coreDistance;                            //@synthesize coreDistance=_coreDistance - In the implementation block
@property (assign,nonatomic) double reachabilityDistance;                    //@synthesize reachabilityDistance=_reachabilityDistance - In the implementation block
@property (assign,nonatomic) BOOL processed;                                 //@synthesize processed=_processed - In the implementation block
+(id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3 ;
-(void)setProcessed:(BOOL)arg1 ;
-(BOOL)processed;
-(id<CLSInvestigationItem>)object;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
-(id)initWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3 ;
-(void)setCoreDistance:(double)arg1 ;
-(void)setReachabilityDistance:(double)arg1 ;
-(void)registerNeighbors:(id)arg1 deleteExisting:(BOOL)arg2 ;
-(id)neighborAtIndex:(unsigned long long)arg1 ;
-(void)sortNeighborsByDistance;
-(void)updateCoreDistanceForNeighbor:(unsigned long long)arg1 ;
-(NSArray *)neighbors;
-(double)coreDistance;
-(double)reachabilityDistance;
@end

