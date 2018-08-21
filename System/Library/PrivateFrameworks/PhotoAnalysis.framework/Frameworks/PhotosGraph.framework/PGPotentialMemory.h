/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAssetCollection, PGGraphNode, NSSet, NSDate, CLLocation, NSString, NSDictionary, PGMemoryGenerator;

@interface PGPotentialMemory : NSObject {

	PHAssetCollection* _assetCollection;
	PGGraphNode* _momentNode;
	NSSet* _momentNodes;
	long long _sourceType;
	long long _category;
	long long _subcategory;
	double _score;
	NSDate* _localDate;
	CLLocation* _location;
	NSSet* _peopleUUIDs;
	NSString* _eventName;
	double _contentScore;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSSet* _features;
	NSSet* _momentIDs;
	NSDictionary* _numberOfAssetsByMomentIDs;
	PGPotentialMemory* _upgradedPotentialMemory;
	PGMemoryGenerator* _upgradedMemoryGenerator;

}

@property (retain) PHAssetCollection * assetCollection;                                //@synthesize assetCollection=_assetCollection - In the implementation block
@property (retain) PGGraphNode * momentNode;                                           //@synthesize momentNode=_momentNode - In the implementation block
@property (retain) NSSet * momentNodes;                                                //@synthesize momentNodes=_momentNodes - In the implementation block
@property (assign) long long sourceType;                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) long long category;                                                 //@synthesize category=_category - In the implementation block
@property (assign) long long subcategory;                                              //@synthesize subcategory=_subcategory - In the implementation block
@property (assign) double score;                                                       //@synthesize score=_score - In the implementation block
@property (retain) NSDate * localDate;                                                 //@synthesize localDate=_localDate - In the implementation block
@property (retain) CLLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                                //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
@property (retain) NSString * eventName;                                               //@synthesize eventName=_eventName - In the implementation block
@property (assign) double contentScore;                                                //@synthesize contentScore=_contentScore - In the implementation block
@property (retain) NSSet * features;                                                   //@synthesize features=_features - In the implementation block
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDate * universalStartDate;                                      //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (readonly) NSDate * universalEndDate;                                        //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (readonly) NSSet * momentIDs;                                                //@synthesize momentIDs=_momentIDs - In the implementation block
@property (readonly) NSDictionary * numberOfAssetsByMomentIDs;                         //@synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs - In the implementation block
@property (nonatomic,retain) PGPotentialMemory * upgradedPotentialMemory;              //@synthesize upgradedPotentialMemory=_upgradedPotentialMemory - In the implementation block
@property (nonatomic,retain) PGMemoryGenerator * upgradedMemoryGenerator;              //@synthesize upgradedMemoryGenerator=_upgradedMemoryGenerator - In the implementation block
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(CLLocation *)location;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setSubcategory:(long long)arg1 ;
-(long long)subcategory;
-(PHAssetCollection *)assetCollection;
-(double)score;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setFeatures:(NSSet *)arg1 ;
-(NSSet *)features;
-(NSSet *)momentNodes;
-(double)computeContentScoreUsingMemoryController:(id)arg1 ;
-(double)contentScore;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(void)_resetOverlapCheck;
-(id)initWithCategory:(long long)arg1 subcategory:(long long)arg2 ;
-(NSDate *)localDate;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
-(NSSet *)peopleUUIDs;
-(id)initWithCategory:(long long)arg1 subcategory:(long long)arg2 momentNode:(id)arg3 ;
-(id)buildAssetCollectionUsingMemoryController:(id)arg1 withMinimumNumberOfAssets:(unsigned long long)arg2 ;
-(id)initWithCategory:(long long)arg1 subcategory:(long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4 ;
-(void)setContentScore:(double)arg1 ;
-(NSSet *)momentIDs;
-(PGGraphNode *)momentNode;
-(void)_prepareForOverlapCheck;
-(NSDictionary *)numberOfAssetsByMomentIDs;
-(void)setUpgradedPotentialMemory:(PGPotentialMemory *)arg1 ;
-(void)setUpgradedMemoryGenerator:(PGMemoryGenerator *)arg1 ;
-(PGPotentialMemory *)upgradedPotentialMemory;
-(PGMemoryGenerator *)upgradedMemoryGenerator;
-(void)setMomentNode:(PGGraphNode *)arg1 ;
@end

