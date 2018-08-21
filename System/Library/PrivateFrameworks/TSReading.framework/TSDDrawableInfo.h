/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSSPropertySource.h>
#import <TSReading/TSDChangeableInfo.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSKTransformableObject.h>
#import <TSReading/TSKSearchable.h>

@protocol TSDContainerInfo, TSDOwningAttachment, TSDAnnotationHosting;
@class TSDInfoGeometry, NSObject, TSPLazyReference, TSSPropertySetChangeDetails, TSDExteriorTextWrap, TSPObject, TSDDefaultPartitioner, NSURL, NSString, NSMutableDictionary;

@interface TSDDrawableInfo : TSPObject <TSSPropertySource, TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable> {

	TSDInfoGeometry* mGeometry;
	NSObject*<TSDContainerInfo> mParentInfo;
	TSPLazyReference* mParentInfoReference;
	BOOL mLocked;
	BOOL mAspectRatioLocked;
	TSSPropertySetChangeDetails* mChanges;
	TSDExteriorTextWrap* mExteriorTextWrap;
	TSPObject*<TSDOwningAttachment> mOwningAttachment;
	TSDDefaultPartitioner* mDefaultPartitioner;
	NSURL* mHyperlinkURL;
	id<TSDAnnotationHosting> mComment;
	NSString* mAccessibilityDescription;
	NSMutableDictionary* mAccessibilityDescriptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (getter=isLockable,nonatomic,readonly) BOOL lockable; 
@property (nonatomic,readonly) BOOL supportsAttachedComments; 
@property (assign,nonatomic) BOOL aspectRatioLocked; 
@property (nonatomic,readonly) BOOL canSizeBeChangedIncrementally; 
@property (nonatomic,copy) TSDExteriorTextWrap * exteriorTextWrap; 
@property (nonatomic,copy) NSURL * hyperlinkURL; 
@property (nonatomic,readonly) BOOL supportsHyperlinks; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,retain) NSMutableDictionary * accessibilityDescriptions; 
@property (nonatomic,copy) id<TSDAnnotationHosting> comment; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) BOOL isUserModifiable; 
@property (nonatomic,readonly) Class editorClass; 
+(BOOL)canPartition;
+(void)setShouldPartitionByDefault:(BOOL)arg1 ;
-(TSDInfoGeometry *)geometry;
-(void)dealloc;
-(id)objectForProperty:(int)arg1 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(void)setComment:(id<TSDAnnotationHosting>)arg1 ;
-(id<TSDAnnotationHosting>)comment;
-(id)copyWithContext:(id)arg1 ;
-(void)coalesceChanges:(id)arg1 ;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(id)searchForAnnotationsWithHitBlock:(/*^block*/id)arg1 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(float)floatValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(id)presetKind;
-(BOOL)matchesObjectPlaceholderGeometry;
-(void)setMatchesObjectPlaceholderGeometry:(BOOL)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(BOOL)isThemeContent;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(BOOL)supportsAttachedComments;
-(void)willChangeProperty:(int)arg1 ;
-(BOOL)isLockable;
-(void)performBlockWithTemporaryLayout:(/*^block*/id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(CGAffineTransform)transformInRoot;
-(id)containingGroup;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3 ;
-(id)descriptionForPasteboard;
-(CGPoint)transformableObjectAnchorPoint;
-(BOOL)isUserModifiable;
-(void)willChangeProperties:(id)arg1 ;
-(Class)editorClass;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(void)setHyperlinkURL:(NSURL *)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(BOOL)canSizeBeChangedIncrementally;
-(CGAffineTransform)computeFullTransform;
-(CGAffineTransform)fullTransformInRoot;
-(void)setExteriorTextWrap:(TSDExteriorTextWrap *)arg1 ;
-(TSDExteriorTextWrap *)exteriorTextWrap;
-(id)partitioner;
-(BOOL)supportsHyperlinks;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(BOOL)canAnchor;
-(BOOL)canChangeWrapType;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)animationFilters;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2 ;
-(BOOL)reverseChunkingIsSupported;
-(id)descriptionForPasteboardWithSource:(id)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)transformedGeometryWithTransform:(CGAffineTransform)arg1 inBounds:(CGRect)arg2 ;
-(NSURL *)hyperlinkURL;
-(BOOL)aspectRatioLocked;
-(NSString *)accessibilityDescription;
-(NSMutableDictionary *)accessibilityDescriptions;
-(void)setAccessibilityDescriptions:(NSMutableDictionary *)arg1 ;
-(void)setInsertionCenterPosition:(CGPoint)arg1 ;
-(int)elementKind;
@end

