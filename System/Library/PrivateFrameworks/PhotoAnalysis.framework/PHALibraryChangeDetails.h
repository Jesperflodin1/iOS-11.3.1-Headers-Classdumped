/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, PHFetchResult;

@interface PHALibraryChangeDetails : NSObject {

	NSArray* _inserts;
	NSArray* _deletes;
	NSArray* _updates;
	NSDictionary* _changedAssetIdentifierToWorkerFlagsMap;
	PHFetchResult* _changedAssetsFetchResult;

}

@property (setter=_setInserts:,copy) NSArray * inserts;                                //@synthesize inserts=_inserts - In the implementation block
@property (setter=_setDeletes:,copy) NSArray * deletes;                                //@synthesize deletes=_deletes - In the implementation block
@property (setter=_setUpdates:,copy) NSArray * updates;                                //@synthesize updates=_updates - In the implementation block
@property (readonly) NSArray * allChangedObjects; 
@property (retain) NSDictionary * changedAssetIdentifierToWorkerFlagsMap;              //@synthesize changedAssetIdentifierToWorkerFlagsMap=_changedAssetIdentifierToWorkerFlagsMap - In the implementation block
@property (retain) PHFetchResult * changedAssetsFetchResult;                           //@synthesize changedAssetsFetchResult=_changedAssetsFetchResult - In the implementation block
+(id)changeDetailsForUpdatedObjects:(id)arg1 ;
-(NSArray *)updates;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(void)_setUpdates:(id)arg1 ;
-(NSArray *)allChangedObjects;
-(void)_setInserts:(id)arg1 ;
-(void)_setDeletes:(id)arg1 ;
-(NSDictionary *)changedAssetIdentifierToWorkerFlagsMap;
-(void)setChangedAssetIdentifierToWorkerFlagsMap:(NSDictionary *)arg1 ;
-(PHFetchResult *)changedAssetsFetchResult;
-(void)setChangedAssetsFetchResult:(PHFetchResult *)arg1 ;
@end

