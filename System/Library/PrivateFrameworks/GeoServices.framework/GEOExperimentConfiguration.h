/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOExperimentServerProxyDelegate.h>

@protocol GEOExperimentServerProxy;
@class GEOABAssignmentResponse, NSLock, NSMutableArray, NSDictionary, NSString;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {

	id<GEOExperimentServerProxy> _serverProxy;
	GEOABAssignmentResponse* _experimentsInfo;
	NSLock* _experimentsInfoLock;
	NSMutableArray* _experimentObservers;
	NSLock* _experimentObserversLock;
	NSDictionary* _debugClientConfig;

}

@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
+(void)useProxy:(Class)arg1 ;
-(id)clientConfigurationValueForKey:(id)arg1 ;
-(void)removeExperimentObserver:(id)arg1 ;
-(void)addExperimentObserver:(id)arg1 queue:(id)arg2 ;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(GEOABAssignmentResponse *)experimentsInfo;
-(id)clientConfig;
-(id)experimentAssignmentForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)_mapsAbClientMetadata;
-(id)_parsecClientMetadata;
-(id)_siriClientMetadata;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(void)refreshDatasetABStatus:(id)arg1 ;
-(void)updateURLComponents:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(id)_debugClientConfig;
-(void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2 ;
-(id)experimentAssignments;
-(id)_reportAProblemClientMetadata;
-(id)experimentURLForURL:(id)arg1 type:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_fetchAllAvailableExperimentsResponse:(/*^block*/id)arg1 ;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1 ;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1 ;
-(void)_debug_forceUpdate;
-(id)_debug_configurationDate;
-(id)_debug_defaultQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_debug_forEachExperimentType:(/*^block*/id)arg1 ;
-(void)_debug_setActiveExperimentBranch:(id)arg1 ;
-(id)_debug_bucketId;
-(id)_debug_datasetId;
-(void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

