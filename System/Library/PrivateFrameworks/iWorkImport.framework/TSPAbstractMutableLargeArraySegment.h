/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol TSPMutableLargeArraySegmentDelegate;
@class NSString, NSMutableArray;

@interface TSPAbstractMutableLargeArraySegment : TSPObject <NSFastEnumeration> {

	BOOL _storeOutsideObjectArchive;
	BOOL _shouldDelayArchiving;
	unsigned _delayedArchivingPriority;
	NSString* _packageLocator;
	NSMutableArray* _backingStore;
	unsigned long long _mutations;
	unsigned long long _estimatedByteSize;
	id<TSPMutableLargeArraySegmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TSPMutableLargeArraySegmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long count; 
@property (assign,nonatomic) BOOL storeOutsideObjectArchive;                                       //@synthesize storeOutsideObjectArchive=_storeOutsideObjectArchive - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayArchiving;                                            //@synthesize shouldDelayArchiving=_shouldDelayArchiving - In the implementation block
@property (assign,nonatomic) unsigned delayedArchivingPriority; 
@property (assign,nonatomic) unsigned long long estimatedByteSize; 
@property (nonatomic,copy) NSString * packageLocator;                                              //@synthesize packageLocator=_packageLocator - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)addObject:(id)arg1 willModify:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 context:(id)arg2 ;
-(unsigned long long)estimatedByteSizeOfElement:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 shouldDelayArchiving:(BOOL)arg2 context:(id)arg3 ;
-(void)setStoreOutsideObjectArchive:(BOOL)arg1 ;
-(void)setDelayedArchivingPriority:(unsigned)arg1 ;
-(void)setPackageLocator:(NSString *)arg1 ;
-(void)loadFromLargeArraySegmentMessage:(const LargeArraySegment*)arg1 unarchiver:(id)arg2 ;
-(void)saveToLargeArraySegmentMessage:(LargeArraySegment*)arg1 archiver:(id)arg2 ;
-(void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)arg1 ;
-(void)setShouldDelayArchiving:(BOOL)arg1 ;
-(id)initWithArray:(id)arg1 delegate:(id)arg2 shouldDelayArchiving:(BOOL)arg3 context:(id)arg4 ;
-(id)bisectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)estimatedByteSize;
-(void)setEstimatedByteSize:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id<TSPMutableLargeArraySegmentDelegate>)delegate;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS89*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<TSPMutableLargeArraySegmentDelegate>)arg1 ;
-(void)removeLastObject;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)commonInit;
-(NSString *)packageLocator;
-(BOOL)storeOutsideObjectArchive;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
@end

