/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet, NSArray;

@interface TSTTableSortOrder : NSObject <NSCopying> {

	NSIndexSet* mCachedIndices;
	int mType;
	NSArray* mRules;

}

@property (nonatomic,readonly) NSArray * rules; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSIndexSet * columnIndices; 
@property (nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) unsigned long long ruleCount; 
+(id)sortOrderWithRules:(id)arg1 type:(int)arg2 ;
+(id)sortOrderWithColumn:(unsigned char)arg1 direction:(int)arg2 type:(int)arg3 ;
-(void)encodeToArchive:(TableSortOrderArchive*)arg1 ;
-(id)initFromArchive:(const TableSortOrderArchive*)arg1 ;
-(id)initWithRules:(id)arg1 type:(int)arg2 ;
-(id)sortOrderByChangingTypeTo:(int)arg1 ;
-(id)sortOrderByAddingRule:(id)arg1 ;
-(id)sortOrderByRemovingRuleAtIndex:(unsigned long long)arg1 ;
-(id)sortOrderByReplacingRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2 ;
-(id)sortOrderByReplacingRulesWithRules:(id)arg1 ;
-(id)sortOrderByRemovingColumnIndices:(id)arg1 ;
-(BOOL)containsAnyRulesInColumns:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexSet *)columnIndices;
-(BOOL)empty;
-(unsigned long long)ruleCount;
-(NSArray *)rules;
@end

