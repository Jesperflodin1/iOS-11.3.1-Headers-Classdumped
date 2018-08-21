/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPComponentWriterDelegate, TSPComponentWriteChannel, OS_dispatch_semaphore, OS_dispatch_group, OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPComponent, NSString, TSPObject, TSPObjectReferenceMap, TSPArchiverManager, NSObject, NSHashTable, NSMapTable, TSPMutableComponentObjectUUIDMap, NSMutableSet, NSSet;

@interface TSPComponentWriter : NSObject {

	TSPComponent* _component;
	NSString* _locator;
	TSPObject* _rootObject;
	id<TSPComponentWriterDelegate> _delegate;
	long long _mode;
	unsigned char _packageIdentifier;
	TSPObjectReferenceMap* _objectReferenceMap;
	id<TSPComponentWriteChannel> _writeChannel;
	TSPArchiverManager* _archiverManager;
	NSObject*<OS_dispatch_semaphore> _delegateSemaphore;
	NSHashTable* _archivedObjects;
	NSMapTable* _archivedObjectsDictionary;
	TSPMutableComponentObjectUUIDMap* _componentObjectUUIDMap;
	vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry> >* _objectStack;
	NSObject*<OS_dispatch_group> _writeGroup;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSHashTable* _weakReferences;
	NSHashTable* _lazyReferences;
	NSHashTable* _dataReferences;
	NSMutableSet* _featureInfos;
	NSHashTable* _analyzedCommandToModelReferences;
	NSHashTable* _commandToModelReferences;
	NSHashTable* _newCommandToModelReferences;
	NSHashTable* _indirectCommandToModelExternalReferences;
	NSHashTable* _externalReferences;
	unsigned long long _objectTargetType;
	struct {
		unsigned success : 1;
		unsigned isErrorRecoverable : 1;
		unsigned calculatedObjectTargetType : 1;
		unsigned delegateRespondsToNeedsDocumentRecovery : 1;
		unsigned delegateRespondsToLocatorForClaimingComponent : 1;
		unsigned delegateRespondsToObjectBelongsToLinkedComponent : 1;
		unsigned delegateRespondsToExternalPackageDidWriteObject : 1;
		unsigned delegateRespondsToShouldDelayWritingObject : 1;
	}  _flags;

}

@property (nonatomic,readonly) TSPComponent * component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) NSSet * featureInfos;                  //@synthesize featureInfos=_featureInfos - In the implementation block
-(NSSet *)featureInfos;
-(id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(long long)arg5 packageIdentifier:(unsigned char)arg6 objectReferenceMapOrNil:(id)arg7 writeChannel:(id)arg8 archiverManager:(id)arg9 ;
-(void)writeWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acquireArchiverAccessLockAndWriteObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(BOOL)arg3 isAnalyzingExternalComponent:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)shouldDelayWritingObject:(id)arg1 ;
-(void)writeWithArchiverAccessLockForObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(BOOL)arg3 isAnalyzingExternalComponent:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isObjectExternal:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 validateAmbiguousObjectOwnership:(BOOL)arg4 hasArchiverAccessLock:(BOOL)arg5 claimingComponent:(id*)arg6 isOwnedByDifferentPackage:(BOOL*)arg7 ;
-(BOOL)validateObjectContextForObject:(id)arg1 ;
-(BOOL)shouldWriteObject:(id)arg1 ;
-(BOOL)shouldAnalyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(BOOL)arg2 ;
-(void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)analyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(BOOL)arg2 archiver:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)commandToModelReferencesToWrite;
-(void)validateAmbiguousObjectOwnershipForObject:(id)arg1 explicitComponentRootObject:(id)arg2 parentObject:(id)arg3 claimingComponent:(id)arg4 claimingPackageIdentifier:(unsigned char)arg5 claimingComponentWillBeLinked:(BOOL)arg6 ;
-(void)validateExplicitComponentOwnershipForObject:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(BOOL)arg4 ;
-(void)addCommandToModelReferences:(id)arg1 parentObject:(id)arg2 ;
-(void)writeArchiver:(id)arg1 ;
-(BOOL)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id*)arg3 claimingPackageIdentifier:(unsigned char*)arg4 claimingComponentWillBeLinked:(BOOL*)arg5 ;
-(BOOL)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg1 archiverOrNil:(id)arg2 claimingComponentOrNil:(id)arg3 hasArchiverAccessLock:(BOOL)arg4 explicitComponentRootObject:(id*)arg5 claimingComponent:(id*)arg6 isOwnedByDifferentPackage:(BOOL*)arg7 ;
-(BOOL)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2 ;
-(TSPComponent *)component;
-(id)init;
@end

