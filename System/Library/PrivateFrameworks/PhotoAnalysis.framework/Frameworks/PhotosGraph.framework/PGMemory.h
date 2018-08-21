/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMemoryProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, PHAssetCollection, PHAsset, NSString, CLLocation, NSSet, NSMutableSet, PGMemoryDebug, NSDictionary, NSArray;

@interface PGMemory : NSObject <PGMemoryProtocol, NSCoding> {

	NSDate* _creationDate;
	PHAssetCollection* _assetCollection;
	PHAssetCollection* _curatedAssetCollection;
	PHAssetCollection* _extendedCuratedAssetCollection;
	PHAsset* _curatedKeyAsset;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSString* _title;
	NSString* _subtitle;
	long long _titleCategory;
	double _score;
	long long _sourceType;
	unsigned long long _duration;
	long long _category;
	long long _subcategory;
	long long _originalSubcategory;
	unsigned long long _matchedTypes;
	NSDate* _matchedLocalDate;
	CLLocation* _matchedLocation;
	NSSet* _matchedPeople;
	NSString* _matchedEventName;
	NSSet* _features;
	NSMutableSet* _persistedFeatures;
	unsigned long long _aggregatedVersions;
	NSString* _meUUID;
	PGMemoryDebug* _debug;
	long long _notificationQuality;
	NSSet* _momentIDs;
	NSDictionary* _numberOfAssetsByMomentIDs;
	NSArray* _blacklistableFeatures;
	NSString* _rejectionCause;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * creationDate;                                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) PHAssetCollection * curatedAssetCollection;                      //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) PHAssetCollection * extendedCuratedAssetCollection;              //@synthesize extendedCuratedAssetCollection=_extendedCuratedAssetCollection - In the implementation block
@property (nonatomic,retain) PHAsset * curatedKeyAsset;                                       //@synthesize curatedKeyAsset=_curatedKeyAsset - In the implementation block
@property (nonatomic,retain) NSDate * localStartDate;                                         //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,retain) NSDate * localEndDate;                                           //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,retain) NSDate * universalStartDate;                                     //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,retain) NSDate * universalEndDate;                                       //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) double score;                                                    //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) long long sourceType;                                            //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long category;                                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long subcategory;                                           //@synthesize subcategory=_subcategory - In the implementation block
@property (assign,nonatomic) long long originalSubcategory;                                   //@synthesize originalSubcategory=_originalSubcategory - In the implementation block
@property (assign,nonatomic) unsigned long long matchedTypes;                                 //@synthesize matchedTypes=_matchedTypes - In the implementation block
@property (nonatomic,retain) NSDate * matchedLocalDate;                                       //@synthesize matchedLocalDate=_matchedLocalDate - In the implementation block
@property (nonatomic,retain) CLLocation * matchedLocation;                                    //@synthesize matchedLocation=_matchedLocation - In the implementation block
@property (nonatomic,retain) NSSet * matchedPeople;                                           //@synthesize matchedPeople=_matchedPeople - In the implementation block
@property (nonatomic,retain) NSString * matchedEventName;                                     //@synthesize matchedEventName=_matchedEventName - In the implementation block
@property (nonatomic,retain) NSMutableSet * persistedFeatures;                                //@synthesize persistedFeatures=_persistedFeatures - In the implementation block
@property (assign,nonatomic) unsigned short graphSchemaVersion; 
@property (assign,nonatomic) unsigned short curationAlgorithmsVersion; 
@property (assign,nonatomic) unsigned short relatedAlgorithmsVersion; 
@property (assign,nonatomic) unsigned short memoriesAlgorithmsVersion; 
@property (nonatomic,retain) NSString * meUUID;                                               //@synthesize meUUID=_meUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * numberOfAssetsByMomentIDs;                        //@synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs - In the implementation block
@property (nonatomic,retain) NSArray * blacklistableFeatures;                                 //@synthesize blacklistableFeatures=_blacklistableFeatures - In the implementation block
@property (assign,nonatomic) NSString * rejectionCause;                                       //@synthesize rejectionCause=_rejectionCause - In the implementation block
@property (assign,nonatomic) long long titleCategory;                                         //@synthesize titleCategory=_titleCategory - In the implementation block
@property (nonatomic,readonly) unsigned long long aggregatedVersions;                         //@synthesize aggregatedVersions=_aggregatedVersions - In the implementation block
@property (nonatomic,retain) NSSet * momentIDs;                                               //@synthesize momentIDs=_momentIDs - In the implementation block
@property (nonatomic,retain) PGMemoryDebug * debug;                                           //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) long long notificationQuality;                                   //@synthesize notificationQuality=_notificationQuality - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                           //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,retain) NSSet * features;                                                //@synthesize features=_features - In the implementation block
+(id)stringForSourceType:(long long)arg1 ;
+(id)mustSeeMemoryCriteria;
+(id)stellarMemoryCriteria;
+(id)greatMemoryCriteria;
+(id)otherMemoryCriteria;
-(void)setScore:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(unsigned long long)duration;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(NSString *)title;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(void)setSubcategory:(long long)arg1 ;
-(BOOL)isMustSee;
-(BOOL)isStellar;
-(BOOL)isGreat;
-(long long)subcategory;
-(id)initWithAssetCollection:(id)arg1 ;
-(NSArray *)blacklistableFeatures;
-(NSString *)rejectionCause;
-(PHAssetCollection *)assetCollection;
-(long long)titleCategory;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(double)score;
-(void)setFeatures:(NSSet *)arg1 ;
-(NSSet *)features;
-(void)setTitleCategory:(long long)arg1 ;
-(void)setCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(PGMemoryDebug *)debug;
-(void)setExtendedCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(void)setCuratedKeyAsset:(PHAsset *)arg1 ;
-(void)setNotificationQuality:(long long)arg1 ;
-(void)setMatchedEventName:(NSString *)arg1 ;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(void)setGraphSchemaVersion:(unsigned short)arg1 ;
-(void)setRelatedAlgorithmsVersion:(unsigned short)arg1 ;
-(unsigned short)graphSchemaVersion;
-(unsigned short)relatedAlgorithmsVersion;
-(unsigned long long)aggregatedVersions;
-(NSSet *)momentIDs;
-(void)setMomentIDs:(NSSet *)arg1 ;
-(PHAssetCollection *)curatedAssetCollection;
-(void)setMatchedTypes:(unsigned long long)arg1 ;
-(void)setMatchedPeople:(NSSet *)arg1 ;
-(double)phMemoryScore;
-(double)_scoreForMemoryCriteria:(id)arg1 ;
-(long long)notificationQuality;
-(NSString *)matchedEventName;
-(NSSet *)matchedPeople;
-(NSDictionary *)numberOfAssetsByMomentIDs;
-(void)setCurationAlgorithmsVersion:(unsigned short)arg1 ;
-(void)setMemoriesAlgorithmsVersion:(unsigned short)arg1 ;
-(id)_localIdentifiersInAssetCollection:(id)arg1 ;
-(void)addPersistedFeature:(id)arg1 ;
-(unsigned short)curationAlgorithmsVersion;
-(unsigned short)memoriesAlgorithmsVersion;
-(void)setMatchedLocalDate:(NSDate *)arg1 ;
-(void)setMatchedLocation:(CLLocation *)arg1 ;
-(PHAssetCollection *)extendedCuratedAssetCollection;
-(PHAsset *)curatedKeyAsset;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(long long)originalSubcategory;
-(void)setOriginalSubcategory:(long long)arg1 ;
-(unsigned long long)matchedTypes;
-(NSDate *)matchedLocalDate;
-(CLLocation *)matchedLocation;
-(NSMutableSet *)persistedFeatures;
-(void)setPersistedFeatures:(NSMutableSet *)arg1 ;
-(NSString *)meUUID;
-(void)setMeUUID:(NSString *)arg1 ;
-(void)setDebug:(PGMemoryDebug *)arg1 ;
-(void)setNumberOfAssetsByMomentIDs:(NSDictionary *)arg1 ;
-(void)setBlacklistableFeatures:(NSArray *)arg1 ;
-(void)setRejectionCause:(NSString *)arg1 ;
@end

