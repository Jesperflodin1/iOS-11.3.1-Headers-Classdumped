/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSDMutableContainerInfo.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSDSelectionStatisticsContributor.h>
#import <iWorkImport/TSDModelContainer.h>
#import <iWorkImport/TSDAttachmentAwareContainerInfo.h>

@class NSMutableArray, NSArray, NSString, TSDInfoGeometry, NSSet;

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor, TSDModelContainer, TSDAttachmentAwareContainerInfo> {

	NSMutableArray* mChildInfos;
	BOOL mIsInDocument;

}

@property (nonatomic,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) NSArray * allNestedChildrenInfos; 
@property (nonatomic,readonly) NSArray * allNestedChildrenInfosForWrap; 
@property (nonatomic,readonly) NSArray * allNestedChildrenInfosIncludingGroups; 
@property (nonatomic,readonly) BOOL canAspectRatioLockBeChangedByUser; 
@property (nonatomic,readonly) BOOL isFreehandDrawing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) NSArray * containedModels; 
@property (nonatomic,readonly) NSSet * infosToObserveForAttachedInfo; 
+(Class)classForUnarchiver:(id)arg1 ;
+(id)p_drawablesToInsertForGroup:(id)arg1 outDidUngroup:(BOOL*)arg2 filteredWithBlock:(/*^block*/id)arg3 ;
+(id)drawablesToInsertForGroup:(id)arg1 filteredWithBlock:(/*^block*/id)arg2 ;
+(id)groupGeometryFromChildrenInfos:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchive:(GroupArchive*)arg1 archiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeContainedModel:(id)arg1 ;
-(void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(NSArray *)containedModels;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(void)loadFromArchive:(const GroupArchive*)arg1 unarchiver:(id)arg2 upgradeDOLC:(BOOL)arg3 ;
-(id)infoForSelectionPath:(id)arg1 ;
-(BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
-(NSSet *)infosToObserveForAttachedInfo;
-(NSArray *)allNestedChildrenInfosForWrap;
-(BOOL)isFreehandDrawing;
-(BOOL)containsDisallowedElementKind:(unsigned)arg1 ;
-(TSDInfoGeometry *)geometry;
-(void)dealloc;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(BOOL)needsDownload;
-(id)copyWithContext:(id)arg1 ;
-(id)childEnumerator;
-(void)acceptVisitor:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSArray *)childInfos;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(BOOL)canAnchor;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)setChildInfos:(NSArray *)arg1 ;
-(void)addChildInfo:(id)arg1 ;
-(void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertChildInfo:(id)arg1 below:(id)arg2 ;
-(void)insertChildInfo:(id)arg1 above:(id)arg2 ;
-(void)moveChildren:(id)arg1 toIndexes:(id)arg2 ;
-(void)removeChildInfo:(id)arg1 ;
-(void)replaceChildInfo:(id)arg1 with:(id)arg2 ;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)supportsParentRotation;
-(NSArray *)allNestedChildrenInfos;
-(NSArray *)allNestedChildrenInfosIncludingGroups;
-(id)groupedGeometryForChildInfo:(id)arg1 ;
-(void)removeAllChildrenInDocument:(BOOL)arg1 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg1 ;
-(id)ungroupedGeometryForChildInfo:(id)arg1 ;
-(void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
-(void)ensureGeometryFitsChildren;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
@end

