/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectDelegate, TSPLazyReferenceDelegate, TSPUnarchiverDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPUnknownContent, NSUUID, TSPObjectContext;

@interface TSPUnarchiver : NSObject {

	unsigned _messageType;
	auto_ptr<google::protobuf::Message>* _message;
	long long _objectIdentifier;
	auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >* _strongReferences;
	unsigned long long _messageVersion;
	TSPUnknownContent* _unknownContent;
	id<TSPObjectDelegate> _objectDelegate;
	id<TSPLazyReferenceDelegate> _lazyReferenceDelegate;
	id<TSPUnarchiverDelegate> _delegate;
	vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> >* _references;
	vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> >* _repeatedReferences;
	vector<void ()(), std::__1::allocator<void ()()> >* _finalizeHandlers;
	FieldPath* _currentFieldPath;

}

@property (nonatomic,readonly) BOOL hasPreUFFVersion; 
@property (nonatomic,readonly) unsigned long long preUFFVersion; 
@property (nonatomic,readonly) BOOL isFromCopy; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@property (nonatomic,readonly) long long objectIdentifier;                               //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * objectUUID; 
@property (nonatomic,readonly) TSPUnknownContent * unknownContent;                       //@synthesize unknownContent=_unknownContent - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPObjectDelegate> objectDelegate;              //@synthesize objectDelegate=_objectDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPUnarchiverDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canValidateReferences; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,__weak,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) unsigned messageType;                                     //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) unsigned long long messageVersion;                        //@synthesize messageVersion=_messageVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) BOOL documentHasCurrentFileFormatVersion; 
@property (nonatomic,readonly) long long sourceType; 
-(void)readReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)fileFormatVersion;
-(void)addFinalizeHandler:(/*^block*/id)arg1 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readWeakReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(TSPUnknownContent *)unknownContent;
-(id<TSPObjectDelegate>)objectDelegate;
-(void)pushScopeForField:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)strongReferences;
-(void)readReferenceMessage:(const Reference*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6 completion:(/*^block*/id)arg7 ;
-(void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(BOOL*)arg2 validateStrongReferences:(BOOL)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(void)readRepeatedWeakReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readWeakLazyReferenceMessage:(const Reference*)arg1 retainObjectUntilArchived:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 retainObjectUntilArchived:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasDocumentVersionUUID;
-(void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canValidateReferences;
-(void)readUnownedReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedUnownedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readDataReferenceMessage:(const DataReference*)arg1 ;
-(id)readWeakObjectUUIDReferenceMessage:(const UUID*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readWeakObjectUUIDPathReferenceMessage:(const UUIDPath*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDReferenceMessage:(const RepeatedPtrField<TSP::UUID>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const RepeatedPtrField<TSP::UUIDPath>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMessageType:(unsigned)arg1 message:(auto_ptr<google::protobuf::Message>*)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >*)arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9 ;
-(vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> >*)repeatedReferences;
-(vector<void ()(), std::__1::allocator<void ()()> >*)finalizeHandlers;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(void)readReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isCrossDocumentPaste;
-(BOOL)isCrossAppPaste;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)arg1 ;
-(unsigned long long)preUFFVersion;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 isWeak:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readSparseWeakReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readSparseWeakObjectUUIDReferenceArrayMessage:(const SparseUUIDArray*)arg1 ;
-(id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const SparseUUIDPathArray*)arg1 ;
-(BOOL)isFromCopy;
-(long long)objectIdentifier;
-(unsigned)messageType;
-(id<TSPUnarchiverDelegate>)delegate;
-(void)dealloc;
-(TSPObjectContext *)context;
-(const Message*)message;
-(long long)sourceType;
-(NSUUID *)objectUUID;
-(BOOL)documentHasCurrentFileFormatVersion;
-(vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> >*)references;
-(BOOL)hasPreUFFVersion;
-(unsigned long long)messageVersion;
@end

