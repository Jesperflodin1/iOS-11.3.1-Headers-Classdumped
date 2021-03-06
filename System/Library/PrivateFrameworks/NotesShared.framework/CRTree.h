/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/CRObject.h>

@class CROrderedSet, CRTreeNode, CRDocument;

@interface CRTree : CRObject

@property (nonatomic,readonly) CROrderedSet * nodes; 
@property (nonatomic,readonly) CRTreeNode * root; 
@property (nonatomic,readonly) CRDocument * document; 
@property (nonatomic,readonly) long long count; 
+(id)CRProperties;
-(id)init;
-(long long)count;
-(void)removeNode:(id)arg1 ;
-(CRTreeNode *)root;
-(CRDocument *)document;
-(void)setDocument:(CRDocument *)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)computeChildren;
-(void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2 ;
-(void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2 ;
-(void)invalidateChildren;
-(CROrderedSet *)nodes;
-(void)mergeWith:(id)arg1 ;
@end

