/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet {

	NSMutableDictionary* _fetchDictionariesByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * fetchDictionariesByWorkerType;              //@synthesize fetchDictionariesByWorkerType=_fetchDictionariesByWorkerType - In the implementation block
+(id)propertiesToFetch;
+(BOOL)isToMany;
+(id)keyPathToPrimaryObject;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)entityName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3 ;
-(NSMutableDictionary *)fetchDictionariesByWorkerType;
@end
