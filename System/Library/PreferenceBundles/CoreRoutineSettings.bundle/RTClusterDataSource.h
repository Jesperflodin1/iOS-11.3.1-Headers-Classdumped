/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RTRoutineManager, RTLocationShifter, NSMutableDictionary;

@interface RTClusterDataSource : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	RTRoutineManager* _routineManager;
	RTLocationShifter* _locationShifter;
	NSMutableDictionary* _allClusters;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;                //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) RTLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allClusters;                //@synthesize allClusters=_allClusters - In the implementation block
-(void)loadClusters:(/*^block*/id)arg1 ;
-(id)locationsForCluster:(id)arg1 ;
-(id)initWithRoutineManager:(id)arg1 locationShifter:(id)arg2 ;
-(void)_removeClusterLocationVisit:(id)arg1 clusterLocation:(id)arg2 cluster:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_removeClusterLocation:(id)arg1 cluster:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeCluster:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)shiftLocationOfInterestCoordinates:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)clusterLocationsOfInterest:(id)arg1 routes:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)clusterForIdentifier:(id)arg1 ;
-(id)clusterLocationForIdentifier:(id)arg1 inCluster:(id)arg2 ;
-(void)removeClusterLocationVisit:(id)arg1 clusterLocation:(id)arg2 cluster:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)visitsForClusterLocationIdentifier:(id)arg1 clusterIdentifier:(id)arg2 ;
-(void)removeClusterLocation:(id)arg1 cluster:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeCluster:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setAllClusters:(NSMutableDictionary *)arg1 ;
-(id)visitsForClusterLocation:(id)arg1 cluster:(id)arg2 ;
-(id)clusters;
-(id)init;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)allClusters;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(RTLocationShifter *)locationShifter;
-(void)setLocationShifter:(RTLocationShifter *)arg1 ;
@end

