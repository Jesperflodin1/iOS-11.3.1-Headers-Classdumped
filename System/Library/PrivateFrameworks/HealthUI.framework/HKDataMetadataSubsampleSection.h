/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKDataMetadataSection.h>

@protocol HKDataMetadataSubsampleDelegate;
@class HKSample, NSArray, HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController, NSMutableDictionary;

@interface HKDataMetadataSubsampleSection : HKDataMetadataSection {

	HKSample* _sample;
	NSArray* _subSampleTypes;
	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	id<HKDataMetadataSubsampleDelegate> _subsampleDelegate;
	NSMutableDictionary* _aggregationValue;

}

@property (nonatomic,readonly) HKSample * sample;                                                  //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) NSArray * subSampleTypes;                                           //@synthesize subSampleTypes=_subSampleTypes - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                        //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                    //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;                        //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,readonly) id<HKDataMetadataSubsampleDelegate> subsampleDelegate;              //@synthesize subsampleDelegate=_subsampleDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * aggregationValue;                               //@synthesize aggregationValue=_aggregationValue - In the implementation block
-(id)sectionTitle;
-(unsigned long long)numberOfRowsInSection;
-(HKSample *)sample;
-(HKDisplayTypeController *)displayTypeController;
-(HKUnitPreferenceController *)unitController;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithSample:(id)arg1 subSampleTypes:(id)arg2 healthStore:(id)arg3 displayTypeController:(id)arg4 unitController:(id)arg5 subsampleDelegate:(id)arg6 ;
-(NSArray *)subSampleTypes;
-(id)_mergeTypesForFixedValues:(id)arg1 subSampleTypes:(id)arg2 ;
-(void)_submitSubSampleAggregateQueriesWithCompletion:(/*^block*/id)arg1 ;
-(id)_subSampleAggregatePredicate:(id)arg1 ;
-(id)_formattedValueWithUnits:(id)arg1 sampleType:(id)arg2 ;
-(void)_updateAggregateValue:(id)arg1 sampleType:(id)arg2 aggregateQueryFinishedBlock:(/*^block*/id)arg3 ;
-(void)_submitSumAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(/*^block*/id)arg2 ;
-(void)_submitAverageAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(/*^block*/id)arg2 ;
-(void)_submitSingleValueQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(/*^block*/id)arg2 ;
-(void)_submitCountStandHourQueryForSampleType:(id)arg1 aggregateQueryFinishedBlock:(/*^block*/id)arg2 ;
-(id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2 ;
-(id)_trimAndSortSampleTypes:(id)arg1 ;
-(id<HKDataMetadataSubsampleDelegate>)subsampleDelegate;
-(NSMutableDictionary *)aggregationValue;
-(void)setAggregationValue:(NSMutableDictionary *)arg1 ;
-(HKHealthStore *)healthStore;
@end

