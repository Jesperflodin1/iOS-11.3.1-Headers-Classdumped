/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRDictionary, NSHashTable, CRDocument, NSArray, NSString;

@interface CRSet : NSObject <CRDataType, NSFastEnumeration, CRCoding> {

	CRDictionary* _dictionary;
	NSHashTable* _observers;

}

@property (nonatomic,retain) CRDictionary * dictionary;                 //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tombstone;
-(id)init;
-(unsigned long long)count;
-(id)anyObject;
-(BOOL)containsObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR15*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(CRDictionary *)dictionary;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)allObjects;
-(void)setObject:(id)arg1 ;
-(void)setDictionary:(CRDictionary *)arg1 ;
-(CRDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)setUpdated:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 ;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 elementValueCoder:(/*^block*/id)arg3 ;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 elementValueDecoder:(/*^block*/id)arg3 ;
-(void)mergeWith:(id)arg1 ;
@end

