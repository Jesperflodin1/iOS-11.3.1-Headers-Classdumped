/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface PHALibraryChangeBuffer : NSObject {

	NSMutableDictionary* _assetIdentifierToFlagsMap;
	NSMutableSet* _representedAssetJobScenarios;
	NSMutableArray* _momentChanges;
	NSMutableArray* _personChanges;

}

@property (retain) NSMutableDictionary * assetIdentifierToFlagsMap;              //@synthesize assetIdentifierToFlagsMap=_assetIdentifierToFlagsMap - In the implementation block
@property (retain) NSMutableSet * representedAssetJobScenarios;                  //@synthesize representedAssetJobScenarios=_representedAssetJobScenarios - In the implementation block
@property (retain) NSMutableArray * momentChanges;                               //@synthesize momentChanges=_momentChanges - In the implementation block
@property (retain) NSMutableArray * personChanges;                               //@synthesize personChanges=_personChanges - In the implementation block
@property (readonly) unsigned long long uniqueChangeObjectCount; 
-(id)init;
-(void)drain;
-(NSMutableArray *)personChanges;
-(void)setPersonChanges:(NSMutableArray *)arg1 ;
-(BOOL)hasChanges;
-(void)addMomentChange:(id)arg1 ;
-(void)addPersonChange:(id)arg1 ;
-(NSMutableArray *)momentChanges;
-(NSMutableDictionary *)assetIdentifierToFlagsMap;
-(unsigned long long)uniqueChangeObjectCount;
-(id)snapshotAndDrain;
-(BOOL)hasMomentChanges;
-(BOOL)hasPersonChanges;
-(BOOL)hasAssetChanges;
-(id)changedAssetIdentifiers;
-(void)mergeFlags:(int)arg1 forAssetWithIdentifier:(id)arg2 ;
-(void)mergeRepresentedJobScenario:(unsigned long long)arg1 ;
-(NSMutableSet *)representedAssetJobScenarios;
-(BOOL)representsUserForegroundJobScenario;
-(void)setAssetIdentifierToFlagsMap:(NSMutableDictionary *)arg1 ;
-(void)setRepresentedAssetJobScenarios:(NSMutableSet *)arg1 ;
-(void)setMomentChanges:(NSMutableArray *)arg1 ;
@end
