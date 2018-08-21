/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/CRObject.h>

@class CRTree, NSArray, CRWeakReference;

@interface CRTreeNode : CRObject {

	CRTree* _tree;
	NSArray* _children;

}

@property (assign,nonatomic,__weak) CRTree * tree;                     //@synthesize tree=_tree - In the implementation block
@property (assign,nonatomic,__weak) CRTreeNode * parent; 
@property (nonatomic,retain) CRWeakReference * parentRef; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) NSArray * children;                       //@synthesize children=_children - In the implementation block
+(id)CRProperties;
-(void)removeNode:(id)arg1 ;
-(CRTreeNode *)parent;
-(NSArray *)children;
-(id)parentReference;
-(CRTree *)tree;
-(BOOL)isInLoop;
-(id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3 ;
-(BOOL)isLoopNode;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setTree:(CRTree *)arg1 ;
-(void)setParent:(CRTreeNode *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
@end
