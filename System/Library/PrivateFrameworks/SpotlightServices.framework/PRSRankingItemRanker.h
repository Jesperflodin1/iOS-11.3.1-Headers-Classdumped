/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpotlightServices/SpotlightServices-Structs.h>
@class NSString, CSAttributeEvaluator, NSMapTable;

@interface PRSRankingItemRanker : NSObject {

	BOOL _isInternalDevice;
	BOOL _policyDisabled;
	NSString* _searchString;
	CSAttributeEvaluator* _fuzzyEvaluator;
	CSAttributeEvaluator* _evaluator;
	NSMapTable* _bundleFeatures;
	float* _bundleFeaturesScratchBuf;
	double _experimentalWeight1;
	double _experimentalWeight2;
	NSString* _meContactIdentifier;
	double _lastIsSpaceFeature;

}

@property (nonatomic,retain) NSString * searchString;                            //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) CSAttributeEvaluator * fuzzyEvaluator;              //@synthesize fuzzyEvaluator=_fuzzyEvaluator - In the implementation block
@property (nonatomic,retain) CSAttributeEvaluator * evaluator;                   //@synthesize evaluator=_evaluator - In the implementation block
@property (assign) BOOL isInternalDevice;                                        //@synthesize isInternalDevice=_isInternalDevice - In the implementation block
@property (nonatomic,retain) NSMapTable * bundleFeatures;                        //@synthesize bundleFeatures=_bundleFeatures - In the implementation block
@property (assign,nonatomic) float* bundleFeaturesScratchBuf;                    //@synthesize bundleFeaturesScratchBuf=_bundleFeaturesScratchBuf - In the implementation block
@property (assign,nonatomic) double experimentalWeight1;                         //@synthesize experimentalWeight1=_experimentalWeight1 - In the implementation block
@property (assign,nonatomic) double experimentalWeight2;                         //@synthesize experimentalWeight2=_experimentalWeight2 - In the implementation block
@property (nonatomic,retain) NSString * meContactIdentifier;                     //@synthesize meContactIdentifier=_meContactIdentifier - In the implementation block
@property (assign,nonatomic) BOOL policyDisabled;                                //@synthesize policyDisabled=_policyDisabled - In the implementation block
@property (assign,nonatomic) double lastIsSpaceFeature;                          //@synthesize lastIsSpaceFeature=_lastIsSpaceFeature - In the implementation block
+(void)initialize;
+(id)requiredAttributes;
+(/*^block*/id)shouldUpdateFuncForSnippetFeature:(unsigned long long)arg1 ;
+(id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1 ;
+(id)contactsBundle;
+(id)importantAttributesForBundle:(id)arg1 ;
+(id)appsBundle;
+(id)mailBundle;
+(id)messagesBundle;
+(id)calendarBundle;
+(id)notesBundle;
+(id)musicBundle;
+(id)settingsBundle;
+(void)setDockApps:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)deactivate;
-(void)activate;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setEvaluator:(CSAttributeEvaluator *)arg1 ;
-(CSAttributeEvaluator *)evaluator;
-(void)setIsInternalDevice:(BOOL)arg1 ;
-(BOOL)isInternalDevice;
-(id)initWithSearchString:(id)arg1 language:(id)arg2 experimentalWeight1:(double)arg3 experimentalWeight2:(double)arg4 ;
-(void)setLastIsSpaceFeature:(double)arg1 ;
-(void)setFuzzyEvaluator:(CSAttributeEvaluator *)arg1 ;
-(void)setBundleFeatures:(NSMapTable *)arg1 ;
-(void)setBundleFeaturesScratchBuf:(float*)arg1 ;
-(void)setExperimentalWeight1:(double)arg1 ;
-(void)setExperimentalWeight2:(double)arg1 ;
-(void)setPolicyDisabled:(BOOL)arg1 ;
-(float*)bundleFeaturesScratchBuf;
-(id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 ;
-(void)setMeContactIdentifier:(NSString *)arg1 ;
-(NSMapTable *)bundleFeatures;
-(void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned long long*)arg2 relRankFeatureOut:(unsigned long long*)arg3 ;
-(void)pickMostRecentDateForItem:(id)arg1 pastItems:(id*)arg2 futureItems:(id*)arg3 ;
-(void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2 ;
-(void)updateResultSetContext:(resultset_computation_ctx*)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3 ;
-(void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(resultset_computation_ctx*)arg2 uniqueScores:(id)arg3 ;
-(void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2 ;
-(void)populateLocalResultSetDateFeaturesForItems:(id)arg1 ;
-(void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2 ;
-(/*^block*/id)comparatorByJoiningComparator:(/*^block*/id)arg1 withPredicate:(id)arg2 ;
-(double)experimentalWeight1;
-(double)experimentalWeight2;
-(void)hackMusicResultsWithItem:(id)arg1 featureVector:(id)arg2 ;
-(void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2 ;
-(void)rerankItemsWithPolicyForBundleItems:(id)arg1 ;
-(BOOL)policyDisabled;
-(void)resetbundleFeaturesScratchBuf;
-(CSAttributeEvaluator *)fuzzyEvaluator;
-(double)lastIsSpaceFeature;
-(id)getDateInGMT:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 language:(id)arg2 ;
-(id)rankingConfiguration;
-(float*)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2 ;
-(BOOL)updateFeedbackScoresForPreparedItems:(id)arg1 currentL2ModelVersion:(id*)arg2 currentL2ShadowModelVersion:(id*)arg3 currentL3ModelVersion:(id*)arg4 ;
-(void)updateScoresForPreparedItems:(id)arg1 ;
-(BOOL)wasItemCreatedWithinAWeek:(id)arg1 ;
-(void)prepareItems:(id)arg1 inBundle:(id)arg2 ;
-(NSString *)meContactIdentifier;
@end

