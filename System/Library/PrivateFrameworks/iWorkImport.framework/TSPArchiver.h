/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPArchiverBase.h>

@protocol OS_dispatch_group, OS_dispatch_data;
@class NSArray, NSObject, NSMutableSet, NSHashTable, NSUUID, TSPObject, NSSet;

@interface TSPArchiver : TSPArchiverBase {

	Ac _flags;
	NSArray* _unknownMessages;
	NSObject*<OS_dispatch_group> _archiveGroup;
	NSObject*<OS_dispatch_group> _serializeGroup;
	NSObject*<OS_dispatch_data> _serializedData;
	NSMutableSet* _featureInfos;
	NSHashTable* _aggregatedStrongReferences;
	NSHashTable* _aggregatedWeakReferences;
	NSHashTable* _aggregatedCommandToModelReferences;
	NSHashTable* _aggregatedLazyReferences;
	NSHashTable* _aggregatedDataReferences;
	NSUUID* _objectUUID;
	TSPObject* _explicitComponentRootObject;

}

@property (nonatomic,readonly) NSUUID * objectUUID;                                           //@synthesize objectUUID=_objectUUID - In the implementation block
@property (nonatomic,readonly) TSPObject * explicitComponentRootObject;                       //@synthesize explicitComponentRootObject=_explicitComponentRootObject - In the implementation block
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) BOOL needsArchive; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> archiveGroup;                     //@synthesize archiveGroup=_archiveGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> serializeGroup;                   //@synthesize serializeGroup=_serializeGroup - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> serializedData;                    //@synthesize serializedData=_serializedData - In the implementation block
@property (nonatomic,readonly) NSSet * featureInfos; 
@property (nonatomic,readonly) NSHashTable * aggregatedStrongReferences;                      //@synthesize aggregatedStrongReferences=_aggregatedStrongReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * aggregatedWeakReferences;                        //@synthesize aggregatedWeakReferences=_aggregatedWeakReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * aggregatedCommandToModelReferences;              //@synthesize aggregatedCommandToModelReferences=_aggregatedCommandToModelReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * aggregatedLazyReferences;                        //@synthesize aggregatedLazyReferences=_aggregatedLazyReferences - In the implementation block
@property (nonatomic,readonly) NSHashTable * aggregatedDataReferences;                        //@synthesize aggregatedDataReferences=_aggregatedDataReferences - In the implementation block
@property (assign,nonatomic) unsigned long long messageVersion; 
@property (nonatomic,readonly) BOOL shouldSaveAlternates; 
-(void)requiresDocumentVersion:(unsigned long long)arg1 ;
-(void)addDocumentFeatureInfoWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 ;
-(void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 ;
-(void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 ;
-(void)aggregateReferencesFromArchiver:(id)arg1 ;
-(id)calculateOrderedArchivableContent;
-(void)validateOrderedArchivableContent:(id)arg1 ;
-(BOOL)updateMessageInfo:(MessageInfo*)arg1 withArchiver:(id)arg2 ;
-(BOOL)shouldSaveAlternates;
-(NSSet *)featureInfos;
-(void)requiresDocumentVersion:(unsigned long long)arg1 featureIdentifier:(id)arg2 ;
-(id)alternateForVersion:(unsigned long long)arg1 ;
-(BOOL)beginArchive;
-(BOOL)needsArchive;
-(BOOL)beginWrite;
-(TSPObject *)explicitComponentRootObject;
-(NSObject*<OS_dispatch_group>)archiveGroup;
-(NSObject*<OS_dispatch_group>)serializeGroup;
-(NSHashTable *)aggregatedStrongReferences;
-(NSHashTable *)aggregatedWeakReferences;
-(NSHashTable *)aggregatedCommandToModelReferences;
-(NSHashTable *)aggregatedLazyReferences;
-(NSHashTable *)aggregatedDataReferences;
-(id)initWithObject:(id)arg1 ;
-(void)cleanup;
-(void)fail;
-(BOOL)success;
-(NSUUID *)objectUUID;
-(NSObject*<OS_dispatch_data>)serializedData;
-(void)serialize;
-(void)archive;
@end

