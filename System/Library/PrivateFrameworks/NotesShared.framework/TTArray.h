/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRCoding.h>
#import <libobjc.A.dylib/TTMergeableStringDelegate.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol CRUndoDelegate;
@class CRDocument, NSObject, TTMergeableAttributedString, NSString, NSArray, NSUUID;

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType> {

	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;
	TTMergeableAttributedString* _contents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TTMergeableAttributedString * contents;               //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * nsArray; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
@property (nonatomic,retain) CRDocument * document;                                  //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(id)tombstone;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(NSObject*<CRUndoDelegate>)delegate;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)removeLastObject;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(TTMergeableAttributedString *)contents;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(CRDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)saveToArchive:(StringArray*)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(NSUUID *)replicaUUID;
-(id)initWithArchive:(const StringArray*)arg1 andReplicaID:(id)arg2 ;
-(id)initWithCRCoder:(id)arg1 stringArray:(const StringArray*)arg2 ;
-(id)initWithContents:(id)arg1 ;
-(id)serializeDataFromArchive:(const StringArray*)arg1 ;
-(id)textAttachmentAtIndex:(unsigned long long)arg1 ;
-(NSArray *)nsArray;
-(void)mergeWith:(id)arg1 ;
-(BOOL)wantsUndoCommands;
-(void)addUndoCommand:(id)arg1 ;
@end
