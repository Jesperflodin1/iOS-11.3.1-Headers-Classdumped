/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PIPipeline, NSMutableArray, NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject {

	PIPipeline* _pipeline;
	NSMutableArray* _performingInvestigations;
	NSArray* _profileClasses;
	NSMutableDictionary* _profileClassesByIdentifier;
	NSArray* _informantClasses;
	NSMutableDictionary* _informantClassesByIdentifier;
	NSMutableDictionary* _informantClassesByFamilyIdentifier;

}
+(void)invalidateAllSharedCaches;
+(void)invalidateSharedTransientCaches;
+(id)sharedInspector;
+(void)invalidateSharedPersistentCaches;
-(id)init;
-(Class)informantClassForIdentifier:(id)arg1 ;
-(id)informantClassesForFamilyIdentifier:(id)arg1 ;
-(Class)profileClassForIdentifier:(id)arg1 ;
-(id)informantClassesForAnyIdentifier:(id)arg1 ;
-(id)informantIdentifiersForAnyIdentifier:(id)arg1 ;
-(id)informantIdentifierForHash:(unsigned long long)arg1 ;
-(id)profileIdentifierForHash:(unsigned long long)arg1 ;
-(id)performingInvestigations;
-(BOOL)performInvestigation:(id)arg1 ;
-(BOOL)performInvestigation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cancelAllInvestigations;
-(BOOL)performInvestigation:(id)arg1 withPriority:(unsigned long long)arg2 andOptions:(unsigned long long)arg3 ;
-(void)waitUntilFinished;
@end

